#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryBoneData; }
namespace MoleMole::Config { class ConfigDynamicAccessoryChildTransformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16C3D3F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3D2E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessoryData_TypeDefinitionIndex = 78636;

	class ConfigDynamicAccessoryData : public ::System::Object
	{
	public:
		::System::Int64 Timestamp; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryChildTransformInfo*>* ChildTransformInfo; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryBoneData*>* BonesInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdateTimestamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA_UPDATETIMESTAMP_OFFSET))(this);
		}
	};
}
