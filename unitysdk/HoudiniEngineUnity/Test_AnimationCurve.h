#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F7D6F0)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_ISNULL_OFFSET UNITYSDK_OFFSET(0x17F7D6E0)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7D6D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_AnimationCurve_TypeDefinitionIndex = 37784;

	class Test_AnimationCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* self; // 0x10

		::System::Void _ctor(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_AnimationCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
