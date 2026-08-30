#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1AF65E40)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF65EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayExternalInputBridgeBehavior_TypeDefinitionIndex = 70814;

	class Scene_InstanceArrayExternalInputBridgeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
