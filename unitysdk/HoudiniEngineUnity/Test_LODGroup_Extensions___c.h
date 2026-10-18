#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_LODGroup; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class LODGroup; }

#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B2B20)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B2B60)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9B2B70)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B9B2BB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_LODGroup_Extensions___c_TypeDefinitionIndex = 40712;

	class Test_LODGroup_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::LODGroup*, ::HoudiniEngineUnity::Test_LODGroup*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::LODGroup*, ::HoudiniEngineUnity::Test_LODGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Test_LODGroup_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x57230);
		}
		static ::HoudiniEngineUnity::Test_LODGroup_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_LODGroup_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_LODGroup_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x57238);
		}
		static ::System::Converter_2<::UnityEngine::LODGroup*, ::HoudiniEngineUnity::Test_LODGroup*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::LODGroup*, ::HoudiniEngineUnity::Test_LODGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Test_LODGroup_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x57240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_LODGroup* _ToTestObject_b__1_0(::UnityEngine::LODGroup* a1)
		{
			return ((::HoudiniEngineUnity::Test_LODGroup*(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_LODGroup* _ToTestObject_b__2_0(::UnityEngine::LODGroup* a1)
		{
			return ((::HoudiniEngineUnity::Test_LODGroup*(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
