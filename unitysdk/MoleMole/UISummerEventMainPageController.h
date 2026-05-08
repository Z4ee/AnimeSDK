#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_EXITGAME_OFFSET UNITYSDK_OFFSET(0x12E3B0C0)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_FINISHFADEINANDFADEOUT_OFFSET UNITYSDK_OFFSET(0x12E3B370)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x12E3B6E0)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GETQUESTID_OFFSET UNITYSDK_OFFSET(0x12E3A990)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_ISGAMEPAUSED_OFFSET UNITYSDK_OFFSET(0x12E39E90)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x12E39E20)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12E39E30)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_INITIALIZENEWSBUBBLE_OFFSET UNITYSDK_OFFSET(0x12E3B630)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x12E3B730)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x12E39EA0)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENSETTING_OFFSET UNITYSDK_OFFSET(0x12E3AF50)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x12E3A680)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_PLAYANDINVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x12E3B590)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_RESTARTGAME_OFFSET UNITYSDK_OFFSET(0x12E3B300)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETGAMEPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x12E3A530)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETLEVELEND_OFFSET UNITYSDK_OFFSET(0x12E39E40)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12E3A0E0)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_TRYCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0x12E3AB70)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_TRYPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x12E3A170)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E3B870)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E3B860)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__EXITGAME_G__EXIT_21_0_OFFSET UNITYSDK_OFFSET(0x12E3BA00)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12E3BA80)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventMainPageController_TypeDefinitionIndex = 56620;

	class UISummerEventMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_LevelId2QuestId()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISummerEventMainPageController_TypeDefinitionIndex)->GetStaticField(0x44A20);
		}
		::MoleMole::UIGeneralNewsBubbleWidgetController* NewsBubble; // 0x310
		::System::Boolean _isGamePaused; // 0x318
		::System::Boolean _blockRestartOrExitGame; // 0x319
		::System::Boolean _levelEnd; // 0x31A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetLevelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETLEVELEND_OFFSET))(this);
		}

		::System::Boolean get_IsGamePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GET_ISGAMEPAUSED_OFFSET))(this);
		}

		::System::Void OpenPauseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENPAUSEDIALOG_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void TryPauseGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_TRYPAUSEGAME_OFFSET))(this);
		}

		::System::Void OpenTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENTUTORIAL_OFFSET))(this);
		}

		::System::Void TryContinueGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_TRYCONTINUEGAME_OFFSET))(this);
		}

		static ::System::Void OpenSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENSETTING_OFFSET))();
		}

		::System::Void SetGamePauseState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_SETGAMEPAUSESTATE_OFFSET))(this, value);
		}

		::System::Void ExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_EXITGAME_OFFSET))(this);
		}

		::System::Void RestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_RESTARTGAME_OFFSET))(this);
		}

		::System::Void FinishFadeInAndFadeOut(::UnityEngine::Animation* root, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_FINISHFADEINANDFADEOUT_OFFSET))(this, root, callback);
		}

		::System::Collections::IEnumerator* PlayAndInvokeCallback(::UnityEngine::Animation* root, ::System::String* key, ::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_PLAYANDINVOKECALLBACK_OFFSET))(this, root, key, callback);
		}

		static ::System::Int32 GetQuestId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GETQUESTID_OFFSET))();
		}

		::System::Void InitializeNewsBubble(::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_INITIALIZENEWSBUBBLE_OFFSET))(this, parent);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER_OPENBUBBLEROW_OFFSET))(this);
		}

		::System::Void _ExitGame_g__Exit_21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__EXITGAME_G__EXIT_21_0_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
