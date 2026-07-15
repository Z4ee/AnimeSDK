#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_TerrainData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TerrainData; }

#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D2105F0)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D210710)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D20FBC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainData_Extensions_TypeDefinitionIndex = 38605;

	class Test_TerrainData_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_TerrainData* ToTestObject(::UnityEngine::TerrainData* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainData*(*)(::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_TerrainData*>* ToTestObject_1(::Il2CppArray<::UnityEngine::TerrainData*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_TerrainData*>*(*)(::Il2CppArray<::UnityEngine::TerrainData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainData*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::TerrainData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainData*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::TerrainData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
