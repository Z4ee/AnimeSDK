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

#define MINIMAPCLIPPER_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x88B9FB0)
#define MINIMAPCLIPPER_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x88BA110)
#define MINIMAPCLIPPER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x88BA060)
#define MINIMAPCLIPPER_METHOD_7_3D57569EEAF613B6_OFFSET UNITYSDK_OFFSET(0x88BA8B0)
#define MINIMAPCLIPPER_METHOD_7_9C0F83425CE501BF_OFFSET UNITYSDK_OFFSET(0x88BB500)
#define MINIMAPCLIPPER_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0x88BB3A0)
#define MINIMAPCLIPPER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x88BB350)
#define MINIMAPCLIPPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x88BC100)
#define MINIMAPCLIPPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x88BBF20)
#define MINIMAPCLIPPER_SETCLIPSIZE_OFFSET UNITYSDK_OFFSET(0x88BBD80)
#define MINIMAPCLIPPER_SETUVOFFSET_OFFSET UNITYSDK_OFFSET(0x88BA700)
#define MINIMAPCLIPPER_SETUVSCALE_OFFSET UNITYSDK_OFFSET(0x88BB2C0)
#define MINIMAPCLIPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x88BC160)
#define MINIMAPCLIPPER___IFIXBASEPROXY_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x88BC170)
#define MINIMAPCLIPPER___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x88BC230)
#define MINIMAPCLIPPER___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x88BC180)

inline static constexpr unsigned int MiniMapClipper_TypeDefinitionIndex = 38434;

class MiniMapClipper : public ::UnityEngine::UI::BaseMeshEffect
{
public:
	::UnityEngine::UI::Image* Field_7_0; // 0x20
	::UnityEngine::RectTransform* Field_7_1; // 0x28
	::UnityEngine::Material* Field_7_2; // 0x30
	::UnityEngine::Sprite* Field_7_3; // 0x38
	::System::Single Field_7_4; // 0x40
	::System::Single Field_7_5; // 0x44
	::UnityEngine::Vector2 Field_7_6; // 0x48
	::UnityEngine::Vector2 Field_7_7; // 0x50
	::UnityEngine::Vector2 Field_7_8; // 0x58
	::UnityEngine::Material* Field_7_9; // 0x60

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

	::System::Void Method_7_9C0F83425CE501BF(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_METHOD_7_9C0F83425CE501BF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean Method_7_3D57569EEAF613B6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER_METHOD_7_3D57569EEAF613B6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ModifyMesh(::UnityEngine::Mesh* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER___IFIXBASEPROXY_MODIFYMESH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIMAPCLIPPER___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
	}
};
