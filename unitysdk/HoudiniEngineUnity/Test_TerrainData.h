#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TerrainData; }

#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEFDD0)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEEFDB0)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEFDA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainData_TypeDefinitionIndex = 39463;

	class Test_TerrainData : public ::System::Object
	{
	public:
		::UnityEngine::TerrainData* self; // 0x10

		::System::Void _ctor(::UnityEngine::TerrainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
