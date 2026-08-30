#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_415;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class RemoveModifierByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB8747EF69BCE10D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168780B0)
#define CLASS_3_BB8747EF69BCE10D_METHOD_3_12A539922456216C_OFFSET UNITYSDK_OFFSET(0x16877D60)
#define CLASS_3_BB8747EF69BCE10D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16877B50)
#define CLASS_3_BB8747EF69BCE10D__CTOR_OFFSET UNITYSDK_OFFSET(0x16877A90)

inline static constexpr unsigned int Class_3_BB8747EF69BCE10D_TypeDefinitionIndex = 55510;

class Class_3_BB8747EF69BCE10D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveModifierByBehaviorFlag*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_12A539922456216C(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_METHOD_3_12A539922456216C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_DISPOSE_OFFSET))(this);
	}
};
