#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainPartyBuildItemDynamicBindValue; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND_DYNAMICBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3575D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItemDynamicBind_DynamicBind_TypeDefinitionIndex = 65811;

	class MonoTrainPartyBuildItemDynamicBind_DynamicBind : public ::System::Object
	{
	public:
		::RPG::Client::TrainPartyBuildItemDynamicBindValue* BindValue; // 0x10
		::UnityEngine::GameObject* BindGameObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND_DYNAMICBIND__CTOR_OFFSET))(this);
		}
	};
}
