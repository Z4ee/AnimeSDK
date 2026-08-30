#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshCollider; }

#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B4B1A40)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B4B1A20)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B1A10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshCollider_TypeDefinitionIndex = 39434;

	class Test_MeshCollider : public ::System::Object
	{
	public:
		::UnityEngine::MeshCollider* self; // 0x10

		::System::Void _ctor(::UnityEngine::MeshCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_MeshCollider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_MeshCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
