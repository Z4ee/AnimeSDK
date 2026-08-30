#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST_GET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD6E330)
#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD6E340)
#define MIHOYO_SDK_UI_INTERNAL_OS_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6E3A0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int Toast_TypeDefinitionIndex = 8402;

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

		::System::Void Show(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TOAST_SHOW_OFFSET))(this, a1, a2, a3);
		}
	};
}
