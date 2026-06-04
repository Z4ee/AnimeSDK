#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_ParmInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F80880)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_ParmInfo_Extensions_TypeDefinitionIndex = 37745;

	class Test_HAPI_ParmInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_ParmInfo* ToTestObject(::HoudiniEngineUnity::HAPI_ParmInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_ParmInfo*(*)(::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
