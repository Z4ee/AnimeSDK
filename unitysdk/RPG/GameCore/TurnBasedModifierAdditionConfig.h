#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierEventFilterMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierValueBindData; }
namespace RPG::GameCore { class SubModifierData; }
namespace RPG::GameCore { class TurnBasedModifierDependencyConfig; }

#define RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_METHOD_2_4068E961C806D746_OFFSET UNITYSDK_OFFSET(0x1D29D550)
#define RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierAdditionConfig_TypeDefinitionIndex = 18016;

	class TurnBasedModifierAdditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierEventFilterMask FilterMask; // 0x10
		::RPG::GameCore::TurnBasedModifierDependencyConfig* DependencyOnAdd; // 0x18
		::RPG::GameCore::TurnBasedModifierDependencyConfig* DependencyOnRemove; // 0x20
		::Il2CppArray<::RPG::GameCore::SubModifierData*>* SubModifierList; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierValueBindData*>* ValueBindList; // 0x30
		::System::Boolean InfectAddSubModifier; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4068E961C806D746(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierAdditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierAdditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_METHOD_2_4068E961C806D746_OFFSET))(a1, a2);
		}
	};
}
