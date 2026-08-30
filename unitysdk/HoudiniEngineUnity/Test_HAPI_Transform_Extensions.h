#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_Transform; }

#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEECFD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_Transform_Extensions_TypeDefinitionIndex = 39404;

	class Test_HAPI_Transform_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_Transform* ToTestObject(::HoudiniEngineUnity::HAPI_Transform a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_Transform*(*)(::HoudiniEngineUnity::HAPI_Transform))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
