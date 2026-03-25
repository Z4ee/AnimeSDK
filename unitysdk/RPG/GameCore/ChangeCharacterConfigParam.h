#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_350AD3A2F462FDE6_OFFSET UNITYSDK_OFFSET(0x17060780)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_8C2BA787E6095AED_OFFSET UNITYSDK_OFFSET(0x17060AA0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17060A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParam_TypeDefinitionIndex = 21929;

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
		::RPG::MVector3 HudOffset; // 0x70
		::System::Single HudOffsetBlendTime; // 0x7C
		::System::Int32 ViewModeExtraEffectID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_350AD3A2F462FDE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_350AD3A2F462FDE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C2BA787E6095AED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_METHOD_3_8C2BA787E6095AED_OFFSET))(a1, a2);
		}
	};
}
