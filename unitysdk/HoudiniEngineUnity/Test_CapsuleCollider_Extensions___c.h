#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_CapsuleCollider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class CapsuleCollider; }

#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4ADE80)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ADEC0)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4ADED0)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4ADF10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex = 39433;

	class Test_CapsuleCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_CapsuleCollider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_CapsuleCollider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62EC0);
		}
		static ::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62EC8);
		}
		static ::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::CapsuleCollider*, ::HoudiniEngineUnity::Test_CapsuleCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_CapsuleCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62ED0);
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
