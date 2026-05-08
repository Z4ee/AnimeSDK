#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDMATERIAL_OFFSET UNITYSDK_OFFSET(0xF4FBA90)
#define NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDPARTICLES_OFFSET UNITYSDK_OFFSET(0xF4FBC70)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF4FB6C0)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF4FB420)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xF4FB9D0)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xF4FBA30)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xF4FB780)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xF4FB4E0)
#define NAPSCENEANIMATIONDYNAMICPROXY_PAUSE_OFFSET UNITYSDK_OFFSET(0xF4FBE10)
#define NAPSCENEANIMATIONDYNAMICPROXY_REPLAY_OFFSET UNITYSDK_OFFSET(0xF4FC1E0)
#define NAPSCENEANIMATIONDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xF4FC5B0)

inline static constexpr unsigned int NapSceneAnimationDynamicProxy_TypeDefinitionIndex = 51936;

class NapSceneAnimationDynamicProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* pausedParticles; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* pausedMaterialAnimation; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void AutoBindMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDMATERIAL_OFFSET))(this);
	}

	::System::Void AutoBindParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDPARTICLES_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void Pause(::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_PAUSE_OFFSET))(this, time);
	}

	::System::Void Replay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONDYNAMICPROXY_REPLAY_OFFSET))(this);
	}
};
