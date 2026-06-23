#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x158991B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGINTERNAL_OFFSET UNITYSDK_OFFSET(0x15898DF0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGKEYS_OFFSET UNITYSDK_OFFSET(0x158992A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIG_1_OFFSET UNITYSDK_OFFSET(0x15898D70)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15898A80)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETFIXEDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x15898BA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETFRAMETWOSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0x15898C80)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15899320)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x15899560)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15899820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas_TypeDefinitionIndex = 56761;

	class ConfigCameraStoryDatas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>* cameraStoryDatas; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>* configBasedData; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>* fixedCameraConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>* frameTwoShapeCameraConfigs; // 0x70
		::MoleMole::Cameras::DefaultFrameTwoShapeConfig* defaultFrameTwoShapeConfig; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCameraStory* GetConfig(::System::String* key)
		{
			return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIG_OFFSET))(this, key);
		}

		::MoleMole::Cameras::FixedCameraConfig* GetFixedCameraConfig(::System::Int32 chatID)
		{
			return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETFIXEDCAMERACONFIG_OFFSET))(this, chatID);
		}

		::MoleMole::Cameras::DefaultFrameTwoShapeConfig* GetFrameTwoShapeConfig(::System::String* key)
		{
			return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETFRAMETWOSHAPECONFIG_OFFSET))(this, key);
		}

		::MoleMole::Config::ConfigCameraStory* GetConfig_1(::System::String* key, ::Nap::NapECS::EcsWorld* world, ::System::UInt32 playerId, ::System::UInt32 npcId)
		{
			return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIG_1_OFFSET))(this, key, world, playerId, npcId);
		}

		::MoleMole::Config::ConfigCameraStory* GetConfigInternal(::System::String* key, ::Nap::NapECS::EcsWorld* world, ::System::UInt32 playerId, ::System::UInt32 npcId)
		{
			return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGINTERNAL_OFFSET))(this, key, world, playerId, npcId);
		}

		::MoleMole::Config::ConfigCameraStory* GetConfigInternal_1(::System::String* key)
		{
			return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGINTERNAL_1_OFFSET))(this, key);
		}

		::System::Collections::Generic::Dictionary_2_KeyCollection<::System::String*, ::MoleMole::Config::ConfigCameraStory*>* GetConfigKeys()
		{
			return ((::System::Collections::Generic::Dictionary_2_KeyCollection<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_GETCONFIGKEYS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
