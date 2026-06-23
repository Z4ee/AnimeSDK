#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_CLEARCONTENT_OFFSET UNITYSDK_OFFSET(0x173A0530)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1739FFF0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSPEAKER_OFFSET UNITYSDK_OFFSET(0x1739FFD0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSUBTITLE_OFFSET UNITYSDK_OFFSET(0x1739FFB0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1739FFA0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x173A0010)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x173A0B80)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x173A1340)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_90FD07A79824CBD2_OFFSET UNITYSDK_OFFSET(0x173A13F0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_9B9952A6A2080A5E_OFFSET UNITYSDK_OFFSET(0x173A1DC0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x173A0340)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_E053C78196EC85C1_OFFSET UNITYSDK_OFFSET(0x173A11D0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_E4048E3EADB9D432_OFFSET UNITYSDK_OFFSET(0x173A1DD0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x173A0290)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173A0030)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONGUI_OFFSET UNITYSDK_OFFSET(0x173A0590)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x173A0000)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSPEAKER_OFFSET UNITYSDK_OFFSET(0x1739FFE0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSUBTITLE_OFFSET UNITYSDK_OFFSET(0x1739FFC0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x173A0020)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x173A1CE0)

namespace MoleMole::Timeline::Editor
{
	inline static constexpr unsigned int EditorSubtitleOverlay_TypeDefinitionIndex = 60682;

	class EditorSubtitleOverlay : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Timeline::Editor::EditorSubtitleOverlay** StaticGet_Field_5_0()
		{
			return (::MoleMole::Timeline::Editor::EditorSubtitleOverlay**)Il2CppClass::FromTypeDefinitionIndex(EditorSubtitleOverlay_TypeDefinitionIndex)->GetStaticField(0x41250);
		}
		::System::String* Field_5_1; // 0x18
		::System::String* Field_5_2; // 0x20
		::System::Int32 Field_5_3; // 0x28
		::System::Boolean Field_5_4; // 0x2C
		::System::String* SpeakerLineFormat; // 0x30
		::UnityEngine::Color TextColor; // 0x38
		::UnityEngine::Color BackgroundColor; // 0x48
		::System::Int32 FontSize; // 0x58
		::System::Single WidthRatio; // 0x5C
		::UnityEngine::Color SpeakerTextColor; // 0x60
		::System::Int32 SpeakerFontSize; // 0x70
		::UnityEngine::Color OutlineColor; // 0x74
		::System::Int32 OutlineThickness; // 0x84
		::System::Int32 SpeakerBodySpacing; // 0x88
		::System::Single PositionTopY; // 0x8C
		::System::Single PositionBottomY; // 0x90
		::System::Single PositionCenterBottomY; // 0x94
		::UnityEngine::GUIStyle* Field_5_18; // 0x98
		::UnityEngine::GUIStyle* Field_5_19; // 0xA0
		::UnityEngine::Texture2D* Field_5_20; // 0xA8
		::UnityEngine::Color Field_5_21; // 0xB0
		::UnityEngine::Color Field_5_22; // 0xC0
		::UnityEngine::Color Field_5_23; // 0xD0
		::System::Int32 Field_5_24; // 0xE0
		::System::Int32 Field_5_25; // 0xE4
		::UnityEngine::Color Field_5_26; // 0xE8
		::System::Int32 Field_5_27; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Timeline::Editor::EditorSubtitleOverlay* get_Instance()
		{
			return ((::MoleMole::Timeline::Editor::EditorSubtitleOverlay*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_CurrentSubtitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSUBTITLE_OFFSET))(this);
		}

		::System::Void set_CurrentSubtitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSUBTITLE_OFFSET))(this, a1);
		}

		::System::String* get_CurrentSpeaker()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSPEAKER_OFFSET))(this);
		}

		::System::Void set_CurrentSpeaker(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSPEAKER_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Void set_CurrentPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_ISSHOWING_OFFSET))(this);
		}

		::System::Void set_IsShowing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_ISSHOWING_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_CLEARCONTENT_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONGUI_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		static ::System::Void Method_5_9B9952A6A2080A5E(::MoleMole::Timeline::Editor::EditorSubtitleOverlay* a1)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::Editor::EditorSubtitleOverlay*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_9B9952A6A2080A5E_OFFSET))(a1);
		}

		::System::String* Method_5_E053C78196EC85C1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_E053C78196EC85C1_OFFSET))(this, a1);
		}

		::System::Void Method_5_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
		}

		static ::UnityEngine::Texture2D* Method_5_E4048E3EADB9D432(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_E4048E3EADB9D432_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_90FD07A79824CBD2(::UnityEngine::Rect a1, ::System::String* a2, ::UnityEngine::GUIStyle* a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_90FD07A79824CBD2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_5_8C97CA3BAB7FB2D7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_METHOD_5_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
		}
	};
}
