#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport.h"
#include "unitysdk/RPG/Client/Effect_ElectricChainAnimationSupport_TargetChainMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class Effect_ElectricChain; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_METHOD_5_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xA1C9940)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1C9710)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C9AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainAnimationSupport_TypeDefinitionIndex = 64953;

	class Effect_ElectricChainAnimationSupport : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Effect_ElectricChain* target; // 0x18
		::RPG::Client::Effect_ElectricChainAnimationSupport_TargetChainMode targetChainMode; // 0x20
		::Il2CppArray<::System::Int32>* targetChains; // 0x28
		::RPG::Client::Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport electricChainAnimationSupport; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_6F73A40265D5B980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_METHOD_5_6F73A40265D5B980_OFFSET))(this);
		}
	};
}
