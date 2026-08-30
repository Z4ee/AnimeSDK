#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_HANDLEWEBCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A262170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_OPENURLINBROWSER_OFFSET UNITYSDK_OFFSET(0x1A2552D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A262300)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2622F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 8715;

	class Web : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_webCloseCallback()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Web_TypeDefinitionIndex)->GetStaticField(0x1B7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB__CCTOR_OFFSET))();
		}

		static ::System::Void OpenURLInBrowser(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_OPENURLINBROWSER_OFFSET))(a1, a2);
		}

		static ::System::Void HandleWebCloseCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_WEB_HANDLEWEBCLOSECALLBACK_OFFSET))();
		}
	};
}
