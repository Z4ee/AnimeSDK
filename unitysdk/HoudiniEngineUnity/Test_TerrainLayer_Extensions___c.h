#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_TerrainLayer; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F84DF0)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F84E30)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17F84E40)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F84E80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainLayer_Extensions___c_TypeDefinitionIndex = 37789;

	class Test_TerrainLayer_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_TerrainLayer_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_TerrainLayer_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainLayer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11830);
		}
		static ::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainLayer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11838);
		}
		static ::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TerrainLayer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_TerrainLayer* _ToTestObject_b__1_0(::UnityEngine::TerrainLayer* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainLayer*(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_TerrainLayer* _ToTestObject_b__2_0(::UnityEngine::TerrainLayer* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainLayer*(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
