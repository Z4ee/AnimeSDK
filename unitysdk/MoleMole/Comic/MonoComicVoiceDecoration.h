#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicDecorateEventBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x14848370)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_EDITORAWAKE_OFFSET UNITYSDK_OFFSET(0x14849A00)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x14849590)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x148493E0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITINEDITOR_OFFSET UNITYSDK_OFFSET(0x14849B60)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x148484B0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x148492A0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x148490D0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14849190)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_5AE33E89D3D29F4D_OFFSET UNITYSDK_OFFSET(0x148487D0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14849640)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x14848B90)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F622C933901050D9_OFFSET UNITYSDK_OFFSET(0x148485B0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F9D8AF4B91BAC175_OFFSET UNITYSDK_OFFSET(0x148497F0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14848D20)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x14848970)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET UNITYSDK_OFFSET(0x148499A0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x148489C0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x14848ED0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x14849BE0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x14849C30)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x14849CC0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x14849D50)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x14849DE0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x14849DF0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14849E80)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x14849F10)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x14849FA0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x14849FB0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1484A040)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicVoiceDecoration_TypeDefinitionIndex = 85900;

	class MonoComicVoiceDecoration : public ::MoleMole::Comic::MonoComicDecorateEventBase
	{
	public:
		// static const ::System::String* Field_7_6; // 0x0
		// static const ::System::String* Field_7_5; // 0x0
		::UnityEngine::UI::Image* img; // 0x80
		::UnityEngine::Timeline::VoiceDecorateEvent* Field_7_0; // 0x88
		::UnityEngine::Animation* Field_7_7; // 0x90
		::UnityEngine::AnimationCurve* Field_7_4; // 0x98
		::System::Single Field_7_11; // 0xA0
		::System::Single Field_7_10; // 0xA4
		::UnityEngine::CanvasGroup* Field_7_9; // 0xA8
		::UnityEngine::RectTransform* Field_7_8; // 0xB0
		::UnityEngine::Vector2 Field_7_15; // 0xB8
		::UnityEngine::Vector3 Field_7_14; // 0xC0
		::UnityEngine::Vector2 Field_7_13; // 0xCC
		::UnityEngine::Vector3 Field_7_12; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_ENDPLAY_OFFSET))(this);
		}

		::System::Void Method_7_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Single Method_7_F9D8AF4B91BAC175()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F9D8AF4B91BAC175_OFFSET))(this);
		}

		::System::Void SimulateAnimProgressForOuter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET))(this, a1);
		}

		::System::Void EditorAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_EDITORAWAKE_OFFSET))(this);
		}

		::System::Void InitInEditor(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITINEDITOR_OFFSET))(this, a1);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Single __base_GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Single __base_GetFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEOUTTIME_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_F622C933901050D9(::UnityEngine::Timeline::VoiceDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F622C933901050D9_OFFSET))(this, a1);
		}

		::System::Void Method_7_F4F1E7D1CC26024A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_F4F1E7D1CC26024A_OFFSET))(this, a1);
		}

		::System::Void Method_7_5AE33E89D3D29F4D(::UnityEngine::Timeline::VoiceDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_5AE33E89D3D29F4D_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_1_OFFSET))(this, a1);
		}
	};
}
