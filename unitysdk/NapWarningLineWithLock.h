#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define NAPWARNINGLINEWITHLOCK_INIT_OFFSET UNITYSDK_OFFSET(0x190802F0)
#define NAPWARNINGLINEWITHLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1907FFC0)
#define NAPWARNINGLINEWITHLOCK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19080C40)
#define NAPWARNINGLINEWITHLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1907FAA0)
#define NAPWARNINGLINEWITHLOCK_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x190801D0)
#define NAPWARNINGLINEWITHLOCK_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19080230)
#define NAPWARNINGLINEWITHLOCK_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x19080140)
#define NAPWARNINGLINEWITHLOCK_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1907FB60)
#define NAPWARNINGLINEWITHLOCK_RECREATEMESH_OFFSET UNITYSDK_OFFSET(0x19080960)
#define NAPWARNINGLINEWITHLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19080B40)
#define NAPWARNINGLINEWITHLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19080DE0)
#define NAPWARNINGLINEWITHLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19080D90)

inline static constexpr unsigned int NapWarningLineWithLock_TypeDefinitionIndex = 29475;

class NapWarningLineWithLock : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__FrameXOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapWarningLineWithLock_TypeDefinitionIndex)->GetStaticField(0x78F0);
	}
	::UnityEngine::GameObject* warningline; // 0x18
	::UnityEngine::Vector3 EffectOringinScale; // 0x20
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x30
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x38
	::Il2CppArray<::UnityEngine::Transform*>* childTransforms; // 0x40
	::UnityEngine::Vector3 lastFrameScale; // 0x48
	::UnityEngine::Mesh* cachedMesh; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONREALENABLE_OFFSET))(this);
	}

	::System::Void ReCreateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_RECREATEMESH_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_INIT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_UPDATE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINEWITHLOCK_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
