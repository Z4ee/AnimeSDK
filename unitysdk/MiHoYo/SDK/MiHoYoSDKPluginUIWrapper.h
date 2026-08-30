#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1949F5F0)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1949F660)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1949F5E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex = 46920;

	class MiHoYoSDKPluginUIWrapper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex)->GetStaticField(0x55A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper* GetInstance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_GETINSTANCE_OFFSET))();
		}

		::System::Void UpdatePluginUIElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET))(this, a1, a2, a3);
		}
	};
}
