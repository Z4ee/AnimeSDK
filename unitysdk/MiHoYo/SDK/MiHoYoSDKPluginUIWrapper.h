#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x185096E0)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET UNITYSDK_OFFSET(0x18509750)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x185096D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex = 44734;

	class MiHoYoSDKPluginUIWrapper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex)->GetStaticField(0x10BE0);
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
