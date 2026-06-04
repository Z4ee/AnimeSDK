#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Texture2D; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17F85420)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x17F85540)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F84C40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Texture2D_Extensions_TypeDefinitionIndex = 37791;

	class Test_Texture2D_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Texture2D* ToTestObject(::UnityEngine::Texture2D* a1)
		{
			return ((::HoudiniEngineUnity::Test_Texture2D*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Texture2D*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Texture2D*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Texture2D*>*(*)(::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Texture2D*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Texture2D*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
