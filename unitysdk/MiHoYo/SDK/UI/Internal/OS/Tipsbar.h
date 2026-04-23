#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_GET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x17684710)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x17684720)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SHOW_OFFSET UNITYSDK_OFFSET(0x17684730)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17684740)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int Tipsbar_TypeDefinitionIndex = 7465;

	class Tipsbar : public ::System::Object
	{
	public:
		::System::Action* _OnHideCompleted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnHideCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_GET_ONHIDECOMPLETED_OFFSET))(this);
		}

		::System::Void set_OnHideCompleted(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SET_ONHIDECOMPLETED_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* message, ::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SHOW_OFFSET))(this, message, imagePath);
		}
	};
}
