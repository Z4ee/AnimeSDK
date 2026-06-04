#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleAttractor_Movement.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleAttractor_UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Events { class UnityEvent; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ADDPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x146753C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ATTRACT_OFFSET UNITYSDK_OFFSET(0x14675B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x14675690)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_COLLECTUIPARTICLESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x14676140)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETATTRACTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x14676B40)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETDESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x146765F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x14675310)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DESTINATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x146752D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x14675330)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x14675350)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_ONATTRACTED_OFFSET UNITYSDK_OFFSET(0x14675390)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_PARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x146753B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x14675370)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14675B60)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14675A20)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14675810)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_REMOVEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x14675540)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x14675320)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DESTINATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x146752E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x14675340)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x14675360)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_ONATTRACTED_OFFSET UNITYSDK_OFFSET(0x146753A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x14675380)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14676DF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14676DE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UPGRADEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x146756A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14676E00)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleAttractor_TypeDefinitionIndex = 41538;

	class UIParticleAttractor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* m_ParticleSystems; // 0x20
		::System::Single m_DestinationRadius; // 0x28
		::System::Single m_DelayRate; // 0x2C
		::System::Single m_MaxSpeed; // 0x30
		::Coffee::UIExtensions::UIParticleAttractor_Movement m_Movement; // 0x34
		::Coffee::UIExtensions::UIParticleAttractor_UpdateMode m_UpdateMode; // 0x38
		::UnityEngine::Events::UnityEvent* m_OnAttracted; // 0x40
		::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* _uiParticles; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_destinationRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DESTINATIONRADIUS_OFFSET))(this);
		}

		::System::Void set_destinationRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DESTINATIONRADIUS_OFFSET))(this, a1);
		}

		::System::Single get_delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_delay(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_DELAY_OFFSET))(this, a1);
		}

		::System::Single get_maxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_maxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::Coffee::UIExtensions::UIParticleAttractor_Movement get_movement()
		{
			return ((::Coffee::UIExtensions::UIParticleAttractor_Movement(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_MOVEMENT_OFFSET))(this);
		}

		::System::Void set_movement(::Coffee::UIExtensions::UIParticleAttractor_Movement a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleAttractor_Movement))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_MOVEMENT_OFFSET))(this, a1);
		}

		::Coffee::UIExtensions::UIParticleAttractor_UpdateMode get_updateMode()
		{
			return ((::Coffee::UIExtensions::UIParticleAttractor_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::Coffee::UIExtensions::UIParticleAttractor_UpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleAttractor_UpdateMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_UPDATEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Events::UnityEvent* get_onAttracted()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_ONATTRACTED_OFFSET))(this);
		}

		::System::Void set_onAttracted(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_SET_ONATTRACTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::ParticleSystem*>* get_particleSystems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GET_PARTICLESYSTEMS_OFFSET))(this);
		}

		::System::Void AddParticleSystem(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_ADDPARTICLESYSTEM_OFFSET))(this, a1);
		}

		::System::Void RemoveParticleSystem(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_REMOVEPARTICLESYSTEM_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_AWAKE_OFFSET))(this);
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

		::UnityEngine::Vector3 GetDestinationPosition(::Coffee::UIExtensions::UIParticle* a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETDESTINATIONPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetAttractedPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_GETATTRACTEDPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CollectUIParticlesIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_COLLECTUIPARTICLESIFNEEDED_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void UpgradeIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEATTRACTOR_UPGRADEIFNEEDED_OFFSET))(this);
		}
	};
}
