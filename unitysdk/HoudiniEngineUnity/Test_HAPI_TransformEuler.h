#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1D20CCB0)
#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20CC90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_TransformEuler_TypeDefinitionIndex = 38550;

	class Test_HAPI_TransformEuler : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_TransformEuler self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_TransformEuler a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_TransformEuler))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_TransformEuler* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_TransformEuler*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORMEULER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
