#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_LODGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LODGroup; }

#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EEED330)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EEED450)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEED2F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_LODGroup_Extensions_TypeDefinitionIndex = 39414;

	class Test_LODGroup_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_LODGroup* ToTestObject(::UnityEngine::LODGroup* a1)
		{
			return ((::HoudiniEngineUnity::Test_LODGroup*(*)(::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_LODGroup*>* ToTestObject_1(::Il2CppArray<::UnityEngine::LODGroup*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_LODGroup*>*(*)(::Il2CppArray<::UnityEngine::LODGroup*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_LODGroup*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_LODGroup*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
