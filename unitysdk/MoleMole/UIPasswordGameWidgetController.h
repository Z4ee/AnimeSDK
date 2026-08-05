#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70DF2F2181957C70.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_FEBA7E1A1FC0D70F.h"

class Class_1_2299A0FE2E8FD63C;
class Class_2_79F6D62CE30E3F8E_79;
class Class_3_E6A377784A0B8569;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPasswordGameNumberButtonWidgetController; }
namespace MoleMole { class UIPasswordGameNumberDisplayWidgetController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ANIMDAEMON_OFFSET UNITYSDK_OFFSET(0x1835C420)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ENQUEUEANIM_OFFSET UNITYSDK_OFFSET(0x1835BEE0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2NUMIMAGEKEY_OFFSET UNITYSDK_OFFSET(0x183597A0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2NUMTEXTIMAGEKEY_OFFSET UNITYSDK_OFFSET(0x18359890)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2POS_OFFSET UNITYSDK_OFFSET(0x18359660)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONBACKSPACE_OFFSET UNITYSDK_OFFSET(0x18359CB0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18359490)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONHINT_OFFSET UNITYSDK_OFFSET(0x18359D10)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONINFO_OFFSET UNITYSDK_OFFSET(0x1835AA10)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1835AAA0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18359520)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18358890)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183592B0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_POS2INPUT_OFFSET UNITYSDK_OFFSET(0x18359710)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHHINTBTN_OFFSET UNITYSDK_OFFSET(0x18359F30)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHINPUTSCREEN_OFFSET UNITYSDK_OFFSET(0x1835A100)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHSELECTEDBUTTON_OFFSET UNITYSDK_OFFSET(0x1835BD60)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETANIMNONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1835B650)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETBACKSPACEBTN_OFFSET UNITYSDK_OFFSET(0x1835AE80)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETBTNBINDING_OFFSET UNITYSDK_OFFSET(0x1835B2E0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETINPUTSCREEN_OFFSET UNITYSDK_OFFSET(0x1835AF10)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETNUMBERBTN_OFFSET UNITYSDK_OFFSET(0x1835AB00)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0x18359330)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x1835C150)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SIMULATEHINTBTN_OFFSET UNITYSDK_OFFSET(0x18359B20)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SIMULATESELECTINPUTBTN_OFFSET UNITYSDK_OFFSET(0x18359940)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1835C4A0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_0_OFFSET UNITYSDK_OFFSET(0x1835C6D0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_1_OFFSET UNITYSDK_OFFSET(0x1835C880)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_2_OFFSET UNITYSDK_OFFSET(0x1835C8F0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_3_OFFSET UNITYSDK_OFFSET(0x1835CAA0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1835CAC0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1835CB50)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1835CBE0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1835CC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIPasswordGameWidgetController_TypeDefinitionIndex = 48741;

	class UIPasswordGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* _passwordGameNumTextPaths; // 0x2C0
		::System::Single _animDelayWhenInputCompleted; // 0x2C8
		::Class_2_79F6D62CE30E3F8E_79* _view; // 0x2D0
		::Class_3_E6A377784A0B8569* _model; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::Char, ::MoleMole::UIPasswordGameNumberButtonWidgetController*>* _numberButtons; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIPasswordGameNumberDisplayWidgetController*>* _inputNumbers; // 0x2E8
		::System::Char _currSelectedInput; // 0x2F0
		::System::Boolean _isHintShown; // 0x2F2
		::System::Collections::Generic::Dictionary_2<::Enum_3_70DF2F2181957C70, ::System::Collections::Generic::Queue_1<::Struct_2_FEBA7E1A1FC0D70F>*>* _queuedAnim; // 0x2F8
		::UnityEngine::Coroutine* _animeDaemon; // 0x300
		::System::Collections::Generic::Dictionary_2<::Enum_3_70DF2F2181957C70, ::Class_1_2299A0FE2E8FD63C*>* _animInProgress; // 0x308
		::System::Collections::Generic::List_1<::Enum_3_70DF2F2181957C70>* _animDaemonChannelToRemove; // 0x310
		::System::Collections::Generic::List_1<::System::Action*>* _animDaemonCallbackToInvoke; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean Input2Pos(::System::Char input, ::System::Int32& row, ::System::Int32& column)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2POS_OFFSET))(input, row, column);
		}

		static ::System::Boolean Pos2Input(::System::Int32 row, ::System::Int32 column, ::System::Char& input)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Char&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_POS2INPUT_OFFSET))(row, column, input);
		}

		static ::Foundation::AssetPath Input2NumImageKey(::System::Char input)
		{
			return ((::Foundation::AssetPath(*)(::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2NUMIMAGEKEY_OFFSET))(input);
		}

		::Foundation::AssetPath Input2NumTextImageKey(::System::Char input)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_INPUT2NUMTEXTIMAGEKEY_OFFSET))(this, input);
		}

		::System::Void SimulateSelectInputBtn(::System::Char input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SIMULATESELECTINPUTBTN_OFFSET))(this, input);
		}

		::System::Void SimulateHintBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SIMULATEHINTBTN_OFFSET))(this);
		}

		::System::Void OnBackSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONBACKSPACE_OFFSET))(this);
		}

		::System::Void OnHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONHINT_OFFSET))(this);
		}

		::System::Void OnInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONINFO_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ONRESET_OFFSET))(this);
		}

		::System::Void ResetView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET))(this);
		}

		::System::Void ResetNumberBtn(::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETNUMBERBTN_OFFSET))(this, locked);
		}

		::System::Void ResetBackspaceBtn(::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETBACKSPACEBTN_OFFSET))(this, locked);
		}

		::System::Void ResetInputScreen(::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETINPUTSCREEN_OFFSET))(this, locked);
		}

		::System::Void ResetBtnBinding(::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETBTNBINDING_OFFSET))(this, locked);
		}

		::System::Void RefreshInputScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHINPUTSCREEN_OFFSET))(this);
		}

		::System::Void RefreshHintBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHHINTBTN_OFFSET))(this);
		}

		::System::Void RefreshSelectedButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_REFRESHSELECTEDBUTTON_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Char input, ::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, input, isSelected);
		}

		::System::Void EnqueueAnim(::Enum_3_70DF2F2181957C70 channel, ::Struct_2_FEBA7E1A1FC0D70F anim)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_70DF2F2181957C70, ::Struct_2_FEBA7E1A1FC0D70F))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ENQUEUEANIM_OFFSET))(this, channel, anim);
		}

		::System::Collections::IEnumerator* AnimDaemon()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_ANIMDAEMON_OFFSET))(this);
		}

		::System::Void ResetAnimNonCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER_RESETANIMNONCALLBACK_OFFSET))(this);
		}

		::System::Void _RefreshInputScreen_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_0_OFFSET))(this);
		}

		::System::Void _RefreshInputScreen_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_1_OFFSET))(this);
		}

		::System::Void _RefreshInputScreen_b__36_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_2_OFFSET))(this);
		}

		::System::Void _RefreshInputScreen_b__36_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__REFRESHINPUTSCREEN_B__36_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
