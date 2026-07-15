#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Collider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D20B080)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D20B1A0)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D20B040)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Collider_Extensions_TypeDefinitionIndex = 38564;

	class Test_Collider_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Collider* ToTestObject(::UnityEngine::Collider* a1)
		{
			return ((::HoudiniEngineUnity::Test_Collider*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Collider*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Collider*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Collider*>*(*)(::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Collider*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Collider*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
