#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoTrainPartyBuildItemDynamicBind_DynamicBind; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND__CTOR_OFFSET UNITYSDK_OFFSET(0xAA03080)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItemDynamicBind_TypeDefinitionIndex = 63519;

	class MonoTrainPartyBuildItemDynamicBind : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MonoTrainPartyBuildItemDynamicBind_DynamicBind*>* Binds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND__CTOR_OFFSET))(this);
		}
	};
}
