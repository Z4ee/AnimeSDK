#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define NAPWARNINGLINE_INIT_OFFSET UNITYSDK_OFFSET(0x1DDF40E0)
#define NAPWARNINGLINE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DDF3DB0)
#define NAPWARNINGLINE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1DDF4A20)
#define NAPWARNINGLINE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DDF3A70)
#define NAPWARNINGLINE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1DDF3FC0)
#define NAPWARNINGLINE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1DDF4020)
#define NAPWARNINGLINE_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1DDF3F30)
#define NAPWARNINGLINE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1DDF3B30)
#define NAPWARNINGLINE_RECREATEMESH_OFFSET UNITYSDK_OFFSET(0x1DDF49D0)
#define NAPWARNINGLINE_SYNCCHARACTERPOS_OFFSET UNITYSDK_OFFSET(0x1DDF4720)
#define NAPWARNINGLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4BC0)
#define NAPWARNINGLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4B70)

inline static constexpr unsigned int NapWarningLine_TypeDefinitionIndex = 27199;

class NapWarningLine : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__FrameXOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapWarningLine_TypeDefinitionIndex)->GetStaticField(0x6270);
	}
	static ::System::Int32* StaticGet__DotFadeOut()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapWarningLine_TypeDefinitionIndex)->GetStaticField(0x6274);
	}
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x18
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x20
	::UnityEngine::Mesh* cachedMesh; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPWARNINGLINE__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONREALENABLE_OFFSET))(this);
	}

	::System::Void SyncCharacterPos(::UnityEngine::Vector3 positionWS)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_SYNCCHARACTERPOS_OFFSET))(this, positionWS);
	}

	::System::Void ReCreateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_RECREATEMESH_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_INIT_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPWARNINGLINE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
