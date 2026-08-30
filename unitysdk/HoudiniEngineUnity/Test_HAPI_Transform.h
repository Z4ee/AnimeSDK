#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEECD90)
#define HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEECD70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_Transform_TypeDefinitionIndex = 39403;

	class Test_HAPI_Transform : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_Transform self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_Transform a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_Transform))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_TRANSFORM_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
