#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Material; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B3120)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B3160)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9B3170)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B9B31B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Material_Extensions___c_TypeDefinitionIndex = 40718;

	class Test_Material_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::Material*, ::HoudiniEngineUnity::Test_Material*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Material*, ::HoudiniEngineUnity::Test_Material*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Material_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x572C0);
		}
		static ::HoudiniEngineUnity::Test_Material_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Material_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Material_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x572C8);
		}
		static ::System::Converter_2<::UnityEngine::Material*, ::HoudiniEngineUnity::Test_Material*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Material*, ::HoudiniEngineUnity::Test_Material*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Material_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x572D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Material* _ToTestObject_b__1_0(::UnityEngine::Material* a1)
		{
			return ((::HoudiniEngineUnity::Test_Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Material* _ToTestObject_b__2_0(::UnityEngine::Material* a1)
		{
			return ((::HoudiniEngineUnity::Test_Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
