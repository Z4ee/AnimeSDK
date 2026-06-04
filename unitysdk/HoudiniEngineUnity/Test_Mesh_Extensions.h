#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Mesh; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17F82F10)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x17F83030)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F821A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Mesh_Extensions_TypeDefinitionIndex = 37771;

	class Test_Mesh_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Mesh* ToTestObject(::UnityEngine::Mesh* a1)
		{
			return ((::HoudiniEngineUnity::Test_Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Mesh*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Mesh*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Mesh*>*(*)(::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Mesh*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Mesh*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
