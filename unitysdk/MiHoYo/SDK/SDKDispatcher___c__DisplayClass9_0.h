#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAFDF0)
#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__SDKINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x8DB0030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher___c__DisplayClass9_0_TypeDefinitionIndex = 42865;

	class SDKDispatcher___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* funcName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SDKInvoke_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__SDKINVOKE_B__0_OFFSET))(this, response);
		}
	};
}
