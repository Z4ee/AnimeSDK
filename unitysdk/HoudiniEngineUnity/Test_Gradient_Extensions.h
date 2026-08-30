#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Gradient; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }

#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EEEB6D0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EEEB7F0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEEB690)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Gradient_Extensions_TypeDefinitionIndex = 39449;

	class Test_Gradient_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Gradient* ToTestObject(::UnityEngine::Gradient* a1)
		{
			return ((::HoudiniEngineUnity::Test_Gradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Gradient*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Gradient*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Gradient*>*(*)(::Il2CppArray<::UnityEngine::Gradient*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Gradient*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Gradient*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Gradient*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Gradient*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
