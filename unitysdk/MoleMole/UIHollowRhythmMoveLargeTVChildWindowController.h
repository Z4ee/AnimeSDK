#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_2_F97C2CD3DEC48DD2;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x16919830)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_JUDGERESULT_OFFSET UNITYSDK_OFFSET(0x16919840)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16919030)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCOMBOCHANGE_OFFSET UNITYSDK_OFFSET(0x16919650)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16919200)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONSHOWJUDGE_OFFSET UNITYSDK_OFFSET(0x169196F0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16919290)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16919040)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x16919310)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x16919360)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_JUDGERESULT_OFFSET UNITYSDK_OFFSET(0x169197A0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16919930)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16919920)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__ONUIINIT_G__INITCOMBOTEXT_4_0_OFFSET UNITYSDK_OFFSET(0x16919120)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__SET_JUDGERESULT_G__JUDGERESULTTOGAMEOBJECT_19_0_OFFSET UNITYSDK_OFFSET(0x16919850)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16919990)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16919A20)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16919A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex = 46167;

	class UIHollowRhythmMoveLargeTVChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_ResetAnimationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4CE50);
		}
		static ::System::String** StaticGet_AddAnimationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4CE58);
		}
		static ::MoleMole::Vector2Int* StaticGet_DefaultRTSize()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0x12710);
		}
		::Class_2_F97C2CD3DEC48DD2* _view; // 0x318
		::System::Int32 _currentCombo; // 0x320
		::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult _judgeResult; // 0x324

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnValueChange(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONVALUECHANGE_OFFSET))(this, value);
		}

		::System::Void OnComboChange(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCOMBOCHANGE_OFFSET))(this, eventArgs);
		}

		::System::Void OnShowJudge(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONSHOWJUDGE_OFFSET))(this, eventArgs);
		}

		::System::Int32 get_currentCombo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_CURRENTCOMBO_OFFSET))(this);
		}

		::System::Void set_currentCombo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_CURRENTCOMBO_OFFSET))(this, value);
		}

		::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult get_judgeResult()
		{
			return ((::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_JUDGERESULT_OFFSET))(this);
		}

		::System::Void set_judgeResult(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_JUDGERESULT_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_g__InitComboText_4_0(::System::Int32 combo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__ONUIINIT_G__INITCOMBOTEXT_4_0_OFFSET))(this, combo);
		}

		::UnityEngine::GameObject* _set_judgeResult_g__judgeResultToGameObject_19_0(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult judgeResult_inner)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__SET_JUDGERESULT_G__JUDGERESULTTOGAMEOBJECT_19_0_OFFSET))(this, judgeResult_inner);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
