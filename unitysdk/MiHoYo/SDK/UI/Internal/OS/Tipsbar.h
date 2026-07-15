#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_GET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B6C16D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B6C16E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SHOW_OFFSET UNITYSDK_OFFSET(0x1B6C16F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C1700)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int Tipsbar_TypeDefinitionIndex = 8380;

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

		::System::Void set_OnHideCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SET_ONHIDECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_TIPSBAR_SHOW_OFFSET))(this, a1, a2);
		}
	};
}
