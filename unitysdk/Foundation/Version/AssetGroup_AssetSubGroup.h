#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Version/AssetGroup_AssetSubGroup_ESubGroupMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP_GET_BLACKLISTMODE_OFFSET UNITYSDK_OFFSET(0x114D4FA0)
#define FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP_GET_SUBGROUPMODE_OFFSET UNITYSDK_OFFSET(0x114D4F90)
#define FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x114D4FB0)

namespace Foundation::Version
{
	inline static constexpr unsigned int AssetGroup_AssetSubGroup_TypeDefinitionIndex = 87264;

	class AssetGroup_AssetSubGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* assets; // 0x10
		::Foundation::Version::AssetGroup_AssetSubGroup_ESubGroupMode subGroupMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP__CTOR_OFFSET))(this);
		}

		::Foundation::Version::AssetGroup_AssetSubGroup_ESubGroupMode get_SubGroupMode()
		{
			return ((::Foundation::Version::AssetGroup_AssetSubGroup_ESubGroupMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP_GET_SUBGROUPMODE_OFFSET))(this);
		}

		::System::Boolean get_BlacklistMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSION_ASSETGROUP_ASSETSUBGROUP_GET_BLACKLISTMODE_OFFSET))(this);
		}
	};
}
