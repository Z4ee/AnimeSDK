#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_ElectricChainBehavior; }
namespace RPG::Client { class ElectricChain; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCDD7180)
#define RPG_CLIENT_EFFECT_ELECTRICCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCDD71D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChain_TypeDefinitionIndex = 70417;

	class Effect_ElectricChain : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_ElectricChainBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::ElectricChain*>* chain; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
