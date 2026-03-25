#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DeformModulePreset_UVTillingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0xCB4DAE0)
#define DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0xCB4DAF0)
#define DEFORMMODULEPRESET__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB4DB40)
#define DEFORMMODULEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4DB00)

inline static constexpr unsigned int DeformModulePreset_TypeDefinitionIndex = 38075;

class DeformModulePreset : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_Field_5_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeformModulePreset_TypeDefinitionIndex)->GetStaticField(0x45C20);
	}
	::DeformModulePreset_UVTillingMode UVMode; // 0x18
	::UnityEngine::Vector3 ModuleSize; // 0x1C
	::UnityEngine::MaterialPropertyBlock* Field_5_2; // 0x28
	::UnityEngine::Renderer* Field_5_3; // 0x30
	::UnityEngine::MeshFilter* Field_5_4; // 0x38
	::System::String* InfoText; // 0x40
	::System::Boolean _IfDisableAutoAdjust_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET__CCTOR_OFFSET))();
	}

	::System::Boolean get_IfDisableAutoAdjust()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET))(this);
	}

	::System::Void set_IfDisableAutoAdjust(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET))(this, value);
	}
};
