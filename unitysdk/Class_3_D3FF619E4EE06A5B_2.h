#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_BA267B1408695E90;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FDB1D0)
#define CLASS_3_D3FF619E4EE06A5B_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FDB210)
#define CLASS_3_D3FF619E4EE06A5B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDB1A0)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_2_TypeDefinitionIndex = 51472;

class Class_3_D3FF619E4EE06A5B_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_BA267B1408695E90*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BA267B1408695E90* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BA267B1408695E90*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_2_ONTASKBEGIN_OFFSET))(this);
	}
};
