#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Collider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Collider; }

#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEEB470)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEB4B0)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EEEB4C0)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EEEB500)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Collider_Extensions___c_TypeDefinitionIndex = 39424;

	class Test_Collider_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Collider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Collider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Collider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CDF0);
		}
		static ::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Collider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CDF8);
		}
		static ::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Collider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__1_0(::UnityEngine::Collider* a1)
		{
			return ((::HoudiniEngineUnity::Test_Collider*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__2_0(::UnityEngine::Collider* a1)
		{
			return ((::HoudiniEngineUnity::Test_Collider*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
