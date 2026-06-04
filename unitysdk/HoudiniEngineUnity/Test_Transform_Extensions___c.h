#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Transform; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F85C00)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F85C40)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17F85C50)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F85C90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Transform_Extensions___c_TypeDefinitionIndex = 37751;

	class Test_Transform_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11910);
		}
		static ::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11918);
		}
		static ::HoudiniEngineUnity::Test_Transform_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Transform_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Transform* _ToTestObject_b__1_0(::UnityEngine::Transform* a1)
		{
			return ((::HoudiniEngineUnity::Test_Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Transform* _ToTestObject_b__2_0(::UnityEngine::Transform* a1)
		{
			return ((::HoudiniEngineUnity::Test_Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
