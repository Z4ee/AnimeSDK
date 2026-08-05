#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_CONTROLLERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F22C310)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_CONTROLLERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22C360)

namespace RichTap::Platforms::XInput
{
	inline static constexpr unsigned int XInputNativeBridge_Controllers_TypeDefinitionIndex = 38756;

	class XInputNativeBridge_Controllers : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* controllers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_CONTROLLERS__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_CONTROLLERS_TOSTRING_OFFSET))(this);
		}
	};
}
