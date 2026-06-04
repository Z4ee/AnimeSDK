#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TreeInstance.h"

namespace HoudiniEngineUnity { class Test_TreeInstance; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F86060)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F860A0)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17F860B0)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F86120)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TreeInstance_Extensions___c_TypeDefinitionIndex = 37795;

	class Test_TreeInstance_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TreeInstance_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11930);
		}
		static ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Test_TreeInstance_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11938);
		}
		static ::HoudiniEngineUnity::Test_TreeInstance_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_TreeInstance_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_TreeInstance_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x11940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_TreeInstance* _ToTestObject_b__1_0(::UnityEngine::TreeInstance a1)
		{
			return ((::HoudiniEngineUnity::Test_TreeInstance*(*)(::PVOID, ::UnityEngine::TreeInstance))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_TreeInstance* _ToTestObject_b__2_0(::UnityEngine::TreeInstance a1)
		{
			return ((::HoudiniEngineUnity::Test_TreeInstance*(*)(::PVOID, ::UnityEngine::TreeInstance))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
