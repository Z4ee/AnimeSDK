#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CrosshairLayoutType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_094C8096E8739648_OFFSET UNITYSDK_OFFSET(0x1D1156B0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_87795E0FA3DBA95A_OFFSET UNITYSDK_OFFSET(0x1D1159C0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D115920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParam_TypeDefinitionIndex = 23407;

	class ChangeCharacterConfigParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::RPG::GameCore::ResilienceEnum Resilience; // 0x24
		::RPG::MVector3 BuffPanelOffset; // 0x28
		::RPG::GameCore::LocationConfig* Location; // 0x38
		::System::Single VisualRadius; // 0x40
		::RPG::GameCore::HitBoxConfig* HitBox; // 0x48
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x50
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* EffectAdaptionList; // 0x58
		::System::String* GraphEmotionAsset; // 0x60
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x68
		::System::String* AnimEventPreloadTag; // 0x70
		::RPG::MVector3 HudOffset; // 0x78
		::System::String* CustomHUDAttachPointName; // 0x88
		::System::Single HudOffsetBlendTime; // 0x90
		::System::Int32 ViewModeExtraEffectID; // 0x94
		::RPG::GameCore::CrosshairType CrosshairType; // 0x98
		::RPG::GameCore::CrosshairLayoutType CrosshairLayout; // 0x9C
		::RPG::GameCore::CrosshairType MainCrosshairType; // 0xA0
		::RPG::GameCore::SpecialSkillButtonGroupType SpecialSkillButtonGroupType; // 0xA4
		::RPG::GameCore::CharacterHUDType HUDType; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_094C8096E8739648(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_094C8096E8739648_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87795E0FA3DBA95A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_87795E0FA3DBA95A_OFFSET))(a1, a2);
		}
	};
}
