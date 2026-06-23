#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/DoublePoint.h"
#include "unitysdk/ClipperLib/EndType.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/JoinType.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class PolyNode; }
namespace ClipperLib { class PolyTree; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLIPPERLIB_CLIPPEROFFSET_ADDPATHS_OFFSET UNITYSDK_OFFSET(0x1CFF8A00)
#define CLIPPERLIB_CLIPPEROFFSET_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1CFF8550)
#define CLIPPERLIB_CLIPPEROFFSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CFF84D0)
#define CLIPPERLIB_CLIPPEROFFSET_DOMITER_OFFSET UNITYSDK_OFFSET(0x1CFFB700)
#define CLIPPERLIB_CLIPPEROFFSET_DOOFFSET_OFFSET UNITYSDK_OFFSET(0x1CFF8FC0)
#define CLIPPERLIB_CLIPPEROFFSET_DOROUND_OFFSET UNITYSDK_OFFSET(0x1CFFAB00)
#define CLIPPERLIB_CLIPPEROFFSET_DOSQUARE_OFFSET UNITYSDK_OFFSET(0x1CFFA830)
#define CLIPPERLIB_CLIPPEROFFSET_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1CFFB110)
#define CLIPPERLIB_CLIPPEROFFSET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CFFAE00)
#define CLIPPERLIB_CLIPPEROFFSET_FIXORIENTATIONS_OFFSET UNITYSDK_OFFSET(0x1CFF8B10)
#define CLIPPERLIB_CLIPPEROFFSET_GETUNITNORMAL_OFFSET UNITYSDK_OFFSET(0x1CFF8F00)
#define CLIPPERLIB_CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1CFF8330)
#define CLIPPERLIB_CLIPPEROFFSET_GET_MITERLIMIT_OFFSET UNITYSDK_OFFSET(0x1CFF8350)
#define CLIPPERLIB_CLIPPEROFFSET_OFFSETPOINT_OFFSET UNITYSDK_OFFSET(0x1CFFA400)
#define CLIPPERLIB_CLIPPEROFFSET_ROUND_OFFSET UNITYSDK_OFFSET(0x1CFF8530)
#define CLIPPERLIB_CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1CFF8340)
#define CLIPPERLIB_CLIPPEROFFSET_SET_MITERLIMIT_OFFSET UNITYSDK_OFFSET(0x1CFF8360)
#define CLIPPERLIB_CLIPPEROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8370)

namespace ClipperLib
{
	inline static constexpr unsigned int ClipperOffset_TypeDefinitionIndex = 32792;

	class ClipperOffset : public ::System::Object
	{
	public:
		// static const ::System::Double two_pi; // 0x0
		// static const ::System::Double def_arc_tolerance; // 0x0
		::System::Collections::Generic::List_1<::ClipperLib::DoublePoint>* m_normals; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_destPolys; // 0x18
		::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* m_destPoly; // 0x20
		::ClipperLib::PolyNode* m_polyNodes; // 0x28
		::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* m_srcPoly; // 0x30
		::System::Double m_delta; // 0x38
		::System::Double _MiterLimit_k__BackingField; // 0x40
		::System::Double _ArcTolerance_k__BackingField; // 0x48
		::System::Double m_sinA; // 0x50
		::ClipperLib::IntPoint m_lowest; // 0x58
		::System::Double m_StepsPerRad; // 0x68
		::System::Double m_miterLim; // 0x70
		::System::Double m_cos; // 0x78
		::System::Double m_sin; // 0x80

		::System::Void _ctor(::System::Double miterLimit, ::System::Double arcTolerance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET__CTOR_OFFSET))(this, miterLimit, arcTolerance);
		}

		::System::Double get_ArcTolerance()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET))(this);
		}

		::System::Void set_ArcTolerance(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET))(this, value);
		}

		::System::Double get_MiterLimit()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_GET_MITERLIMIT_OFFSET))(this);
		}

		::System::Void set_MiterLimit(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_SET_MITERLIMIT_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_CLEAR_OFFSET))(this);
		}

		static ::System::Int64 Round(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_ROUND_OFFSET))(value);
		}

		::System::Void AddPath(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path, ::ClipperLib::JoinType joinType, ::ClipperLib::EndType endType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::ClipperLib::JoinType, ::ClipperLib::EndType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_ADDPATH_OFFSET))(this, path, joinType, endType);
		}

		::System::Void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* paths, ::ClipperLib::JoinType joinType, ::ClipperLib::EndType endType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::ClipperLib::JoinType, ::ClipperLib::EndType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_ADDPATHS_OFFSET))(this, paths, joinType, endType);
		}

		::System::Void FixOrientations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_FIXORIENTATIONS_OFFSET))(this);
		}

		static ::ClipperLib::DoublePoint GetUnitNormal(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2)
		{
			return ((::ClipperLib::DoublePoint(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_GETUNITNORMAL_OFFSET))(pt1, pt2);
		}

		::System::Void DoOffset(::System::Double delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_DOOFFSET_OFFSET))(this, delta);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*& solution, ::System::Double delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*&, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_EXECUTE_OFFSET))(this, solution, delta);
		}

		::System::Void Execute_1(::ClipperLib::PolyTree*& solution, ::System::Double delta)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::PolyTree*&, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_EXECUTE_1_OFFSET))(this, solution, delta);
		}

		::System::Void OffsetPoint(::System::Int32 j, ::System::Int32& k, ::ClipperLib::JoinType jointype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::ClipperLib::JoinType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_OFFSETPOINT_OFFSET))(this, j, k, jointype);
		}

		::System::Void DoSquare(::System::Int32 j, ::System::Int32 k)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_DOSQUARE_OFFSET))(this, j, k);
		}

		::System::Void DoMiter(::System::Int32 j, ::System::Int32 k, ::System::Double r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_DOMITER_OFFSET))(this, j, k, r);
		}

		::System::Void DoRound(::System::Int32 j, ::System::Int32 k)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEROFFSET_DOROUND_OFFSET))(this, j, k);
		}
	};
}
