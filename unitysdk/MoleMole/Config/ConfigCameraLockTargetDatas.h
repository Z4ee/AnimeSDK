#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace MoleMole::Config { class ConfigCameraLockTargetDatas_KeyValueInfo; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1752A530)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1752A1A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1752A950)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1752AB70)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1752AB80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetDatas_TypeDefinitionIndex = 55660;

	class ConfigCameraLockTargetDatas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>* cameraLockTargets; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas_KeyValueInfo*>* KeyValueInfoList; // 0x60
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
