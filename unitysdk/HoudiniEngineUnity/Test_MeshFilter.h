#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }

#define HOUDINIENGINEUNITY_TEST_MESHFILTER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEE9B0)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEEE990)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEE980)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshFilter_TypeDefinitionIndex = 39443;

	class Test_MeshFilter : public ::System::Object
	{
	public:
		::UnityEngine::MeshFilter* self; // 0x10

		::System::Void _ctor(::UnityEngine::MeshFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_MeshFilter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_MeshFilter*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
