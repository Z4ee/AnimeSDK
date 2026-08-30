#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Material; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EEED910)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EEEDA50)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEED8D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Material_Extensions_TypeDefinitionIndex = 39420;

	class Test_Material_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Material* ToTestObject(::UnityEngine::Material* a1)
		{
			return ((::HoudiniEngineUnity::Test_Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Material*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Material*>*(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Material*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Material*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
