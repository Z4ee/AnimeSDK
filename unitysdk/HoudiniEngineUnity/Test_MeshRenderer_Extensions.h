#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4B25E0)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4B2700)
#define HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4B25A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshRenderer_Extensions_TypeDefinitionIndex = 39441;

	class Test_MeshRenderer_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_MeshRenderer* ToTestObject(::UnityEngine::MeshRenderer* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshRenderer*(*)(::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_MeshRenderer*>* ToTestObject_1(::Il2CppArray<::UnityEngine::MeshRenderer*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_MeshRenderer*>*(*)(::Il2CppArray<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshRenderer*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshRenderer*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHRENDERER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
