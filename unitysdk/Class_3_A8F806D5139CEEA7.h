#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_469A56953483CA0D;
namespace RPG::GameCore { class AdvOverrideNpcMonsterButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8F806D5139CEEA7_METHOD_3_58920859582B86DB_OFFSET UNITYSDK_OFFSET(0x87DD3A0)
#define CLASS_3_A8F806D5139CEEA7_METHOD_3_FD460C2B5F69BC86_OFFSET UNITYSDK_OFFSET(0x87DD1E0)
#define CLASS_3_A8F806D5139CEEA7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87DD6A0)
#define CLASS_3_A8F806D5139CEEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x87DD1B0)

inline static constexpr unsigned int Class_3_A8F806D5139CEEA7_TypeDefinitionIndex = 42474;

class Class_3_A8F806D5139CEEA7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FD460C2B5F69BC86(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_METHOD_3_FD460C2B5F69BC86_OFFSET))(this, a1);
	}

	::System::Void Method_3_58920859582B86DB(::RPG::GameCore::ColliderTriggerComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_METHOD_3_58920859582B86DB_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8F806D5139CEEA7_ONTASKBEGIN_OFFSET))(this);
	}
};
