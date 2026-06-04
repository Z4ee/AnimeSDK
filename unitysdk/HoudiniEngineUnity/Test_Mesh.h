#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_TEST_MESH_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F81800)
#define HOUDINIENGINEUNITY_TEST_MESH_ISNULL_OFFSET UNITYSDK_OFFSET(0x17F817E0)
#define HOUDINIENGINEUNITY_TEST_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x17F817D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Mesh_TypeDefinitionIndex = 37770;

	class Test_Mesh : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* self; // 0x10

		::System::Void _ctor(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Mesh* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
