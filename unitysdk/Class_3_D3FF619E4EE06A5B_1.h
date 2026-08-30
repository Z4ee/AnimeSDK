#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_875AAC2B190E37C1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EA5F30)
#define CLASS_3_D3FF619E4EE06A5B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA5F70)
#define CLASS_3_D3FF619E4EE06A5B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA5F00)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_1_TypeDefinitionIndex = 54153;

class Class_3_D3FF619E4EE06A5B_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_875AAC2B190E37C1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_875AAC2B190E37C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_875AAC2B190E37C1*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1_ONTASKBEGIN_OFFSET))(this);
	}
};
