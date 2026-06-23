#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STATICGRID2D_CALCULATEGRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A0E60F0)
#define STATICGRID2D_CHECKIFSORTED_OFFSET UNITYSDK_OFFSET(0x1A0E5FA0)
#define STATICGRID2D_GET_COLS_OFFSET UNITYSDK_OFFSET(0x1A0E5E20)
#define STATICGRID2D_GET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A0E5E40)
#define STATICGRID2D_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1A0E5E70)
#define STATICGRID2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1A0E5DE0)
#define STATICGRID2D_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1A0E5E00)
#define STATICGRID2D_SET_COLS_OFFSET UNITYSDK_OFFSET(0x1A0E5E30)
#define STATICGRID2D_SET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A0E5E60)
#define STATICGRID2D_SET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1A0E5E80)
#define STATICGRID2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1A0E5DF0)
#define STATICGRID2D_SET_ROWS_OFFSET UNITYSDK_OFFSET(0x1A0E5E10)
#define STATICGRID2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5E90)

inline static constexpr unsigned int StaticGrid2D_TypeDefinitionIndex = 56012;

class StaticGrid2D : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector2>* _Points_k__BackingField; // 0x10
	::System::Int32 _Cols_k__BackingField; // 0x18
	::UnityEngine::Bounds _GridBounds_k__BackingField; // 0x1C
	::System::Boolean _IsSorted_k__BackingField; // 0x34
	::System::Int32 _Rows_k__BackingField; // 0x38

	::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector2>* points, ::System::Nullable_1<::UnityEngine::Bounds> bounds, ::System::Boolean assureSorted)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Nullable_1<::UnityEngine::Bounds>, ::System::Boolean))((::PBYTE)hIl2Cpp + STATICGRID2D__CTOR_OFFSET))(this, points, bounds, assureSorted);
	}

	::Il2CppArray<::UnityEngine::Vector2>* get_Points()
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_POINTS_OFFSET))(this);
	}

	::System::Void set_Points(::Il2CppArray<::UnityEngine::Vector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_POINTS_OFFSET))(this, value);
	}

	::System::Int32 get_Rows()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_ROWS_OFFSET))(this);
	}

	::System::Void set_Rows(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_ROWS_OFFSET))(this, value);
	}

	::System::Int32 get_Cols()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_COLS_OFFSET))(this);
	}

	::System::Void set_Cols(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_COLS_OFFSET))(this, value);
	}

	::UnityEngine::Bounds get_GridBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_GRIDBOUNDS_OFFSET))(this);
	}

	::System::Void set_GridBounds(::UnityEngine::Bounds value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_GRIDBOUNDS_OFFSET))(this, value);
	}

	::System::Boolean get_IsSorted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_ISSORTED_OFFSET))(this);
	}

	::System::Void set_IsSorted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_ISSORTED_OFFSET))(this, value);
	}

	::System::Boolean CheckIfSorted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_CHECKIFSORTED_OFFSET))(this);
	}

	::UnityEngine::Bounds CalculateGridBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_CALCULATEGRIDBOUNDS_OFFSET))(this);
	}
};
