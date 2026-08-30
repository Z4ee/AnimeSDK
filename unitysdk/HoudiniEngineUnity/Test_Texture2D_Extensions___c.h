#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Texture2D; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B5060)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B50A0)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4B50B0)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4B50F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Texture2D_Extensions___c_TypeDefinitionIndex = 39459;

	class Test_Texture2D_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Texture2D_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Texture2D_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Texture2D_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632A0);
		}
		static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Texture2D_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632A8);
		}
		static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Texture2D_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x632B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__1_0(::UnityEngine::Texture2D* a1)
		{
			return ((::HoudiniEngineUnity::Test_Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__2_0(::UnityEngine::Texture2D* a1)
		{
			return ((::HoudiniEngineUnity::Test_Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
