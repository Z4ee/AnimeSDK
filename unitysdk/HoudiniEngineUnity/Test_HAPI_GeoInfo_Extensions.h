#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_GeoInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4AF650)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_GeoInfo_Extensions_TypeDefinitionIndex = 39406;

	class Test_HAPI_GeoInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_GeoInfo* ToTestObject(::HoudiniEngineUnity::HAPI_GeoInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_GeoInfo*(*)(::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
