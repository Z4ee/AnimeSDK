#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_23153931A8C47971_OFFSET UNITYSDK_OFFSET(0x1D1FBC00)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_63BFDA8E012AA0B2_OFFSET UNITYSDK_OFFSET(0x1D1FBBC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FBBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirTriggerPlaneAnim_TypeDefinitionIndex = 21154;

	class LittleGameAbilityPixAirTriggerPlaneAnim : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::System::String* TriggerName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63BFDA8E012AA0B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_63BFDA8E012AA0B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23153931A8C47971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_METHOD_4_23153931A8C47971_OFFSET))(a1, a2);
		}
	};
}
