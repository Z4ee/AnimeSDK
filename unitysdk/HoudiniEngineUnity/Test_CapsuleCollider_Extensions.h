#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_CapsuleCollider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }

#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17F7E330)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x17F7E450)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F7E2F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_CapsuleCollider_Extensions_TypeDefinitionIndex = 37765;

	class Test_CapsuleCollider_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_CapsuleCollider* ToTestObject(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_CapsuleCollider*(*)(::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_CapsuleCollider*>* ToTestObject_1(::Il2CppArray<::UnityEngine::CapsuleCollider*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_CapsuleCollider*>*(*)(::Il2CppArray<::UnityEngine::CapsuleCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_CapsuleCollider*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::CapsuleCollider*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_CapsuleCollider*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::CapsuleCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
