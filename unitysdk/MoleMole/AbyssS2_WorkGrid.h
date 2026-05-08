#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_WorkGrid_Line.h"
#include "unitysdk/MoleMole/AbyssS2_WorkGrid_V2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_WORKGRID_ADDLINE_1_OFFSET UNITYSDK_OFFSET(0x17424AF0)
#define MOLEMOLE_ABYSSS2_WORKGRID_ADDLINE_OFFSET UNITYSDK_OFFSET(0x174248C0)
#define MOLEMOLE_ABYSSS2_WORKGRID_DELLINE_OFFSET UNITYSDK_OFFSET(0x17424BA0)
#define MOLEMOLE_ABYSSS2_WORKGRID_GET_CURRENTLINES_OFFSET UNITYSDK_OFFSET(0x174241B0)
#define MOLEMOLE_ABYSSS2_WORKGRID_GET_ISSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17424200)
#define MOLEMOLE_ABYSSS2_WORKGRID_HASINTERSECT_1_OFFSET UNITYSDK_OFFSET(0x17424690)
#define MOLEMOLE_ABYSSS2_WORKGRID_HASINTERSECT_OFFSET UNITYSDK_OFFSET(0x17424400)
#define MOLEMOLE_ABYSSS2_WORKGRID_ISCOLLINEARANDOVERLAP_OFFSET UNITYSDK_OFFSET(0x174253F0)
#define MOLEMOLE_ABYSSS2_WORKGRID_ISINTERSECTED_OFFSET UNITYSDK_OFFSET(0x17425090)
#define MOLEMOLE_ABYSSS2_WORKGRID_ISLINESAME_OFFSET UNITYSDK_OFFSET(0x17424EA0)
#define MOLEMOLE_ABYSSS2_WORKGRID_ISPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x17425740)
#define MOLEMOLE_ABYSSS2_WORKGRID_LINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x17424620)
#define MOLEMOLE_ABYSSS2_WORKGRID_MARKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17424220)
#define MOLEMOLE_ABYSSS2_WORKGRID_NEGATIVE_OFFSET UNITYSDK_OFFSET(0x17425680)
#define MOLEMOLE_ABYSSS2_WORKGRID_ROLLBACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x174242C0)
#define MOLEMOLE_ABYSSS2_WORKGRID_SET_ISSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17424210)
#define MOLEMOLE_ABYSSS2_WORKGRID_SUBMITSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17424330)
#define MOLEMOLE_ABYSSS2_WORKGRID_VECTORPRODUCT_OFFSET UNITYSDK_OFFSET(0x174256E0)
#define MOLEMOLE_ABYSSS2_WORKGRID__CHECK_INTERSECT_OFFSET UNITYSDK_OFFSET(0x17424E00)
#define MOLEMOLE_ABYSSS2_WORKGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x174257E0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_WorkGrid_TypeDefinitionIndex = 82312;

	class AbyssS2_WorkGrid : public ::System::Object
	{
	public:
		// static const ::System::Double ZERO; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_WorkGrid_Line>* _snapShotLines; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_WorkGrid_Line>* _currentLines; // 0x18
		::System::Boolean _IsSnapshot_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_WorkGrid_Line>* get_CurrentLines()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::AbyssS2_WorkGrid_Line>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_GET_CURRENTLINES_OFFSET))(this);
		}

		::System::Boolean get_IsSnapshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_GET_ISSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_IsSnapshot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_SET_ISSNAPSHOT_OFFSET))(this, value);
		}

		::System::Void MarkSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_MARKSNAPSHOT_OFFSET))(this);
		}

		::System::Void RollbackSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ROLLBACKSNAPSHOT_OFFSET))(this);
		}

		::System::Void SubmitSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_SUBMITSNAPSHOT_OFFSET))(this);
		}

		::System::Boolean HasIntersect(::MoleMole::AbyssS2_WorkGrid_Line newLine)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_WorkGrid_Line))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_HASINTERSECT_OFFSET))(this, newLine);
		}

		::System::Boolean HasIntersect_1(::System::Int32 startID, ::System::Int32 stopID, ::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_HASINTERSECT_1_OFFSET))(this, startID, stopID, meta);
		}

		::System::Void AddLine(::System::Int32 startID, ::System::Int32 stopID, ::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ADDLINE_OFFSET))(this, startID, stopID, meta);
		}

		::System::Void AddLine_1(::MoleMole::AbyssS2_WorkGrid_Line newLine)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_WorkGrid_Line))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ADDLINE_1_OFFSET))(this, newLine);
		}

		::System::Void DelLine(::MoleMole::AbyssS2_WorkGrid_Line checkLine)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_WorkGrid_Line))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_DELLINE_OFFSET))(this, checkLine);
		}

		static ::System::Boolean LineIntersect(::MoleMole::AbyssS2_WorkGrid_Line l1, ::MoleMole::AbyssS2_WorkGrid_Line l2)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_Line, ::MoleMole::AbyssS2_WorkGrid_Line))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_LINEINTERSECT_OFFSET))(l1, l2);
		}

		static ::System::Boolean _Check_Intersect(::MoleMole::AbyssS2_WorkGrid_V2 p1, ::MoleMole::AbyssS2_WorkGrid_V2 q1, ::MoleMole::AbyssS2_WorkGrid_V2 p2, ::MoleMole::AbyssS2_WorkGrid_V2 q2)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID__CHECK_INTERSECT_OFFSET))(p1, q1, p2, q2);
		}

		static ::MoleMole::AbyssS2_WorkGrid_V2 Negative(::MoleMole::AbyssS2_WorkGrid_V2 vector)
		{
			return ((::MoleMole::AbyssS2_WorkGrid_V2(*)(::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_NEGATIVE_OFFSET))(vector);
		}

		static ::System::Double VectorProduct(::MoleMole::AbyssS2_WorkGrid_V2 vectorA, ::MoleMole::AbyssS2_WorkGrid_V2 vectorB)
		{
			return ((::System::Double(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_VECTORPRODUCT_OFFSET))(vectorA, vectorB);
		}

		static ::System::Boolean IsIntersected(::MoleMole::AbyssS2_WorkGrid_V2 A, ::MoleMole::AbyssS2_WorkGrid_V2 B, ::MoleMole::AbyssS2_WorkGrid_V2 C, ::MoleMole::AbyssS2_WorkGrid_V2 D)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ISINTERSECTED_OFFSET))(A, B, C, D);
		}

		static ::System::Boolean IsLineSame(::MoleMole::AbyssS2_WorkGrid_V2 A, ::MoleMole::AbyssS2_WorkGrid_V2 B, ::MoleMole::AbyssS2_WorkGrid_V2 C, ::MoleMole::AbyssS2_WorkGrid_V2 D)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ISLINESAME_OFFSET))(A, B, C, D);
		}

		static ::System::Boolean IsCollinearAndOverlap(::MoleMole::AbyssS2_WorkGrid_V2 A, ::MoleMole::AbyssS2_WorkGrid_V2 B, ::MoleMole::AbyssS2_WorkGrid_V2 C, ::MoleMole::AbyssS2_WorkGrid_V2 D)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ISCOLLINEARANDOVERLAP_OFFSET))(A, B, C, D);
		}

		static ::System::Boolean IsPointOnSegment(::MoleMole::AbyssS2_WorkGrid_V2 p, ::MoleMole::AbyssS2_WorkGrid_V2 q, ::MoleMole::AbyssS2_WorkGrid_V2 r)
		{
			return ((::System::Boolean(*)(::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2, ::MoleMole::AbyssS2_WorkGrid_V2))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_ISPOINTONSEGMENT_OFFSET))(p, q, r);
		}
	};
}
