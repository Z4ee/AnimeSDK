#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9F98570)
#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9F985B0)
#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_PLAY_OFFSET UNITYSDK_OFFSET(0x9F98680)
#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x9F98620)
#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9F98530)
#define RPG_CLIENT_PLANETFESFLOATINGGACHATICKET__CTOR_OFFSET UNITYSDK_OFFSET(0x9F98780)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingGachaTicket_TypeDefinitionIndex = 54091;

	class PlanetFesFloatingGachaTicket : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_SETNUMBER_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGGACHATICKET_PLAY_OFFSET))(this, a1);
		}
	};
}
