#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HipplenBuilderActivityAsset_Activity;
class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderGameMan;
class HipplenBuilderStatus_Class_1_FF08BBE63201ECB5;
class HipplenBuilderStatus_Stat;
class HipplenBuilderTestLineController;
class HipplenBuilderTestModule;
class HipplenBuilderTestModule_Class_1_3B89F61142059024;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class LayoutGroup; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define HIPPLENBUILDERUIMAN_CLOSEBEHAVIORPANEL_OFFSET UNITYSDK_OFFSET(0x18DD8F00)
#define HIPPLENBUILDERUIMAN_CLOSEBUFFSELECTIONPANEL_OFFSET UNITYSDK_OFFSET(0x18DD7C60)
#define HIPPLENBUILDERUIMAN_CLOSEENDDAYPANEL_OFFSET UNITYSDK_OFFSET(0x18DD7440)
#define HIPPLENBUILDERUIMAN_CLOSETAKETESTPANEL_OFFSET UNITYSDK_OFFSET(0x18DD7BF0)
#define HIPPLENBUILDERUIMAN_CLOSETRANINGBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x18DCEEA0)
#define HIPPLENBUILDERUIMAN_CREATESTATUSITEMS_OFFSET UNITYSDK_OFFSET(0x18DC8690)
#define HIPPLENBUILDERUIMAN_DISPLAYACTIVITIES_OFFSET UNITYSDK_OFFSET(0x18DCE200)
#define HIPPLENBUILDERUIMAN_DISPLAYBEHAVIORMSG_OFFSET UNITYSDK_OFFSET(0x18DD3AC0)
#define HIPPLENBUILDERUIMAN_HIDETESTPANEL_OFFSET UNITYSDK_OFFSET(0x18DD7CD0)
#define HIPPLENBUILDERUIMAN_INIT_OFFSET UNITYSDK_OFFSET(0x18DC80A0)
#define HIPPLENBUILDERUIMAN_METHOD_5_039D2AB733A05336_OFFSET UNITYSDK_OFFSET(0x18DD8B70)
#define HIPPLENBUILDERUIMAN_METHOD_5_E915B76EB62656B0_OFFSET UNITYSDK_OFFSET(0x18DD70E0)
#define HIPPLENBUILDERUIMAN_METHOD_5_F5FA636E6C5F7D3F_OFFSET UNITYSDK_OFFSET(0x18DD83E0)
#define HIPPLENBUILDERUIMAN_METHOD_5_FA2A5D054A26EC88_OFFSET UNITYSDK_OFFSET(0x18DD74A0)
#define HIPPLENBUILDERUIMAN_ONTESTLINECLICK_OFFSET UNITYSDK_OFFSET(0x18DD7D30)
#define HIPPLENBUILDERUIMAN_OPENBUFFSELECTIONPANEL_OFFSET UNITYSDK_OFFSET(0x18DCA120)
#define HIPPLENBUILDERUIMAN_OPENENDDAYPANEL_OFFSET UNITYSDK_OFFSET(0x18DCB5A0)
#define HIPPLENBUILDERUIMAN_OPENTAKETESTPANEL_OFFSET UNITYSDK_OFFSET(0x18DCF790)
#define HIPPLENBUILDERUIMAN_OPENTESTPANEL_OFFSET UNITYSDK_OFFSET(0x18DC9D60)
#define HIPPLENBUILDERUIMAN_OPENTRAININGBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x18DCEB70)
#define HIPPLENBUILDERUIMAN_PINTESTLINE_OFFSET UNITYSDK_OFFSET(0x18DD68A0)
#define HIPPLENBUILDERUIMAN_REFRESHBUFFDISPLAY_OFFSET UNITYSDK_OFFSET(0x18DCD9C0)
#define HIPPLENBUILDERUIMAN_REFRESHSTATUSITEMS_OFFSET UNITYSDK_OFFSET(0x18DCC420)
#define HIPPLENBUILDERUIMAN_REFRESHTESTLINEPANEL_OFFSET UNITYSDK_OFFSET(0x18DCBAF0)
#define HIPPLENBUILDERUIMAN_REFRESHTIMEDISPLAY_OFFSET UNITYSDK_OFFSET(0x18DCD7F0)
#define HIPPLENBUILDERUIMAN_REFRESHTODOLIST_OFFSET UNITYSDK_OFFSET(0x18DCBF20)
#define HIPPLENBUILDERUIMAN_SETACTIVITYMODE_OFFSET UNITYSDK_OFFSET(0x18DCEAE0)
#define HIPPLENBUILDERUIMAN_SHOWTESTLINEPANEL_OFFSET UNITYSDK_OFFSET(0x18DD7DC0)
#define HIPPLENBUILDERUIMAN_TRYDISPLAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x18DCB010)
#define HIPPLENBUILDERUIMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD8FC0)

inline static constexpr unsigned int HipplenBuilderUIMan_TypeDefinitionIndex = 47676;

class HipplenBuilderUIMan : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::VerticalLayoutGroup* ActivityGroup; // 0x18
	::UnityEngine::UI::VerticalLayoutGroup* StatusGroup; // 0x20
	::UnityEngine::UI::Button* NextDayBtn; // 0x28
	::UnityEngine::UI::Text* CurrentDayCountText; // 0x30
	::UnityEngine::UI::Text* TimeRemainCountText; // 0x38
	::UnityEngine::UI::VerticalLayoutGroup* BuffDisplayLayout; // 0x40
	::UnityEngine::GameObject* BehaviorPanel; // 0x48
	::UnityEngine::GameObject* TestLinePanel; // 0x50
	::UnityEngine::UI::Button* CloseTrainingBlackPanelBtn; // 0x58
	::UnityEngine::UI::Button* CloseBehaviorPanelBtn; // 0x60
	::UnityEngine::UI::Button* RefreshActivityBtn; // 0x68
	::UnityEngine::GameObject* TestPanel; // 0x70
	::UnityEngine::UI::Text* TestInfoTxt; // 0x78
	::UnityEngine::UI::Button* TakeTestBtn; // 0x80
	::UnityEngine::GameObject* EndDayPanel; // 0x88
	::UnityEngine::UI::Button* EndDayButton; // 0x90
	::UnityEngine::GameObject* BuffSelectionPanel; // 0x98
	::UnityEngine::UI::VerticalLayoutGroup* BuffSelectionLayout; // 0xA0
	::UnityEngine::UI::Button* BuffSelectionSkipBtn; // 0xA8
	::UnityEngine::GameObject* ToDoListPanel; // 0xB0
	::UnityEngine::UI::LayoutGroup* ToDoListLayout; // 0xB8
	::UnityEngine::GameObject* TakeTestPanel; // 0xC0
	::UnityEngine::UI::LayoutGroup* TestResultLayout; // 0xC8
	::UnityEngine::UI::Button* ExitTakeTestBtn; // 0xD0
	::UnityEngine::GameObject* ActivityItemPrefab; // 0xD8
	::UnityEngine::GameObject* StatusItemPrefab; // 0xE0
	::UnityEngine::GameObject* TestLineItemPrefab; // 0xE8
	::UnityEngine::GameObject* BuffSelectionBtnPrefab; // 0xF0
	::UnityEngine::GameObject* BuffDisplayItemPrefab; // 0xF8
	::UnityEngine::GameObject* ToDoListItemPrefab; // 0x100
	::UnityEngine::GameObject* TestResultPrefab; // 0x108
	::HipplenBuilderGameMan* GameMan; // 0x110
	::UnityEngine::Animator* DGOLMMAONAI; // 0x118
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EPDMBGPNGKO; // 0x120
	::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::UnityEngine::GameObject*>* GMNMOEAJMGF; // 0x128

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN__CTOR_OFFSET))(this);
	}

	::System::Void Init(::HipplenBuilderGameMan* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderGameMan*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_INIT_OFFSET))(this, a1);
	}

	::System::Void SetActivityMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_SETACTIVITYMODE_OFFSET))(this, a1);
	}

	::System::Void OpenEndDayPanel(::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_OPENENDDAYPANEL_OFFSET))(this, a1);
	}

	::System::Void CloseEndDayPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CLOSEENDDAYPANEL_OFFSET))(this);
	}

	::System::Void OpenTakeTestPanel(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_OPENTAKETESTPANEL_OFFSET))(this, a1);
	}

	::System::Void CloseTakeTestPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CLOSETAKETESTPANEL_OFFSET))(this);
	}

	::System::Void Method_5_FA2A5D054A26EC88(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_METHOD_5_FA2A5D054A26EC88_OFFSET))(this, a1);
	}

	::System::Void OpenBuffSelectionPanel(::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffConfig*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_OPENBUFFSELECTIONPANEL_OFFSET))(this, a1);
	}

	::System::Void CloseBuffSelectionPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CLOSEBUFFSELECTIONPANEL_OFFSET))(this);
	}

	::System::Void OpenTestPanel(::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_OPENTESTPANEL_OFFSET))(this, a1);
	}

	::System::Void HideTestPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_HIDETESTPANEL_OFFSET))(this);
	}

	::System::Void Method_5_E915B76EB62656B0(::HipplenBuilderTestModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderTestModule*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_METHOD_5_E915B76EB62656B0_OFFSET))(this, a1);
	}

	::System::Void RefreshTestLinePanel(::HipplenBuilderTestModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderTestModule*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_REFRESHTESTLINEPANEL_OFFSET))(this, a1);
	}

	::System::Void OnTestLineClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_ONTESTLINECLICK_OFFSET))(this);
	}

	::System::Void ShowTestLinePanel(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_SHOWTESTLINEPANEL_OFFSET))(this, a1);
	}

	::System::Void PinTestLine(::HipplenBuilderTestLineController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderTestLineController*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_PINTESTLINE_OFFSET))(this, a1);
	}

	::System::Void DisplayActivities(::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_DISPLAYACTIVITIES_OFFSET))(this, a1);
	}

	::System::Void Method_5_F5FA636E6C5F7D3F(::HipplenBuilderActivityAsset_Activity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_METHOD_5_F5FA636E6C5F7D3F_OFFSET))(this, a1);
	}

	::System::String* Method_5_039D2AB733A05336(::HipplenBuilderActivityAsset_Activity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_METHOD_5_039D2AB733A05336_OFFSET))(this, a1);
	}

	::System::Void RefreshToDoList(::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_REFRESHTODOLIST_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CreateStatusItems(::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CREATESTATUSITEMS_OFFSET))(this, a1);
	}

	::System::Void RefreshStatusItems(::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>* a1, ::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>*, ::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_REFRESHSTATUSITEMS_OFFSET))(this, a1, a2);
	}

	::System::Void RefreshTimeDisplay(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_REFRESHTIMEDISPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void RefreshBuffDisplay(::System::Collections::Generic::List_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_REFRESHBUFFDISPLAY_OFFSET))(this, a1);
	}

	::System::Void TryDisplayBehavior()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_TRYDISPLAYBEHAVIOR_OFFSET))(this);
	}

	::System::Void DisplayBehaviorMsg(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_DISPLAYBEHAVIORMSG_OFFSET))(this, a1);
	}

	::System::Void CloseBehaviorPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CLOSEBEHAVIORPANEL_OFFSET))(this);
	}

	::System::Void OpenTrainingBlackScreen()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_OPENTRAININGBLACKSCREEN_OFFSET))(this);
	}

	::System::Void CloseTraningBlackScreen()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN_CLOSETRANINGBLACKSCREEN_OFFSET))(this);
	}
};
