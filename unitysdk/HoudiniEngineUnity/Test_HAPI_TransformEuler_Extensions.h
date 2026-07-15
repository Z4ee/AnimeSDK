#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_TransformEuler; }

#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D20CDC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_TransformEuler_Extensions_TypeDefinitionIndex = 38551;

	class Test_HAPI_TransformEuler_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_TransformEuler* ToTestObject(::HoudiniEngineUnity::HAPI_TransformEuler a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_TransformEuler*(*)(::HoudiniEngineUnity::HAPI_TransformEuler))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
