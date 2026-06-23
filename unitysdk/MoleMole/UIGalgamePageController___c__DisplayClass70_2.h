#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A82E4A106BA6573;
class Class_2_A98F487E59440D0B;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass70_1; }
namespace MoleMole { class UIGalgameTextRowWidgetController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90CC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0x16A91B70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET UNITYSDK_OFFSET(0x16A91F70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET UNITYSDK_OFFSET(0x16A913C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__15_OFFSET UNITYSDK_OFFSET(0x16A916D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0x16A90CD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0x16A90F70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0x16A91790)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0x16A91A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass70_2_TypeDefinitionIndex = 54859;

	class UIGalgamePageController___c__DisplayClass70_2 : public ::System::Object
	{
	public:
		::Class_2_A98F487E59440D0B* textNode; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass70_1* CS___8__locals2; // 0x18
		::MoleMole::UIGalgameTextRowWidgetController* itemController; // 0x20
		::System::String* talkText; // 0x28
		::UnityEngine::UI::Text* text; // 0x30
		::Class_2_9A82E4A106BA6573* voicePlayable; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x40
		::System::Action* __9__12; // 0x48
		::DG::Tweening::TweenCallback* __9__15; // 0x50
		::System::Int32 tempIndex; // 0x58
		::System::Single waitPoptextTime; // 0x5C
		::System::Boolean hasOneShotSound; // 0x60
		::System::Boolean isFirstNode; // 0x61
		::System::Single tweenDuration; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__15_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET))(this);
		}
	};
}
