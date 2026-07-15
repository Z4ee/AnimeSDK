#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Gradient; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Gradient; }

#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20B780)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20B7C0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D20B7D0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D20B810)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Gradient_Extensions___c_TypeDefinitionIndex = 38591;

	class Test_Gradient_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::Gradient*, ::HoudiniEngineUnity::Test_Gradient*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Gradient*, ::HoudiniEngineUnity::Test_Gradient*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Gradient_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C070);
		}
		static ::HoudiniEngineUnity::Test_Gradient_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Gradient_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Gradient_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C078);
		}
		static ::System::Converter_2<::UnityEngine::Gradient*, ::HoudiniEngineUnity::Test_Gradient*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Gradient*, ::HoudiniEngineUnity::Test_Gradient*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Gradient_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1C080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Gradient* _ToTestObject_b__1_0(::UnityEngine::Gradient* a1)
		{
			return ((::HoudiniEngineUnity::Test_Gradient*(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Gradient* _ToTestObject_b__2_0(::UnityEngine::Gradient* a1)
		{
			return ((::HoudiniEngineUnity::Test_Gradient*(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
