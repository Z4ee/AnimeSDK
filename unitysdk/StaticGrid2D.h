#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STATICGRID2D_CALCULATEGRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A1563E0)
#define STATICGRID2D_CHECKIFSORTED_OFFSET UNITYSDK_OFFSET(0x1A156290)
#define STATICGRID2D_GET_COLS_OFFSET UNITYSDK_OFFSET(0x1A156110)
#define STATICGRID2D_GET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A156130)
#define STATICGRID2D_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1A156160)
#define STATICGRID2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1A1560D0)
#define STATICGRID2D_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1A1560F0)
#define STATICGRID2D_SET_COLS_OFFSET UNITYSDK_OFFSET(0x1A156120)
#define STATICGRID2D_SET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A156150)
#define STATICGRID2D_SET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1A156170)
#define STATICGRID2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1A1560E0)
#define STATICGRID2D_SET_ROWS_OFFSET UNITYSDK_OFFSET(0x1A156100)
#define STATICGRID2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A156180)

inline static constexpr unsigned int StaticGrid2D_TypeDefinitionIndex = 46554;

class StaticGrid2D : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector2>* _Points_k__BackingField; // 0x10
	::UnityEngine::Bounds _GridBounds_k__BackingField; // 0x18
	::System::Boolean _IsSorted_k__BackingField; // 0x30
	::System::Int32 _Rows_k__BackingField; // 0x34
	::System::Int32 _Cols_k__BackingField; // 0x38

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
