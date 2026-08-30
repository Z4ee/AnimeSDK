#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_TerrainData; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class TerrainData; }

#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEF09E0)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF0A20)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EEF0A30)
#define HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EEF0A70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainData_Extensions___c_TypeDefinitionIndex = 39465;

	class Test_TerrainData_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_TerrainData_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_TerrainData_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainData_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5D020);
		}
		static ::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainData_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5D028);
		}
		static ::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainData_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5D030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_TerrainData* _ToTestObject_b__1_0(::UnityEngine::TerrainData* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainData*(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_TerrainData* _ToTestObject_b__2_0(::UnityEngine::TerrainData* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainData*(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINDATA_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
