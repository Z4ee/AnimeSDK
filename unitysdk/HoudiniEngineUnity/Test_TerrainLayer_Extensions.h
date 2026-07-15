#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_TerrainLayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D2103B0)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D210FA0)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D210F60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainLayer_Extensions_TypeDefinitionIndex = 38596;

	class Test_TerrainLayer_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_TerrainLayer* ToTestObject(::UnityEngine::TerrainLayer* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainLayer*(*)(::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_TerrainLayer*>* ToTestObject_1(::Il2CppArray<::UnityEngine::TerrainLayer*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_TerrainLayer*>*(*)(::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainLayer*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::TerrainLayer*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainLayer*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
