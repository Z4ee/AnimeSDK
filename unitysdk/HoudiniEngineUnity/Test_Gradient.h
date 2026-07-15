#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }

#define HOUDINIENGINEUNITY_TEST_GRADIENT_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1D20B3C0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT_ISNULL_OFFSET UNITYSDK_OFFSET(0x1D20B3B0)
#define HOUDINIENGINEUNITY_TEST_GRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20B3A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Gradient_TypeDefinitionIndex = 38589;

	class Test_Gradient : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* self; // 0x10

		::System::Void _ctor(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Gradient* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Gradient*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_GRADIENT_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
