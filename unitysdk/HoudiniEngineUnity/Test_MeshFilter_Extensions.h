#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }

#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4B2110)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4B2230)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4B20D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshFilter_Extensions_TypeDefinitionIndex = 39444;

	class Test_MeshFilter_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_MeshFilter* ToTestObject(::UnityEngine::MeshFilter* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshFilter*(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_MeshFilter*>* ToTestObject_1(::Il2CppArray<::UnityEngine::MeshFilter*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_MeshFilter*>*(*)(::Il2CppArray<::UnityEngine::MeshFilter*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshFilter*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshFilter*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
