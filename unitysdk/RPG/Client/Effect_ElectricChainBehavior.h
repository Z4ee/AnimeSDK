#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_ElectricChain; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x15E587D0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15E586F0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E58680)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15E58830)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E58960)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainBehavior_TypeDefinitionIndex = 70421;

	class Effect_ElectricChainBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ElectricChain* get__Owner()
		{
			return ((::RPG::Client::Effect_ElectricChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
