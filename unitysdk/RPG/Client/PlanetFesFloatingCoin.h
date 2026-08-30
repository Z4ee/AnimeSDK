#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESFLOATINGCOIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDB478F0)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDB47930)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN_PLAY_OFFSET UNITYSDK_OFFSET(0xDB47D90)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN_SETDOUBLENUMBER_OFFSET UNITYSDK_OFFSET(0xDB47C70)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN_SETNUMBER_OFFSET UNITYSDK_OFFSET(0xDB47D00)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDB478B0)
#define RPG_CLIENT_PLANETFESFLOATINGCOIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDB47F60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingCoin_TypeDefinitionIndex = 66516;

	class PlanetFesFloatingCoin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x18
		::RPG::Client::LocalizedText* MNKHLPAJGBA; // 0x20
		::UnityEngine::ParticleSystem* LGNAJBNEBEC; // 0x28
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x30
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x38
		::UnityEngine::Transform* CGCPIPGIDNL; // 0x40
		::UnityEngine::Transform* LPMFDOAACIP; // 0x48
		::System::Single HBDJCFFDGDD; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetDoubleNumber(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_SETDOUBLENUMBER_OFFSET))(this, a1);
		}

		::System::Void SetNumber(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_SETNUMBER_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCOIN_PLAY_OFFSET))(this, a1, a2, a3);
		}
	};
}
