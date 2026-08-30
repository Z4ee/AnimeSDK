#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Mono/FiveDimBodyCollisionSensor.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ADD_ONSTAY_OFFSET UNITYSDK_OFFSET(0xD72D760)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0xD72D6F0)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_REMOVE_ONSTAY_OFFSET UNITYSDK_OFFSET(0xD72D7C0)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY__CTOR_OFFSET UNITYSDK_OFFSET(0xD72D820)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimBodyCollisionSensorWithStay_TypeDefinitionIndex = 75544;

	class FiveDimBodyCollisionSensorWithStay : public ::RPG::Client::Mono::FiveDimBodyCollisionSensor
	{
	public:
		::System::Action_1<::UnityEngine::Collision*>* OnStay; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::System::Void add_OnStay(::System::Action_1<::UnityEngine::Collision*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_ADD_ONSTAY_OFFSET))(this, a1);
		}

		::System::Void remove_OnStay(::System::Action_1<::UnityEngine::Collision*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSORWITHSTAY_REMOVE_ONSTAY_OFFSET))(this, a1);
		}
	};
}
