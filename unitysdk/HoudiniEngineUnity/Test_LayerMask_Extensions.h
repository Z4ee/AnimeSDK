#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace HoudiniEngineUnity { class Test_LayerMask; }

#define HOUDINIENGINEUNITY_TEST_LAYERMASK_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x17F81270)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_LayerMask_Extensions_TypeDefinitionIndex = 37780;

	class Test_LayerMask_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_LayerMask* ToTestObject(::UnityEngine::LayerMask a1)
		{
			return ((::HoudiniEngineUnity::Test_LayerMask*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LAYERMASK_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
