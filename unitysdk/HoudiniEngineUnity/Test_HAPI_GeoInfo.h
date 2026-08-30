#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B4AF3F0)
#define HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AF3D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_GeoInfo_TypeDefinitionIndex = 39405;

	class Test_HAPI_GeoInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_GeoInfo self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_GeoInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_GeoInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_GeoInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_GEOINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
