#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DeformModulePreset_LodTypeEnum.h"
#include "unitysdk/DeformModulePreset_UVTillingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define DEFORMMODULEPRESET_DECODEQTANGENT_OFFSET UNITYSDK_OFFSET(0x16030730)
#define DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0x16030700)
#define DEFORMMODULEPRESET_GET_ISLOD0_OFFSET UNITYSDK_OFFSET(0x16030720)
#define DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0x16030710)
#define DEFORMMODULEPRESET__CCTOR_OFFSET UNITYSDK_OFFSET(0x160308D0)
#define DEFORMMODULEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x160308B0)

inline static constexpr unsigned int DeformModulePreset_TypeDefinitionIndex = 47619;

class DeformModulePreset : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_JKMGJKAFIMD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeformModulePreset_TypeDefinitionIndex)->GetStaticField(0x51EF0);
	}
	::DeformModulePreset_LodTypeEnum LodType; // 0x18
	::System::Boolean IfUseQuadDeform; // 0x1C
	::DeformModulePreset_UVTillingMode UVMode; // 0x20
	::UnityEngine::Vector3 ModuleSize; // 0x24
	::UnityEngine::Vector3 SourceModelSize; // 0x30
	::System::Boolean IfUseDeformRef; // 0x3C
	::UnityEngine::Vector3 DeformRefSize; // 0x40
	::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x50
	::UnityEngine::Renderer* JAMDAALMOAL; // 0x58
	::UnityEngine::MeshFilter* FNDMMIEAEHF; // 0x60
	::System::Boolean _IfDisableAutoAdjust_k__BackingField; // 0x68

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

	::System::Void set_IfDisableAutoAdjust(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLod0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_GET_ISLOD0_OFFSET))(this);
	}

	static ::System::Void DecodeQTangent(::UnityEngine::Vector4 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector4& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_DECODEQTANGENT_OFFSET))(a1, a2, a3);
	}
};
