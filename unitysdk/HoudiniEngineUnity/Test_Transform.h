#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TEST_TRANSFORM_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEF1BF0)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEF1BD0)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF1BC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Transform_TypeDefinitionIndex = 39416;

	class Test_Transform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* self; // 0x10

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
