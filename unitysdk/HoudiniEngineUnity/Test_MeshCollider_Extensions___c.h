#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshCollider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class MeshCollider; }

#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEEE8B0)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEE8F0)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EEEE900)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EEEE940)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshCollider_Extensions___c_TypeDefinitionIndex = 39436;

	class Test_MeshCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::MeshCollider*, ::HoudiniEngineUnity::Test_MeshCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshCollider*, ::HoudiniEngineUnity::Test_MeshCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CF20);
		}
		static ::System::Converter_2<::UnityEngine::MeshCollider*, ::HoudiniEngineUnity::Test_MeshCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshCollider*, ::HoudiniEngineUnity::Test_MeshCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CF28);
		}
		static ::HoudiniEngineUnity::Test_MeshCollider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_MeshCollider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_MeshCollider* _ToTestObject_b__1_0(::UnityEngine::MeshCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshCollider*(*)(::PVOID, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_MeshCollider* _ToTestObject_b__2_0(::UnityEngine::MeshCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshCollider*(*)(::PVOID, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
