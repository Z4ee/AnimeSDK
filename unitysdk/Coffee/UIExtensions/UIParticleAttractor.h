#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleAttractor_Movement.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleAttractor_UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Events { class UnityEvent; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_APPLYPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B580E70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ATTRACT_OFFSET UNITYSDK_OFFSET(0x1B581600)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETATTRACTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B582300)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETDESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x1B581CB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1B580D70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DESTINATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x1B580CE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1B580D90)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B580DB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_ONATTRACTED_OFFSET UNITYSDK_OFFSET(0x1B580DF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B580E10)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1B580DD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B5815B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B581380)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B581140)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1B580D80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DESTINATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x1B580CF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1B580DA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B580DC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_ONATTRACTED_OFFSET UNITYSDK_OFFSET(0x1B580E00)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B580E20)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1B580DE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5829D0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleAttractor_TypeDefinitionIndex = 32673;

	class UIParticleAttractor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x18
		::System::Single m_DestinationRadius; // 0x20
		::System::Single m_DelayRate; // 0x24
		::System::Single m_MaxSpeed; // 0x28
		::Coffee::UIExtensions::UIParticleAttractor_Movement m_Movement; // 0x2C
		::Coffee::UIExtensions::UIParticleAttractor_UpdateMode m_UpdateMode; // 0x30
		::UnityEngine::Events::UnityEvent* m_OnAttracted; // 0x38
		::Coffee::UIExtensions::UIParticle* _uiParticle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_destinationRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DESTINATIONRADIUS_OFFSET))(this);
		}

		::System::Void set_destinationRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DESTINATIONRADIUS_OFFSET))(this, value);
		}

		::System::Single get_delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_delay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DELAY_OFFSET))(this, value);
		}

		::System::Single get_maxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_maxSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MAXSPEED_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::UIParticleAttractor_Movement get_movement()
		{
			return ((::Coffee::UIExtensions::UIParticleAttractor_Movement(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MOVEMENT_OFFSET))(this);
		}

		::System::Void set_movement(::Coffee::UIExtensions::UIParticleAttractor_Movement value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleAttractor_Movement))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MOVEMENT_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::UIParticleAttractor_UpdateMode get_updateMode()
		{
			return ((::Coffee::UIExtensions::UIParticleAttractor_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::Coffee::UIExtensions::UIParticleAttractor_UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleAttractor_UpdateMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Events::UnityEvent* get_onAttracted()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_ONATTRACTED_OFFSET))(this);
		}

		::System::Void set_onAttracted(::UnityEngine::Events::UnityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_ONATTRACTED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem* get_particleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::System::Void set_particleSystem(::UnityEngine::ParticleSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_PARTICLESYSTEM_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Attract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ATTRACT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetDestinationPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETDESTINATIONPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAttractedPosition(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::System::Single duration, ::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETATTRACTEDPOSITION_OFFSET))(this, current, target, duration, time);
		}

		::System::Void ApplyParticleSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_APPLYPARTICLESYSTEM_OFFSET))(this);
		}
	};
}
