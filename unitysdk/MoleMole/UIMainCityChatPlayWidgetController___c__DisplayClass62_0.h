#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_848BA58F81F05F34;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0C6A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS62_0__PLAYVOICEWITHDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x16C0C6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass62_0_TypeDefinitionIndex = 83707;

	class UIMainCityChatPlayWidgetController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x10
		::System::String* voiceKey; // 0x18
		::Class_3_848BA58F81F05F34* endedCallback; // 0x20
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoiceWithDelay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS62_0__PLAYVOICEWITHDELAY_B__0_OFFSET))(this);
		}
	};
}
