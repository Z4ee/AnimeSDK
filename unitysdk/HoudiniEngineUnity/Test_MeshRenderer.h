#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshRenderer; }

#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEEEF0)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEEEED0)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEEEC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshRenderer_TypeDefinitionIndex = 39440;

	class Test_MeshRenderer : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* self; // 0x10

		::System::Void _ctor(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_MeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_MeshRenderer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
