#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Transform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17F859B0)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x17F85AD0)
#define HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F85970)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Transform_Extensions_TypeDefinitionIndex = 37750;

	class Test_Transform_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Transform* ToTestObject(::UnityEngine::Transform* a1)
		{
			return ((::HoudiniEngineUnity::Test_Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Transform*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Transform*>*(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Transform*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Transform*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TRANSFORM_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
