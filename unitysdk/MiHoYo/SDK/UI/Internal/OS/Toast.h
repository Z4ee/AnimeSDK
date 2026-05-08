#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST_GET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AA5B110)
#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1AA5B120)
#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5B180)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int Toast_TypeDefinitionIndex = 19293;

	class Toast : public ::System::Object
	{
	public:
		::System::Action* _OnToastCompleted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TOAST__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnToastCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TOAST_GET_ONTOASTCOMPLETED_OFFSET))(this);
		}

		::System::Void Show(::System::String* message, ::System::Single delayTime, ::System::Boolean isPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TOAST_SHOW_OFFSET))(this, message, delayTime, isPositive);
		}
	};
}
