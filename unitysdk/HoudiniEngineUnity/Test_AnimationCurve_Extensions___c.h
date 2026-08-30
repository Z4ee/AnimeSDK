#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_AnimationCurve; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class AnimationCurve; }

#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD3B0)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD3F0)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B4AD400)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4AD440)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_AnimationCurve_Extensions___c_TypeDefinitionIndex = 39453;

	class Test_AnimationCurve_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_AnimationCurve_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_AnimationCurve_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_AnimationCurve_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62E20);
		}
		static ::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Test_AnimationCurve_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62E28);
		}
		static ::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Test_AnimationCurve_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x62E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_AnimationCurve* _ToTestObject_b__1_0(::UnityEngine::AnimationCurve* a1)
		{
			return ((::HoudiniEngineUnity::Test_AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_AnimationCurve* _ToTestObject_b__2_0(::UnityEngine::AnimationCurve* a1)
		{
			return ((::HoudiniEngineUnity::Test_AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
