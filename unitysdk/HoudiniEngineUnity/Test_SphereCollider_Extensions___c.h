#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_SphereCollider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class SphereCollider; }

#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20F940)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20F980)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D20F990)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D20F9D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_SphereCollider_Extensions___c_TypeDefinitionIndex = 38571;

	class Test_SphereCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::SphereCollider*, ::HoudiniEngineUnity::Test_SphereCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::SphereCollider*, ::HoudiniEngineUnity::Test_SphereCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_SphereCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C560);
		}
		static ::HoudiniEngineUnity::Test_SphereCollider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_SphereCollider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_SphereCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C568);
		}
		static ::System::Converter_2<::UnityEngine::SphereCollider*, ::HoudiniEngineUnity::Test_SphereCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::SphereCollider*, ::HoudiniEngineUnity::Test_SphereCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_SphereCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_SphereCollider* _ToTestObject_b__1_0(::UnityEngine::SphereCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_SphereCollider*(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_SphereCollider* _ToTestObject_b__2_0(::UnityEngine::SphereCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_SphereCollider*(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
