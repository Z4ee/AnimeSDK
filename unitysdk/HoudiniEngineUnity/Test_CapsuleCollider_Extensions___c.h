#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_CapsuleCollider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class CapsuleCollider; }

#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEEA910)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEA950)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EEEA960)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EEEA9A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex = 39433;

	class Test_CapsuleCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CDB0);
		}
		static ::HoudiniEngineUnity::Test_CapsuleCollider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_CapsuleCollider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CDB8);
		}
		static ::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_CapsuleCollider* _ToTestObject_b__1_0(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_CapsuleCollider*(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_CapsuleCollider* _ToTestObject_b__2_0(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_CapsuleCollider*(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
