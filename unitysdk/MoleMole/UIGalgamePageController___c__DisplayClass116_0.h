#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A82E4A106BA6573;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB5240)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__PLAYVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x18EB5250)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass116_0_TypeDefinitionIndex = 62824;

	class UIGalgamePageController___c__DisplayClass116_0 : public ::System::Object
	{
	public:
		::Class_2_9A82E4A106BA6573* playable; // 0x10
		::System::Action* triggerWhenVoiceStart; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::System::String* voiceKey; // 0x28
		::System::String* poseKey; // 0x30
		::System::String* facialKey; // 0x38
		::System::Int32 location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__PLAYVOICE_B__0_OFFSET))(this);
		}
	};
}
