#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x8D4F050)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET UNITYSDK_OFFSET(0x8D4F0C0)
#define MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D4F040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex = 43069;

	class MiHoYoSDKPluginUIWrapper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKPluginUIWrapper_TypeDefinitionIndex)->GetStaticField(0x4CDB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper* GetInstance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKPluginUIWrapper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_GETINSTANCE_OFFSET))();
		}

		::System::Void UpdatePluginUIElement(::System::String* strUIName, ::System::String* strElementID, ::System::String* strElementNewText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKPLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET))(this, strUIName, strElementID, strElementNewText);
		}
	};
}
