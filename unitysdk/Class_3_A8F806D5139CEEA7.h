#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_469A56953483CA0D;
namespace RPG::GameCore { class AdvOverrideNpcMonsterButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8F806D5139CEEA7_METHOD_3_7AAF4659D71CE76F_OFFSET UNITYSDK_OFFSET(0x17AC5400)
#define CLASS_3_A8F806D5139CEEA7_METHOD_3_A991DD36E46E4BD2_OFFSET UNITYSDK_OFFSET(0x17AC55B0)
#define CLASS_3_A8F806D5139CEEA7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AC5920)
#define CLASS_3_A8F806D5139CEEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC53D0)

inline static constexpr unsigned int Class_3_A8F806D5139CEEA7_TypeDefinitionIndex = 50074;

class Class_3_A8F806D5139CEEA7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7AAF4659D71CE76F(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_METHOD_3_7AAF4659D71CE76F_OFFSET))(this, a1);
	}

	::System::Void Method_3_A991DD36E46E4BD2(::RPG::GameCore::ColliderTriggerComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_METHOD_3_A991DD36E46E4BD2_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_ONTASKBEGIN_OFFSET))(this);
	}
};
