#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_BoxCollider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D20A010)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D20A130)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D209FD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_BoxCollider_Extensions_TypeDefinitionIndex = 38567;

	class Test_BoxCollider_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_BoxCollider* ToTestObject(::UnityEngine::BoxCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_BoxCollider*(*)(::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_BoxCollider*>* ToTestObject_1(::Il2CppArray<::UnityEngine::BoxCollider*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_BoxCollider*>*(*)(::Il2CppArray<::UnityEngine::BoxCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_BoxCollider*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_BoxCollider*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
