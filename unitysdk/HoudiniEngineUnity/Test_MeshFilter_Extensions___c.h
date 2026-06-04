#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_MeshFilter; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class MeshFilter; }

#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F82970)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F829B0)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17F829C0)
#define HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F82A00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_MeshFilter_Extensions___c_TypeDefinitionIndex = 37778;

	class Test_MeshFilter_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshFilter_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x116F0);
		}
		static ::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshFilter_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x116F8);
		}
		static ::HoudiniEngineUnity::Test_MeshFilter_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_MeshFilter_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_MeshFilter_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_MeshFilter* _ToTestObject_b__1_0(::UnityEngine::MeshFilter* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshFilter*(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_MeshFilter* _ToTestObject_b__2_0(::UnityEngine::MeshFilter* a1)
		{
			return ((::HoudiniEngineUnity::Test_MeshFilter*(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESHFILTER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
