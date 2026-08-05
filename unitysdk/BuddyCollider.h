#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BUDDYCOLLIDER_CALCONTAINSGRIDS_OFFSET UNITYSDK_OFFSET(0x1706CF70)
#define BUDDYCOLLIDER_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1706C900)
#define BUDDYCOLLIDER_GET_CONTAINSGRIDLIST_OFFSET UNITYSDK_OFFSET(0x1706BB80)
#define BUDDYCOLLIDER_GET_GRIDSCALE_OFFSET UNITYSDK_OFFSET(0x1706BBA0)
#define BUDDYCOLLIDER_GET_ISCANPUTDOWN_OFFSET UNITYSDK_OFFSET(0x1706BBB0)
#define BUDDYCOLLIDER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1706BB60)
#define BUDDYCOLLIDER_GET_RECTS_OFFSET UNITYSDK_OFFSET(0x1706BB40)
#define BUDDYCOLLIDER_ISFULLENCIRCLEMENT_OFFSET UNITYSDK_OFFSET(0x1706CD90)
#define BUDDYCOLLIDER_ISINGRIDMAP_OFFSET UNITYSDK_OFFSET(0x1706CAD0)
#define BUDDYCOLLIDER_REBUILDCOLLIDERMESH_OFFSET UNITYSDK_OFFSET(0x1706BE60)
#define BUDDYCOLLIDER_ROTATE2_OFFSET UNITYSDK_OFFSET(0x1706C560)
#define BUDDYCOLLIDER_ROTATEPOINT_OFFSET UNITYSDK_OFFSET(0x1706C7C0)
#define BUDDYCOLLIDER_ROTATE_OFFSET UNITYSDK_OFFSET(0x1706C3D0)
#define BUDDYCOLLIDER_SETRCTPOSITION_OFFSET UNITYSDK_OFFSET(0x1706C1C0)
#define BUDDYCOLLIDER_SET_CONTAINSGRIDLIST_OFFSET UNITYSDK_OFFSET(0x1706BB90)
#define BUDDYCOLLIDER_SET_ISCANPUTDOWN_OFFSET UNITYSDK_OFFSET(0x1706BBC0)
#define BUDDYCOLLIDER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1706BB70)
#define BUDDYCOLLIDER_SET_RECTS_OFFSET UNITYSDK_OFFSET(0x1706BB50)
#define BUDDYCOLLIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1706C330)
#define BUDDYCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1706BBD0)

inline static constexpr unsigned int BuddyCollider_TypeDefinitionIndex = 71686;

class BuddyCollider : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _Mesh_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* initLocalPos; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _ContainsGridList_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_143B7A497B890286>* _Rects_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* initMesh; // 0x30
	::System::Int32 gridScale; // 0x38
	::UnityEngine::Vector2 Spacing; // 0x3C
	::UnityEngine::Vector2 gridMin; // 0x44
	::UnityEngine::Vector2 center; // 0x4C
	::System::Boolean _IsCanPutDown_k__BackingField; // 0x54
	::UnityEngine::Vector2 centerOffset; // 0x58
	::UnityEngine::Vector2 outLineSize; // 0x60
	::Struct_2_143B7A497B890286 outLineRect; // 0x68
	::UnityEngine::Vector2 gridMax; // 0x80
	::System::Int32 currentAngle; // 0x88

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* mesh, ::System::Int32 gridScale)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER__CTOR_OFFSET))(this, mesh, gridScale);
	}

	::System::Void _ctor_1(::Struct_2_143B7A497B890286 rect)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER__CTOR_1_OFFSET))(this, rect);
	}

	::System::Collections::Generic::List_1<::Struct_2_143B7A497B890286>* get_Rects()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_143B7A497B890286>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_RECTS_OFFSET))(this);
	}

	::System::Void set_Rects(::System::Collections::Generic::List_1<::Struct_2_143B7A497B890286>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_143B7A497B890286>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_RECTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_Mesh()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_MESH_OFFSET))(this);
	}

	::System::Void set_Mesh(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_MESH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_ContainsGridList()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_CONTAINSGRIDLIST_OFFSET))(this);
	}

	::System::Void set_ContainsGridList(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_CONTAINSGRIDLIST_OFFSET))(this, value);
	}

	::System::Int32 get_GridScale()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_GRIDSCALE_OFFSET))(this);
	}

	::System::Boolean get_IsCanPutDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_ISCANPUTDOWN_OFFSET))(this);
	}

	::System::Void set_IsCanPutDown(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_ISCANPUTDOWN_OFFSET))(this, value);
	}

	::System::Void RebuildColliderMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_REBUILDCOLLIDERMESH_OFFSET))(this);
	}

	::System::Void Rotate(::System::Int32 angle)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATE_OFFSET))(this, angle);
	}

	::System::Void Rotate2(::System::Int32 angle)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATE2_OFFSET))(this, angle);
	}

	::UnityEngine::Vector2 RotatePoint(::UnityEngine::Vector2 pos, ::System::Single angle)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATEPOINT_OFFSET))(this, pos, angle);
	}

	::System::Void SetRctPosition(::UnityEngine::Vector2 screenPosition)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SETRCTPOSITION_OFFSET))(this, screenPosition);
	}

	::UnityEngine::Vector2 GetLocalPosition(::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GETLOCALPOSITION_OFFSET))(this, index);
	}

	::System::Boolean IsInGridMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ISINGRIDMAP_OFFSET))(this);
	}

	::System::Boolean IsFullEncirclement()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ISFULLENCIRCLEMENT_OFFSET))(this);
	}

	::System::Void CalContainsGrids()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_CALCONTAINSGRIDS_OFFSET))(this);
	}
};
