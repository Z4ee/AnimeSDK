#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_AnimationCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4AD160)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4AD280)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4AD120)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_AnimationCurve_Extensions_TypeDefinitionIndex = 39452;

	class Test_AnimationCurve_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_AnimationCurve* ToTestObject(::UnityEngine::AnimationCurve* a1)
		{
			return ((::HoudiniEngineUnity::Test_AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_AnimationCurve*>* ToTestObject_1(::Il2CppArray<::UnityEngine::AnimationCurve*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_AnimationCurve*>*(*)(::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_AnimationCurve*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_AnimationCurve*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
