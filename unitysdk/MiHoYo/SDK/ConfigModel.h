#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestModel; }
namespace MiHoYo::SDK { class BoxModel; }
namespace MiHoYo::SDK { class ClientConfig; }
namespace MiHoYo::SDK { class ColorModel; }
namespace MiHoYo::SDK { class ComboConfig; }
namespace MiHoYo::SDK { class LocalConfig; }
namespace MiHoYo::SDK { class MDKConfig; }
namespace MiHoYo::SDK { class PSConfig; }
namespace MiHoYo::SDK { class PassportConfig; }
namespace MiHoYo::SDK { class SkinColorModel; }
namespace MiHoYo::SDK { class SystemModel; }
namespace MiHoYo::SDK { class UICameraConfig; }
namespace MiHoYo::SDK { class WebViewModel; }
namespace System { class String; }

#define MIHOYO_SDK_CONFIGMODEL_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B75DBA0)
#define MIHOYO_SDK_CONFIGMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B75DC50)
#define MIHOYO_SDK_CONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75D720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigModel_TypeDefinitionIndex = 7841;

	class ConfigModel : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ConfigModel** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ConfigModel**)Il2CppClass::FromTypeDefinitionIndex(ConfigModel_TypeDefinitionIndex)->GetStaticField(0x4D0);
		}
		static ::System::String** StaticGet_loginLifecycleId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigModel_TypeDefinitionIndex)->GetStaticField(0x4D8);
		}
		static ::System::String** StaticGet_launcherId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigModel_TypeDefinitionIndex)->GetStaticField(0x4E0);
		}
		::MiHoYo::SDK::ColorModel* color; // 0x10
		::MiHoYo::SDK::SkinColorModel* skinColor; // 0x18
		::MiHoYo::SDK::ClientConfig* client; // 0x20
		::MiHoYo::SDK::SystemModel* system; // 0x28
		::MiHoYo::SDK::LocalConfig* local; // 0x30
		::MiHoYo::SDK::PSConfig* ps; // 0x38
		::MiHoYo::SDK::MDKConfig* mdk; // 0x40
		::MiHoYo::SDK::ComboConfig* combo; // 0x48
		::MiHoYo::SDK::BoxModel* box; // 0x50
		::MiHoYo::SDK::EnvType env; // 0x58
		::MiHoYo::SDK::WebViewModel* webView; // 0x60
		::MiHoYo::SDK::UICameraConfig* camera; // 0x68
		::MiHoYo::SDK::ABTestModel* payplatABTest; // 0x70
		::MiHoYo::SDK::PassportConfig* passportConfig; // 0x78
		::System::String* language; // 0x80
		::System::String* fullLanguageKey; // 0x88
		::System::Boolean localGuest; // 0x90
		::System::Boolean showLoginCloseButton; // 0x91
		::System::Boolean heartbeat; // 0x92
		::System::Boolean use_new_compliance_flow; // 0x93

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMODEL__CCTOR_OFFSET))();
		}

		::System::Boolean IsMainThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMODEL_ISMAINTHREAD_OFFSET))(this);
		}
	};
}
