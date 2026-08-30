#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_NodeInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4AF970)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_NodeInfo_Extensions_TypeDefinitionIndex = 39400;

	class Test_HAPI_NodeInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_NodeInfo* ToTestObject(::HoudiniEngineUnity::HAPI_NodeInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_NodeInfo*(*)(::HoudiniEngineUnity::HAPI_NodeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
