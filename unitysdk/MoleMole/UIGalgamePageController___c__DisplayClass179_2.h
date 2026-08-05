#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A82E4A106BA6573;
class Class_2_A98F487E59440D0B;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass179_1; }
namespace MoleMole { class UIGalgameTextRowWidgetController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__CTOR_OFFSET UNITYSDK_OFFSET(0x183FF610)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0x18400960)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET UNITYSDK_OFFSET(0x183FFCF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET UNITYSDK_OFFSET(0x18400050)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__5_OFFSET UNITYSDK_OFFSET(0x183FF620)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0x183FF7F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0x18400110)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0x18400390)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0x18400560)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass179_2_TypeDefinitionIndex = 62765;

	class UIGalgamePageController___c__DisplayClass179_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgameTextRowWidgetController* itemController; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x18
		::System::String* talkText; // 0x20
		::Class_2_9A82E4A106BA6573* voicePlayable; // 0x28
		::UnityEngine::UI::Text* text; // 0x30
		::System::Action* __9__11; // 0x38
		::Class_2_A98F487E59440D0B* textNode; // 0x40
		::MoleMole::UIGalgamePageController___c__DisplayClass179_1* CS___8__locals2; // 0x48
		::DG::Tweening::TweenCallback* __9__14; // 0x50
		::System::Boolean hasOneShotSound; // 0x58
		::System::Boolean isFirstNode; // 0x59
		::System::Int32 tempIndex; // 0x5C
		::System::Single waitPoptextTime; // 0x60
		::System::Single tweenDuration; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__5_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET))(this);
		}
	};
}
