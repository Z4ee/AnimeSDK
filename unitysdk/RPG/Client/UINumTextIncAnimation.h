#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_UINUMTEXTINCANIMATION_ADDDIGIT_OFFSET UNITYSDK_OFFSET(0x182F0320)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_CLEARDIGITS_OFFSET UNITYSDK_OFFSET(0x182F0400)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x182F04B0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x182F04A0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x182F02C0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_SETFORMATTEXT_OFFSET UNITYSDK_OFFSET(0x182F0270)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_START_OFFSET UNITYSDK_OFFSET(0x182EFC00)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x182F0220)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x182EFD00)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x182F04C0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATEDIGITS_OFFSET UNITYSDK_OFFSET(0x182EFFC0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATENUMBER_OFFSET UNITYSDK_OFFSET(0x182EFE00)

namespace RPG::Client
{
	inline static constexpr unsigned int UINumTextIncAnimation_TypeDefinitionIndex = 66034;

	class UINumTextIncAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 StartValue; // 0x18
		::System::Int32 EndValue; // 0x1C
		::System::Single Duration; // 0x20
		::System::Boolean MultiDigitsMode; // 0x24
		::UnityEngine::UI::Text* _TextWidget; // 0x28
		::System::Action* _EndCallback; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* _TextDigits; // 0x38
		::System::Boolean _IsPlaying; // 0x40
		::System::Single _Timer; // 0x44
		::System::Int32 _CurValue; // 0x48
		::System::String* _FormatText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_STOP_OFFSET))(this);
		}

		::System::Void SetFormatText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_SETFORMATTEXT_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_PLAY_OFFSET))(this, a1);
		}

		::System::Void AddDigit(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_ADDDIGIT_OFFSET))(this, a1);
		}

		::System::Void ClearDigits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_CLEARDIGITS_OFFSET))(this);
		}

		::System::Void _UpdateNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATENUMBER_OFFSET))(this);
		}

		::System::Void _UpdateDigits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATEDIGITS_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Int32 get_CurValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_GET_CURVALUE_OFFSET))(this);
		}
	};
}
