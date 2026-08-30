#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/RandomUpdater.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_GET__WEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC5EC50)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1AC5E820)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_B840F7A094E17D8F_OFFSET UNITYSDK_OFFSET(0x1AC5E920)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5E770)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER___INITIALIZE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1AC5ECA0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int SmoothUpdater_TypeDefinitionIndex = 73481;

	class SmoothUpdater : public ::RPG::Client::ElectricChainV2::RandomUpdater
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _lastRandomGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_B840F7A094E17D8F(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_B840F7A094E17D8F_OFFSET))(this, a1);
		}

		::System::Single get__weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_GET__WEIGHT_OFFSET))(this);
		}

		::System::Void __Initialize_b__0_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER___INITIALIZE_B__0_0_OFFSET))(this, a1);
		}
	};
}
