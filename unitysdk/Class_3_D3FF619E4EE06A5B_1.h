#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_B1452AB91A4F872E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14567090)
#define CLASS_3_D3FF619E4EE06A5B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145670D0)
#define CLASS_3_D3FF619E4EE06A5B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14567060)
#define CLASS_3_D3FF619E4EE06A5B_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14567230)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_1_TypeDefinitionIndex = 50390;

class Class_3_D3FF619E4EE06A5B_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_B1452AB91A4F872E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B1452AB91A4F872E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B1452AB91A4F872E*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
