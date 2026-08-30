#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEF0AE0)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEF0AC0)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF0AB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainLayer_TypeDefinitionIndex = 39454;

	class Test_TerrainLayer : public ::System::Object
	{
	public:
		::UnityEngine::TerrainLayer* self; // 0x10

		::System::Void _ctor(::UnityEngine::TerrainLayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainLayer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
