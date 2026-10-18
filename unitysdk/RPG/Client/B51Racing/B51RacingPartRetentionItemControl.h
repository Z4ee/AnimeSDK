#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xC7B3BE0)
#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7B3840)
#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B4420)
#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7B41F0)
#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__SETUPCARICON_OFFSET UNITYSDK_OFFSET(0xC7B4350)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPartRetentionItemControl_TypeDefinitionIndex = 81794;

	class B51RacingPartRetentionItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _NameText; // 0x40
		::RPG::Client::LocalizedText* _HintText; // 0x48
		::UnityEngine::GameObject* _NewTagRoot; // 0x50
		::RPG::Client::LocalizedText* _NewTagText; // 0x58
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _CarPartIconControl; // 0x60
		::RPG::Client::AnimatorButton* _AnimatorButton; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Void _SetupCarIcon(::RPG::GameCore::B51RacingPartType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMCONTROL__SETUPCARICON_OFFSET))(this, a1, a2);
		}
	};
}
