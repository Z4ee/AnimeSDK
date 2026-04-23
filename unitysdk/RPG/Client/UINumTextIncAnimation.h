#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_UINUMTEXTINCANIMATION_ADDDIGIT_OFFSET UNITYSDK_OFFSET(0xB417800)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_CLEARDIGITS_OFFSET UNITYSDK_OFFSET(0xB417890)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0xB417910)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB417900)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xB4177A0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_SETFORMATTEXT_OFFSET UNITYSDK_OFFSET(0xB417750)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_START_OFFSET UNITYSDK_OFFSET(0xB417230)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0xB417700)
#define RPG_CLIENT_UINUMTEXTINCANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xB417300)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB417920)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATEDIGITS_OFFSET UNITYSDK_OFFSET(0xB4174F0)
#define RPG_CLIENT_UINUMTEXTINCANIMATION__UPDATENUMBER_OFFSET UNITYSDK_OFFSET(0xB417400)

namespace RPG::Client
{
	inline static constexpr unsigned int UINumTextIncAnimation_TypeDefinitionIndex = 63712;

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

		::System::Void SetFormatText(::System::String* formatText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_SETFORMATTEXT_OFFSET))(this, formatText);
		}

		::System::Void Play(::System::Action* endCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_PLAY_OFFSET))(this, endCallback);
		}

		::System::Void AddDigit(::UnityEngine::UI::Text* digit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMTEXTINCANIMATION_ADDDIGIT_OFFSET))(this, digit);
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
