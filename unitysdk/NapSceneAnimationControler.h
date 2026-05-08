#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NapSceneAnimationDynamicProxy;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class PBDDeformer; }
namespace UnityEngine { class ParticleSystem; }

#define NAPSCENEANIMATIONCONTROLER_ADDPROXYTOCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCD54C60)
#define NAPSCENEANIMATIONCONTROLER_AUTOBINDPARTICLES_OFFSET UNITYSDK_OFFSET(0xCD54DA0)
#define NAPSCENEANIMATIONCONTROLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD54BD0)
#define NAPSCENEANIMATIONCONTROLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD55D80)
#define NAPSCENEANIMATIONCONTROLER_PAUSE_OFFSET UNITYSDK_OFFSET(0xCD55070)
#define NAPSCENEANIMATIONCONTROLER_REMOVEPROXYFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCD54D10)
#define NAPSCENEANIMATIONCONTROLER_REPLAY_OFFSET UNITYSDK_OFFSET(0xCD55720)
#define NAPSCENEANIMATIONCONTROLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD55EF0)
#define NAPSCENEANIMATIONCONTROLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD55DD0)

inline static constexpr unsigned int NapSceneAnimationControler_TypeDefinitionIndex = 56456;

class NapSceneAnimationControler : public ::UnityEngine::MonoBehaviour
{
public:
	static ::NapSceneAnimationControler** StaticGet_instance()
	{
		return (::NapSceneAnimationControler**)Il2CppClass::FromTypeDefinitionIndex(NapSceneAnimationControler_TypeDefinitionIndex)->GetStaticField(0x3D7A0);
	}
	static ::System::Int32* StaticGet__GlobalPauseNapTime()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSceneAnimationControler_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	::System::Collections::Generic::HashSet_1<::NapSceneAnimationDynamicProxy*>* dynamicProxies; // 0x18
	::Il2CppArray<::UnityEngine::PBDDeformer*>* pbdDeformer; // 0x20
	::Il2CppArray<::UnityEngine::Material*>* pausedMaterialAnimation; // 0x28
	::Il2CppArray<::UnityEngine::GameObject*>* pausedParticlesHolder; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* pausedParticles; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_AWAKE_OFFSET))(this);
	}

	::System::Void AddProxyToController(::NapSceneAnimationDynamicProxy* proxy)
	{
		return ((::System::Void(*)(::PVOID, ::NapSceneAnimationDynamicProxy*))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_ADDPROXYTOCONTROLLER_OFFSET))(this, proxy);
	}

	::System::Void RemoveProxyFromController(::NapSceneAnimationDynamicProxy* proxy)
	{
		return ((::System::Void(*)(::PVOID, ::NapSceneAnimationDynamicProxy*))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_REMOVEPROXYFROMCONTROLLER_OFFSET))(this, proxy);
	}

	::System::Void AutoBindParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_AUTOBINDPARTICLES_OFFSET))(this);
	}

	::System::Void Pause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_PAUSE_OFFSET))(this);
	}

	::System::Void RePlay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_REPLAY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEANIMATIONCONTROLER_ONDISABLE_OFFSET))(this);
	}
};
