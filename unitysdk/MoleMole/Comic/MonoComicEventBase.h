#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x116E01D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x116E0B10)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x116E0AD0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x116E02D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0x116E09D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET UNITYSDK_OFFSET(0x116E08B0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET UNITYSDK_OFFSET(0x116E0970)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x116E0910)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x116E0440)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x116E0260)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x116E04E0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x116E0C00)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x116E01C0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116E0CB0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116E01B0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F2D473764762AC90_OFFSET UNITYSDK_OFFSET(0x116E0490)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x116E0A90)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x116E0B50)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x116E06C0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x116E0530)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x116E0A50)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x116E0850)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x116E0BB0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicEventBase_TypeDefinitionIndex = 85466;

	class MonoComicEventBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_3; // 0x18
		::UnityEngine::RectTransform* Field_5_2; // 0x20
		::System::Boolean Field_5_1; // 0x28
		::System::Boolean Field_5_0; // 0x29
		::System::Single Field_5_7; // 0x2C
		::System::Action* callbackFunc; // 0x30
		::System::String* Field_5_5; // 0x38
		::MoleMole::ComicImgPart belongPart; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* LogicTags; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Boolean IsDelaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET))(this);
		}

		::System::Boolean IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Method_5_F2D473764762AC90(::MoleMole::ComicImgPart a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F2D473764762AC90_OFFSET))(this, a1);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7E692C4823C131A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}
	};
}
