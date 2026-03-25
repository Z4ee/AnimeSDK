#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NativeTask; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F38B00)
#define MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__NATIVEINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x15F38B10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NativeTask___c__DisplayClass4_0_TypeDefinitionIndex = 6987;

	class NativeTask___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* funcName; // 0x10
		::MiHoYo::SDK::NativeTask* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _NativeInvoke_b__0(::System::String* strCallbackParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__NATIVEINVOKE_B__0_OFFSET))(this, strCallbackParams);
		}
	};
}
