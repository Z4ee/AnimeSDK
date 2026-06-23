#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152E11A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYVOICEANDSOUNDEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x152E11B0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYVOICEANDSOUNDEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x152E11F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass61_0_TypeDefinitionIndex = 83719;

	class UIMainCityChatPlayWidgetController___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::String* soundEventKey; // 0x10
		::System::String* voiceKey; // 0x18
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x20
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoiceAndSoundEvent_b__0(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYVOICEANDSOUNDEVENT_B__0_OFFSET))(this, pendingId, playingId);
		}

		::System::Void _PlayVoiceAndSoundEvent_b__1(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYVOICEANDSOUNDEVENT_B__1_OFFSET))(this, pendingId, playingId);
		}
	};
}
