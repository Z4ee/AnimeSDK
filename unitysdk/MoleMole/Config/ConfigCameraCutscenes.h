#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole::Config { class ConfigCameraCutscenes_KeyValueInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1485ED80)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1485EA30)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES__CTOR_OFFSET UNITYSDK_OFFSET(0x1485EFE0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1485F140)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1485F150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraCutscenes_TypeDefinitionIndex = 69877;

	class ConfigCameraCutscenes : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>* cameraCutScenes; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes_KeyValueInfo*>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
