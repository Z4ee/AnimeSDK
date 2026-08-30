#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TreeInstance.h"

namespace HoudiniEngineUnity { class Test_TreeInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4B3BE0)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4B5920)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4B58B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TreeInstance_Extensions_TypeDefinitionIndex = 39461;

	class Test_TreeInstance_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_TreeInstance* ToTestObject(::UnityEngine::TreeInstance a1)
		{
			return ((::HoudiniEngineUnity::Test_TreeInstance*(*)(::UnityEngine::TreeInstance))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_TreeInstance*>* ToTestObject_1(::Il2CppArray<::UnityEngine::TreeInstance>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_TreeInstance*>*(*)(::Il2CppArray<::UnityEngine::TreeInstance>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TreeInstance*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TreeInstance*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
