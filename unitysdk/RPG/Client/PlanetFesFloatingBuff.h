#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PLANETFESFLOATINGBUFF_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDB47660)
#define RPG_CLIENT_PLANETFESFLOATINGBUFF_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDB476A0)
#define RPG_CLIENT_PLANETFESFLOATINGBUFF_PLAY_OFFSET UNITYSDK_OFFSET(0xDB477B0)
#define RPG_CLIENT_PLANETFESFLOATINGBUFF_SETNUMBER_OFFSET UNITYSDK_OFFSET(0xDB47710)
#define RPG_CLIENT_PLANETFESFLOATINGBUFF_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDB47620)
#define RPG_CLIENT_PLANETFESFLOATINGBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xDB478A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingBuff_TypeDefinitionIndex = 66515;

	class PlanetFesFloatingBuff : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetNumber(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF_SETNUMBER_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGBUFF_PLAY_OFFSET))(this, a1);
		}
	};
}
