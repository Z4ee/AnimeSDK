#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GETFEATURE_OFFSET UNITYSDK_OFFSET(0x1A68B410)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GETSDKFOLDER_OFFSET UNITYSDK_OFFSET(0x1A68B350)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GET_BROADCASTURL_OFFSET UNITYSDK_OFFSET(0x1A68AE10)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GET_SERIALIZEDFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A68AE40)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_ISBROADCASTURL_OFFSET UNITYSDK_OFFSET(0x1A68B3D0)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A68AF80)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_SET_BROADCASTURL_OFFSET UNITYSDK_OFFSET(0x1A68AE30)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_STRINGCONTAINSANY_OFFSET UNITYSDK_OFFSET(0x1A68AE50)
#define MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68B670)

namespace MiHoYo::SDK::Tools
{
	inline static constexpr unsigned int SettingsDocument_TypeDefinitionIndex = 35650;

	class SettingsDocument : public ::System::Object
	{
	public:
		// static const ::System::String* JsonKeyGamePath; // 0x0
		// static const ::System::String* JsonKeyBroadcastUrl; // 0x0
		// static const ::System::String* JsonKeyFeatures; // 0x0
		// static const ::System::String* JsonKeyUseOSR; // 0x0
		// static const ::System::String* JsonKeyOpenBroadcastInternal; // 0x0
		// static const ::System::String* JsonKeyShowPerfHUD; // 0x0
		// static const ::System::String* JsonKeyOpenZFLog; // 0x0
		// static const ::System::String* JsonKeyCapHostFPS; // 0x0
		// static const ::System::String* JsonKeyUseLocal; // 0x0
		// static const ::System::String* DocumentFileName; // 0x0
		::Il2CppArray<::System::String*>* MiHoYoBroadcastHosts; // 0x10
		::Il2CppArray<::System::String*>* MiHoYoBroadcastUrlKeywords; // 0x18
		::System::String* GamePath; // 0x20
		::System::String* Features; // 0x28
		::System::String* _broadCastURL; // 0x30
		::System::Int32 UseOSR; // 0x38
		::System::Int32 OpenBroadCastInternal; // 0x3C
		::System::Int32 ShowPerfHUD; // 0x40
		::System::Int32 OpenZFLog; // 0x44
		::System::Int32 CapHostFPS; // 0x48
		::System::Int32 UseLocal; // 0x4C
		::System::Boolean _serializedFromFile; // 0x50
		::System::Boolean _hasValidFile; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_BroadCastURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GET_BROADCASTURL_OFFSET))(this);
		}

		::System::Void set_BroadCastURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_SET_BROADCASTURL_OFFSET))(this, value);
		}

		::System::Boolean get_SerializedFromFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GET_SERIALIZEDFROMFILE_OFFSET))(this);
		}

		::System::Boolean StringContainsAny(::System::String* src, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_STRINGCONTAINSANY_OFFSET))(this, src, keywords, ignoreCase);
		}

		::System::Boolean Serialize(::System::Boolean isStoring)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_SERIALIZE_OFFSET))(this, isStoring);
		}

		::System::String* GetSdkFolder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GETSDKFOLDER_OFFSET))(this);
		}

		::System::Boolean IsBroadcastUrl(::System::String* url)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_ISBROADCASTURL_OFFSET))(this, url);
		}

		::System::String* GetFeature(::System::String* featureKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLS_SETTINGSDOCUMENT_GETFEATURE_OFFSET))(this, featureKey);
		}
	};
}
