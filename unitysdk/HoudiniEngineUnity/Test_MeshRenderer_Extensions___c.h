#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshRenderer; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class MeshRenderer; }

#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2830)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2870)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4B2880)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4B28C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshRenderer_Extensions___c_TypeDefinitionIndex = 39442;

	class Test_MeshRenderer_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::MeshRenderer*, ::HoudiniEngineUnity::Test_MeshRenderer*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshRenderer*, ::HoudiniEngineUnity::Test_MeshRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshRenderer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63140);
		}
		static ::HoudiniEngineUnity::Test_MeshRenderer_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_MeshRenderer_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshRenderer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63148);
		}
		static ::System::Converter_2<::UnityEngine::MeshRenderer*, ::HoudiniEngineUnity::Test_MeshRenderer*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshRenderer*, ::HoudiniEngineUnity::Test_MeshRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshRenderer_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x63150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_MeshRenderer* _ToTestObject_b__1_0(::UnityEngine::MeshRenderer* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshRenderer*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_MeshRenderer* _ToTestObject_b__2_0(::UnityEngine::MeshRenderer* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshRenderer*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
