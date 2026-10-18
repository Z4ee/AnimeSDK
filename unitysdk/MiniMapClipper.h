#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class VertexHelper; }

#define MINIMAPCLIPPER_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xBA4AA30)
#define MINIMAPCLIPPER_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xBA4AB90)
#define MINIMAPCLIPPER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBA4AAE0)
#define MINIMAPCLIPPER_METHOD_7_3D57569EEAF613B6_OFFSET UNITYSDK_OFFSET(0xBA4B2C0)
#define MINIMAPCLIPPER_METHOD_7_81916C6E7D6F5FBF_OFFSET UNITYSDK_OFFSET(0xBA4BEF0)
#define MINIMAPCLIPPER_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xBA4BD90)
#define MINIMAPCLIPPER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xBA4BD40)
#define MINIMAPCLIPPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBA4C880)
#define MINIMAPCLIPPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBA4C720)
#define MINIMAPCLIPPER_SETCLIPSIZE_OFFSET UNITYSDK_OFFSET(0xBA4C570)
#define MINIMAPCLIPPER_SETUVOFFSET_OFFSET UNITYSDK_OFFSET(0xBA4B110)
#define MINIMAPCLIPPER_SETUVSCALE_OFFSET UNITYSDK_OFFSET(0xBA4BCB0)
#define MINIMAPCLIPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4C8E0)

inline static constexpr unsigned int MiniMapClipper_TypeDefinitionIndex = 47573;

class MiniMapClipper : public ::UnityEngine::UI::BaseMeshEffect
{
public:
	::UnityEngine::UI::Image* JGPEHEDMCMJ; // 0x20
	::UnityEngine::RectTransform* IGLNACMFMHF; // 0x28
	::UnityEngine::Material* KLAEOKPPDHD; // 0x30
	::UnityEngine::Sprite* GBGDBIMOPHI; // 0x38
	::System::Single GBFMPGJDAKK; // 0x40
	::System::Single NIKOGMPIDOA; // 0x44
	::UnityEngine::Vector2 DKDJPNJPJEI; // 0x48
	::UnityEngine::Vector2 PDACJMEPANO; // 0x50
	::UnityEngine::Vector2 GDGMJELCGII; // 0x58
	::UnityEngine::Material* FAALBBDOFIL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::Image* get_image()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_GET_IMAGE_OFFSET))(this);
	}

	::UnityEngine::RectTransform* get_rectTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_GET_RECTTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::Material* get_materialForRendering()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_GET_MATERIALFORRENDERING_OFFSET))(this);
	}

	::System::Void SetUVOffset(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_SETUVOFFSET_OFFSET))(this, a1);
	}

	::System::Void SetUVScale(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_SETUVSCALE_OFFSET))(this, a1);
	}

	::System::Void ModifyMesh(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_MODIFYMESH_OFFSET))(this, a1);
	}

	::System::Void ModifyMesh_1(::UnityEngine::UI::VertexHelper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_MODIFYMESH_1_OFFSET))(this, a1);
	}

	::System::Void SetClipSize(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_SETCLIPSIZE_OFFSET))(this, a1, a2);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_ONENABLE_OFFSET))(this);
	}

	::System::Void Method_7_81916C6E7D6F5FBF(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_METHOD_7_81916C6E7D6F5FBF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean Method_7_3D57569EEAF613B6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_METHOD_7_3D57569EEAF613B6_OFFSET))(this);
	}
};
