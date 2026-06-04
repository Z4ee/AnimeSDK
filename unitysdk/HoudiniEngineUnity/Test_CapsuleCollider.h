#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CapsuleCollider; }

#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F7E160)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x17F7E140)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7E130)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_CapsuleCollider_TypeDefinitionIndex = 37764;

	class Test_CapsuleCollider : public ::System::Object
	{
	public:
		::UnityEngine::CapsuleCollider* self; // 0x10

		::System::Void _ctor(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_CapsuleCollider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
