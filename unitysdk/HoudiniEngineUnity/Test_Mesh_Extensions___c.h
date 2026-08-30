#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Mesh; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2B50)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2B90)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4B2BA0)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4B2BE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Mesh_Extensions___c_TypeDefinitionIndex = 39439;

	class Test_Mesh_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Mesh_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Mesh_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Mesh_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63160);
		}
		static ::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Mesh_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63168);
		}
		static ::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Mesh_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Mesh* _ToTestObject_b__1_0(::UnityEngine::Mesh* a1)
		{
			return ((::HoudiniEngineUnity::Test_Mesh*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Mesh* _ToTestObject_b__2_0(::UnityEngine::Mesh* a1)
		{
			return ((::HoudiniEngineUnity::Test_Mesh*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
