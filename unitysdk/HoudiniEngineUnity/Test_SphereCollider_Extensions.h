#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_SphereCollider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SphereCollider; }

#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4B2E00)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4B2F20)
#define HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4AE6D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_SphereCollider_Extensions_TypeDefinitionIndex = 39429;

	class Test_SphereCollider_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_SphereCollider* ToTestObject(::UnityEngine::SphereCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_SphereCollider*(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_SphereCollider*>* ToTestObject_1(::Il2CppArray<::UnityEngine::SphereCollider*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_SphereCollider*>*(*)(::Il2CppArray<::UnityEngine::SphereCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_SphereCollider*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::SphereCollider*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_SphereCollider*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::SphereCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_SPHERECOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
