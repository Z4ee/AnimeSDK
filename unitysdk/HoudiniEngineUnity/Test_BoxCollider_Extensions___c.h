#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_BoxCollider; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class BoxCollider; }

#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEEA3F0)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEA430)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EEEA440)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EEEA480)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_BoxCollider_Extensions___c_TypeDefinitionIndex = 39427;

	class Test_BoxCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_BoxCollider_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_BoxCollider_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_BoxCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CD80);
		}
		static ::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_BoxCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CD88);
		}
		static ::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Test_BoxCollider_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x5CD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_BoxCollider* _ToTestObject_b__1_0(::UnityEngine::BoxCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_BoxCollider*(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_BoxCollider* _ToTestObject_b__2_0(::UnityEngine::BoxCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_BoxCollider*(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
