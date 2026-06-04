#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshCollider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshCollider; }

#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17F821E0)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x17F82300)
#define HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F7ED20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshCollider_Extensions_TypeDefinitionIndex = 37768;

	class Test_MeshCollider_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_MeshCollider* ToTestObject(::UnityEngine::MeshCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshCollider*(*)(::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_MeshCollider*>* ToTestObject_1(::Il2CppArray<::UnityEngine::MeshCollider*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_MeshCollider*>*(*)(::Il2CppArray<::UnityEngine::MeshCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshCollider*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::MeshCollider*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshCollider*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::MeshCollider*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHCOLLIDER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
