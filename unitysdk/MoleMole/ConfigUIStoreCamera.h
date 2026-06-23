#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole { class ConfigUIStoreCamera_KeyValueInfo_StorePage; }
namespace MoleMole { class ConfigUIStoreCamera_KeyValueInfo_TelesConfig; }
namespace MoleMole { class ConfigUIStoreCamera_KeyValueInfo_VirCamConfig; }
namespace MoleMole { class ConfigUIStoreCamera_KeyValueInfo_VirCamMultiStores; }
namespace MoleMole { class UIStorePageConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISTORECAMERA_GETUICAMERATELESCOPECONFIG_OFFSET UNITYSDK_OFFSET(0x1A373D30)
#define MOLEMOLE_CONFIGUISTORECAMERA_GETUISTOREPAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1A373C50)
#define MOLEMOLE_CONFIGUISTORECAMERA_GETUIVIRTUALCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1A373B70)
#define MOLEMOLE_CONFIGUISTORECAMERA_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A373210)
#define MOLEMOLE_CONFIGUISTORECAMERA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A372B10)
#define MOLEMOLE_CONFIGUISTORECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A373E10)
#define MOLEMOLE_CONFIGUISTORECAMERA___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3741B0)
#define MOLEMOLE_CONFIGUISTORECAMERA___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3741C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIStoreCamera_TypeDefinitionIndex = 79099;

	class ConfigUIStoreCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>* virtualCameraConfigMultStores; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>* virtualCameraConfig; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIStorePageConfig*>* storePageConfig; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCameraTelescope*>* telescopeConfig; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIStoreCamera_KeyValueInfo_VirCamMultiStores*>* KeyValueInfoList; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIStoreCamera_KeyValueInfo_VirCamConfig*>* KeyValueInfoList1; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIStoreCamera_KeyValueInfo_StorePage*>* KeyValueInfoList2; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIStoreCamera_KeyValueInfo_TelesConfig*>* KeyValueInfoList3; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::MoleMole::UIVirtualCameraConfigs* GetUIVirtualCameraConfig(::System::String* key)
		{
			return ((::MoleMole::UIVirtualCameraConfigs*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_GETUIVIRTUALCAMERACONFIG_OFFSET))(this, key);
		}

		::MoleMole::UIStorePageConfig* GetUIStorePageConfig(::System::String* key)
		{
			return ((::MoleMole::UIStorePageConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_GETUISTOREPAGECONFIG_OFFSET))(this, key);
		}

		::MoleMole::ConfigCameraTelescope* GetUICameraTelescopeConfig(::System::String* key)
		{
			return ((::MoleMole::ConfigCameraTelescope*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_GETUICAMERATELESCOPECONFIG_OFFSET))(this, key);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
