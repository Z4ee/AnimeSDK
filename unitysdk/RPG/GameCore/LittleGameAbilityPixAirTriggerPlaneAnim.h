#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_23153931A8C47971_OFFSET UNITYSDK_OFFSET(0x198959C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_846D41249A662EA8_OFFSET UNITYSDK_OFFSET(0x19895940)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x19895990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirTriggerPlaneAnim_TypeDefinitionIndex = 20228;

	class LittleGameAbilityPixAirTriggerPlaneAnim : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::System::String* TriggerName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_846D41249A662EA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_846D41249A662EA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23153931A8C47971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_23153931A8C47971_OFFSET))(a1, a2);
		}
	};
}
