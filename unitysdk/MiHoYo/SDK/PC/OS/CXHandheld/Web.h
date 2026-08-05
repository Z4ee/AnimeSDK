#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_HANDLEWEBCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7D2A10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_OPENURLINBROWSER_OFFSET UNITYSDK_OFFSET(0x1C7D29A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7D2B20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D2B10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 20868;

	class Web : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_webCloseCallback()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Web_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CCTOR_OFFSET))();
		}

		static ::System::Void OpenURLInBrowser(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_OPENURLINBROWSER_OFFSET))(url, closeCallback);
		}

		static ::System::Void HandleWebCloseCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_HANDLEWEBCLOSECALLBACK_OFFSET))();
		}
	};
}
