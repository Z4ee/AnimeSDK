#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Transform; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B55F0)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B5630)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4B5640)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4B5680)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Transform_Extensions___c_TypeDefinitionIndex = 39418;

	class Test_Transform_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632D0);
		}
		static ::HoudiniEngineUnity::Test_Transform_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Transform_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632D8);
		}
		static ::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Transform*, ::HoudiniEngineUnity::Test_Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Transform_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632E0);
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
