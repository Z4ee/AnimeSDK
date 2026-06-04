#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class BoxCollider; }

#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F7DBB0)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x17F7DB90)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7DB80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_BoxCollider_TypeDefinitionIndex = 37758;

	class Test_BoxCollider : public ::System::Object
	{
	public:
		::UnityEngine::BoxCollider* self; // 0x10

		::System::Void _ctor(::UnityEngine::BoxCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_BoxCollider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
