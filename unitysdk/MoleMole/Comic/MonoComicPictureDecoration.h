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
namespace UnityEngine::Timeline { class PictureDecorateEvent; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x122EB6D0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_EDITORAWAKE_OFFSET UNITYSDK_OFFSET(0x122ED010)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x122EC9A0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_GETPICRECTTRANS_OFFSET UNITYSDK_OFFSET(0x122ECF60)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_INITINEDITOR_OFFSET UNITYSDK_OFFSET(0x122ED170)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x122EB810)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x122EC860)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_470D4A4853685AC9_OFFSET UNITYSDK_OFFSET(0x122EB920)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x122EC750)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_479759059E440327_OFFSET UNITYSDK_OFFSET(0x122EC690)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_6AF96BBFE90AF125_OFFSET UNITYSDK_OFFSET(0x122EBC20)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x122ECC00)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x122EC150)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_F9D8AF4B91BAC175_OFFSET UNITYSDK_OFFSET(0x122ECDB0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x122ECB50)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x122EC2E0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x122EBF30)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_SETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x122EBDD0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET UNITYSDK_OFFSET(0x122ECFB0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x122EBF80)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x122EC490)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x122ED1F0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x122ED240)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_GETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x122ED2D0)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x122ED360)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x122ED370)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x122ED400)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x122ED490)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x122ED520)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x122ED530)
#define MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x122ED5C0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicPictureDecoration_TypeDefinitionIndex = 79569;

	class MonoComicPictureDecoration : public ::MoleMole::Comic::MonoComicDecorateEventBase
	{
	public:
		// static const ::System::String* Field_7_4; // 0x0
		// static const ::System::String* Field_7_5; // 0x0
		::UnityEngine::UI::Image* img; // 0x80
		::System::Boolean isAboveSplitScreenLine; // 0x88
		::UnityEngine::Timeline::PictureDecorateEvent* Field_7_2; // 0x90
		::UnityEngine::Animation* Field_7_3; // 0x98
		::UnityEngine::AnimationCurve* Field_7_6; // 0xA0
		::System::Single Field_7_7; // 0xA8
		::System::Single Field_7_8; // 0xAC
		::UnityEngine::CanvasGroup* Field_7_9; // 0xB0
		::UnityEngine::RectTransform* Field_7_10; // 0xB8
		::UnityEngine::Vector2 Field_7_11; // 0xC0
		::UnityEngine::Vector3 Field_7_12; // 0xC8
		::UnityEngine::Vector2 Field_7_13; // 0xD4
		::UnityEngine::Vector3 Field_7_14; // 0xDC
		::UnityEngine::Vector2 Field_7_15; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void SetWorldPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_SETWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void PlayExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_PLAYEXIT_OFFSET))(this);
		}

		::System::Void Method_7_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Single Method_7_F9D8AF4B91BAC175()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_F9D8AF4B91BAC175_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetPicRectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_GETPICRECTTRANS_OFFSET))(this);
		}

		::System::Void SimulateAnimProgressForOuter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET))(this, a1);
		}

		::System::Void EditorAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_EDITORAWAKE_OFFSET))(this);
		}

		::System::Void InitInEditor(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_INITINEDITOR_OFFSET))(this, a1);
		}

		::System::Single __base_GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Single __base_GetFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_GETFADEOUTTIME_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_F4F1E7D1CC26024A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_F4F1E7D1CC26024A_OFFSET))(this, a1);
		}

		::System::Void Method_7_470D4A4853685AC9(::UnityEngine::Timeline::PictureDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_470D4A4853685AC9_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_7_6AF96BBFE90AF125(::UnityEngine::Timeline::PictureDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_6AF96BBFE90AF125_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICPICTUREDECORATION_METHOD_7_479759059E440327_1_OFFSET))(this, a1);
		}
	};
}
