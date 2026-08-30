#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class SphereCollider; }

#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B4B2C50)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B4B2C30)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2C20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_SphereCollider_TypeDefinitionIndex = 39428;

	class Test_SphereCollider : public ::System::Object
	{
	public:
		::UnityEngine::SphereCollider* self; // 0x10

		::System::Void _ctor(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_SphereCollider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_SphereCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
