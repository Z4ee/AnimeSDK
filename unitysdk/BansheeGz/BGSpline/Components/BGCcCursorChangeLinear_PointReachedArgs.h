#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1655F290)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0x1655F3A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_SET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0x1655F3B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1655F3E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1655F3C0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_PointReachedArgs_TypeDefinitionIndex = 28211;

	class BGCcCursorChangeLinear_PointReachedArgs : public ::System::EventArgs
	{
	public:
		static ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs** StaticGet_Instance()
		{
			return (::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs**)Il2CppClass::FromTypeDefinitionIndex(BGCcCursorChangeLinear_PointReachedArgs_TypeDefinitionIndex)->GetStaticField(0x22DC0);
		}
		::System::Int32 _PointIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS__CCTOR_OFFSET))();
		}

		::System::Int32 get_PointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GET_POINTINDEX_OFFSET))(this);
		}

		::System::Void set_PointIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_SET_POINTINDEX_OFFSET))(this, value);
		}

		static ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs* GetInstance(::System::Int32 index)
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GETINSTANCE_OFFSET))(index);
		}
	};
}
