#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A82E4A106BA6573;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS112_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1764CBA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS112_0__PLAYVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x1764CBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass112_0_TypeDefinitionIndex = 54849;

	class UIGalgamePageController___c__DisplayClass112_0 : public ::System::Object
	{
	public:
		::System::String* facialKey; // 0x10
		::System::String* voiceKey; // 0x18
		::System::String* poseKey; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::System::Action* triggerWhenVoiceStart; // 0x30
		::Class_2_9A82E4A106BA6573* playable; // 0x38
		::System::Int32 location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS112_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS112_0__PLAYVOICE_B__0_OFFSET))(this);
		}
	};
}
