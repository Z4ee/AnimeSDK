#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GroupType.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_GEOINFO_GETGROUPCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x264E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_GeoInfo_TypeDefinitionIndex = 37721;

	struct alignas(4) HAPI_GeoInfo
	{
		::HoudiniEngineUnity::HAPI_GeoType type; // 0x10
		::System::Int32 nameSH; // 0x14
		::System::Int32 nodeId; // 0x18
		::System::Boolean isEditable; // 0x1C
		::System::Boolean isTemplated; // 0x1D
		::System::Boolean isDisplayGeo; // 0x1E
		::System::Boolean hasGeoChanged; // 0x1F
		::System::Boolean hasMaterialChanged; // 0x20
		::System::Int32 pointGroupCount; // 0x24
		::System::Int32 primitiveGroupCount; // 0x28
		::System::Int32 partCount; // 0x2C

		::System::Int32 getGroupCountByType(::HoudiniEngineUnity::HAPI_GroupType type)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GroupType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_GEOINFO_GETGROUPCOUNTBYTYPE_OFFSET))(this, type);
		}
	};
}
