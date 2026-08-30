#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BB8B7764D3497776;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class RtAddStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_0FF9150473FAE176_METHOD_3_350158C390D9C59F_OFFSET UNITYSDK_OFFSET(0x152E5D00)
#define CLASS_3_0FF9150473FAE176_METHOD_3_4384D4E1D98F4564_OFFSET UNITYSDK_OFFSET(0x152E5DD0)
#define CLASS_3_0FF9150473FAE176_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152E5BE0)
#define CLASS_3_0FF9150473FAE176__CTOR_OFFSET UNITYSDK_OFFSET(0x152E5BB0)

inline static constexpr unsigned int Class_3_0FF9150473FAE176_TypeDefinitionIndex = 54031;

class Class_3_0FF9150473FAE176 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtAddStageAbilityByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAddStageAbilityByName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAddStageAbilityByName*))((::PBYTE)hIl2Cpp + CLASS_3_0FF9150473FAE176__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FF9150473FAE176_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_350158C390D9C59F(::Class_3_BB8B7764D3497776* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0FF9150473FAE176_METHOD_3_350158C390D9C59F_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* Method_3_4384D4E1D98F4564()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FF9150473FAE176_METHOD_3_4384D4E1D98F4564_OFFSET))(this);
	}
};
