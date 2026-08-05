#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDMATERIAL_OFFSET UNITYSDK_OFFSET(0x157CACE0)
#define NAPSCENEANIMATIONDYNAMICPROXY_AUTOBINDPARTICLES_OFFSET UNITYSDK_OFFSET(0x157CAEC0)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x157CA910)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x157CA670)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x157CAC20)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x157CAC80)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x157CA9D0)
#define NAPSCENEANIMATIONDYNAMICPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x157CA730)
#define NAPSCENEANIMATIONDYNAMICPROXY_PAUSE_OFFSET UNITYSDK_OFFSET(0x157CB060)
#define NAPSCENEANIMATIONDYNAMICPROXY_REPLAY_OFFSET UNITYSDK_OFFSET(0x157CB420)
#define NAPSCENEANIMATIONDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x157CB7F0)

inline static constexpr unsigned int NapSceneAnimationDynamicProxy_TypeDefinitionIndex = 44407;

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
