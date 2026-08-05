#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Axial.h"
#include "unitysdk/HexagonalLib/Coordinates/Cubic.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/HexagonalLib/HexagonalGridType.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_1_OFFSET UNITYSDK_OFFSET(0xA7F590)
#define HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_2_OFFSET UNITYSDK_OFFSET(0xA7F5A0)
#define HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_3_OFFSET UNITYSDK_OFFSET(0xA7F5B0)
#define HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_OFFSET UNITYSDK_OFFSET(0xA7F580)
#define HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_1_OFFSET UNITYSDK_OFFSET(0xA7F4C0)
#define HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_2_OFFSET UNITYSDK_OFFSET(0x1EDB0A20)
#define HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_OFFSET UNITYSDK_OFFSET(0xA7F4B0)
#define HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_1_OFFSET UNITYSDK_OFFSET(0xA7EFC0)
#define HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_2_OFFSET UNITYSDK_OFFSET(0xA7EFD0)
#define HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_OFFSET UNITYSDK_OFFSET(0xA7EFB0)
#define HEXAGONALLIB_HEXAGONALGRID_GETMESHDATA_OFFSET UNITYSDK_OFFSET(0xA7F4E0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_1_OFFSET UNITYSDK_OFFSET(0xA7F400)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_2_OFFSET UNITYSDK_OFFSET(0xA7F410)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_OFFSET UNITYSDK_OFFSET(0xA7F3F0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUNDNONALLOC_OFFSET UNITYSDK_OFFSET(0xA7F370)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_1_OFFSET UNITYSDK_OFFSET(0xA7F320)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_2_OFFSET UNITYSDK_OFFSET(0xA7F330)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_OFFSET UNITYSDK_OFFSET(0xA7F310)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSOFFSETS_OFFSET UNITYSDK_OFFSET(0xA7F4D0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRINGNONALLOC_OFFSET UNITYSDK_OFFSET(0xA7F360)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_1_OFFSET UNITYSDK_OFFSET(0xA7F2D0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_2_OFFSET UNITYSDK_OFFSET(0xA7F2E0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_OFFSET UNITYSDK_OFFSET(0xA7F2C0)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_1_OFFSET UNITYSDK_OFFSET(0xA7F140)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_2_OFFSET UNITYSDK_OFFSET(0xA7F230)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA7F050)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_1_OFFSET UNITYSDK_OFFSET(0xA7F010)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_2_OFFSET UNITYSDK_OFFSET(0xA7F020)
#define HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_OFFSET UNITYSDK_OFFSET(0xA7F000)
#define HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_1_OFFSET UNITYSDK_OFFSET(0xA7F460)
#define HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_2_OFFSET UNITYSDK_OFFSET(0xA7F470)
#define HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_OFFSET UNITYSDK_OFFSET(0xA7F450)
#define HEXAGONALLIB_HEXAGONALGRID_GET_ANGLETOFIRSTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0xA7EB90)
#define HEXAGONALLIB_HEXAGONALGRID_GET_DESCRIBEDDIAMETER_OFFSET UNITYSDK_OFFSET(0xA7EB60)
#define HEXAGONALLIB_HEXAGONALGRID_GET_HORIZONTALOFFSET_OFFSET UNITYSDK_OFFSET(0xA7EB70)
#define HEXAGONALLIB_HEXAGONALGRID_GET_INSCRIBEDDIAMETER_OFFSET UNITYSDK_OFFSET(0xA7EB50)
#define HEXAGONALLIB_HEXAGONALGRID_GET_SIDE_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define HEXAGONALLIB_HEXAGONALGRID_GET_VERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0xA7EB80)
#define HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_1_OFFSET UNITYSDK_OFFSET(0xA7F270)
#define HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_2_OFFSET UNITYSDK_OFFSET(0xA7F280)
#define HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA7F260)
#define HEXAGONALLIB_HEXAGONALGRID_NORMALIZEINDEX_OFFSET UNITYSDK_OFFSET(0x1EDAECA0)
#define HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_1_OFFSET UNITYSDK_OFFSET(0xA7ED80)
#define HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_2_OFFSET UNITYSDK_OFFSET(0xA7ED90)
#define HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_3_OFFSET UNITYSDK_OFFSET(0xA7EDA0)
#define HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_OFFSET UNITYSDK_OFFSET(0xA7ED10)
#define HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_1_OFFSET UNITYSDK_OFFSET(0xA7EDD0)
#define HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_2_OFFSET UNITYSDK_OFFSET(0xA7EE60)
#define HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_3_OFFSET UNITYSDK_OFFSET(0xA7EE80)
#define HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_OFFSET UNITYSDK_OFFSET(0xA7EDB0)
#define HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_1_OFFSET UNITYSDK_OFFSET(0xA7EBF0)
#define HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_2_OFFSET UNITYSDK_OFFSET(0xA7EC00)
#define HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_3_OFFSET UNITYSDK_OFFSET(0xA7EC90)
#define HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_OFFSET UNITYSDK_OFFSET(0xA7EBC0)
#define HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_1_OFFSET UNITYSDK_OFFSET(0xA7EF70)
#define HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_2_OFFSET UNITYSDK_OFFSET(0xA7EF80)
#define HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_OFFSET UNITYSDK_OFFSET(0xA7EF10)
#define HEXAGONALLIB_HEXAGONALGRID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDB1890)
#define HEXAGONALLIB_HEXAGONALGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EBA0)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid_TypeDefinitionIndex = 29403;

	struct alignas(4) HexagonalGrid
	{
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Cubic>** StaticGet__cubicNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Cubic>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E20);
		}
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Axial>** StaticGet__axialNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Axial>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E28);
		}
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>** StaticGet__pointyOddNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E30);
		}
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>** StaticGet__flatOddNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E38);
		}
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>** StaticGet__pointyEvenNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E40);
		}
		static ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>** StaticGet__flatEvenNeighbors()
		{
			return (::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>**)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x24E48);
		}
		static ::System::Single* StaticGet_Sqrt3()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HexagonalGrid_TypeDefinitionIndex)->GetStaticField(0x7A00);
		}
		// static const ::System::Int32 EdgesCount = 0x6; // 0x0
		::System::Single InscribedRadius; // 0x10
		::System::Single DescribedRadius; // 0x14
		::HexagonalLib::HexagonalGridType Type; // 0x18

		::System::Void _ctor(::HexagonalLib::HexagonalGridType type, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::HexagonalLib::HexagonalGridType, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__CTOR_OFFSET))(this, type, radius);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__CCTOR_OFFSET))();
		}

		::System::Single get_Side()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_SIDE_OFFSET))(this);
		}

		::System::Single get_InscribedDiameter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_INSCRIBEDDIAMETER_OFFSET))(this);
		}

		::System::Single get_DescribedDiameter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_DESCRIBEDDIAMETER_OFFSET))(this);
		}

		::System::Single get_HorizontalOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_HORIZONTALOFFSET_OFFSET))(this);
		}

		::System::Single get_VerticalOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_VERTICALOFFSET_OFFSET))(this);
		}

		::System::Single get_AngleToFirstNeighbor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GET_ANGLETOFIRSTNEIGHBOR_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Offset ToOffset(::HexagonalLib::Coordinates::Cubic coord)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_OFFSET))(this, coord);
		}

		::HexagonalLib::Coordinates::Offset ToOffset_1(::HexagonalLib::Coordinates::Axial axial)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_1_OFFSET))(this, axial);
		}

		::HexagonalLib::Coordinates::Offset ToOffset_2(::System::Single x, ::System::Single y)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_2_OFFSET))(this, x, y);
		}

		/*
		::HexagonalLib::Coordinates::Offset ToOffset_3(::System::ValueTuple_2<::System::Single, ::System::Single> point)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOOFFSET_3_OFFSET))(this, point);
		}
		*/

		::HexagonalLib::Coordinates::Axial ToAxial(::HexagonalLib::Coordinates::Cubic cubic)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_OFFSET))(this, cubic);
		}

		::HexagonalLib::Coordinates::Axial ToAxial_1(::HexagonalLib::Coordinates::Offset offset)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_1_OFFSET))(this, offset);
		}

		::HexagonalLib::Coordinates::Axial ToAxial_2(::System::Single x, ::System::Single y)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_2_OFFSET))(this, x, y);
		}

		/*
		::HexagonalLib::Coordinates::Axial ToAxial_3(::System::ValueTuple_2<::System::Single, ::System::Single> point)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOAXIAL_3_OFFSET))(this, point);
		}
		*/

		::HexagonalLib::Coordinates::Cubic ToCubic(::HexagonalLib::Coordinates::Offset coord)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_OFFSET))(this, coord);
		}

		::HexagonalLib::Coordinates::Cubic ToCubic_1(::HexagonalLib::Coordinates::Axial axial)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_1_OFFSET))(this, axial);
		}

		::HexagonalLib::Coordinates::Cubic ToCubic_2(::System::Single x, ::System::Single y)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_2_OFFSET))(this, x, y);
		}

		/*
		::HexagonalLib::Coordinates::Cubic ToCubic_3(::System::ValueTuple_2<::System::Single, ::System::Single> point)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOCUBIC_3_OFFSET))(this, point);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> ToPoint2(::HexagonalLib::Coordinates::Offset coord)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_OFFSET))(this, coord);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> ToPoint2_1(::HexagonalLib::Coordinates::Axial coord)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_1_OFFSET))(this, coord);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> ToPoint2_2(::HexagonalLib::Coordinates::Cubic coord)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_TOPOINT2_2_OFFSET))(this, coord);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetCornerPoint(::HexagonalLib::Coordinates::Offset coord, ::System::Int32 edge)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_OFFSET))(this, coord, edge);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetCornerPoint_1(::HexagonalLib::Coordinates::Axial coord, ::System::Int32 edge)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_1_OFFSET))(this, coord, edge);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetCornerPoint_2(::HexagonalLib::Coordinates::Cubic coord, ::System::Int32 edge)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETCORNERPOINT_2_OFFSET))(this, coord, edge);
		}
		*/

		::HexagonalLib::Coordinates::Offset GetNeighbor(::HexagonalLib::Coordinates::Offset coord, ::System::Int32 neighborIndex)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_OFFSET))(this, coord, neighborIndex);
		}

		::HexagonalLib::Coordinates::Axial GetNeighbor_1(::HexagonalLib::Coordinates::Axial coord, ::System::Int32 neighborIndex)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_1_OFFSET))(this, coord, neighborIndex);
		}

		::HexagonalLib::Coordinates::Cubic GetNeighbor_2(::HexagonalLib::Coordinates::Cubic coord, ::System::Int32 neighborIndex)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBOR_2_OFFSET))(this, coord, neighborIndex);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>* GetNeighbors(::HexagonalLib::Coordinates::Offset hex)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_OFFSET))(this, hex);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>* GetNeighbors_1(::HexagonalLib::Coordinates::Axial hex)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>*(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_1_OFFSET))(this, hex);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>* GetNeighbors_2(::HexagonalLib::Coordinates::Cubic hex)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>*(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORS_2_OFFSET))(this, hex);
		}

		::System::Boolean IsNeighbors(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_OFFSET))(this, coord1, coord2);
		}

		::System::Boolean IsNeighbors_1(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_1_OFFSET))(this, coord1, coord2);
		}

		::System::Boolean IsNeighbors_2(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_ISNEIGHBORS_2_OFFSET))(this, coord1, coord2);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>* GetNeighborsRing(::HexagonalLib::Coordinates::Offset center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_OFFSET))(this, center, radius);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>* GetNeighborsRing_1(::HexagonalLib::Coordinates::Axial center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>*(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_1_OFFSET))(this, center, radius);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>* GetNeighborsRing_2(::HexagonalLib::Coordinates::Cubic center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>*(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRING_2_OFFSET))(this, center, radius);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>* GetNeighborsAround(::HexagonalLib::Coordinates::Offset center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_OFFSET))(this, center, radius);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>* GetNeighborsAround_1(::HexagonalLib::Coordinates::Axial center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>*(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_1_OFFSET))(this, center, radius);
		}

		::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>* GetNeighborsAround_2(::HexagonalLib::Coordinates::Cubic center, ::System::Int32 radius)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>*(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUND_2_OFFSET))(this, center, radius);
		}

		::System::Void GetNeighborsRingNonAlloc(::HexagonalLib::Coordinates::Offset center, ::System::Int32 radius, ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>* results)
		{
			return ((::System::Void(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32, ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSRINGNONALLOC_OFFSET))(this, center, radius, results);
		}

		::System::Void GetNeighborsAroundNonAlloc(::HexagonalLib::Coordinates::Offset center, ::System::Int32 radius, ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>* results)
		{
			return ((::System::Void(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::System::Int32, ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSAROUNDNONALLOC_OFFSET))(this, center, radius, results);
		}

		::System::Byte GetNeighborIndex(::HexagonalLib::Coordinates::Offset center, ::HexagonalLib::Coordinates::Offset neighbor)
		{
			return ((::System::Byte(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_OFFSET))(this, center, neighbor);
		}

		::System::Byte GetNeighborIndex_1(::HexagonalLib::Coordinates::Axial center, ::HexagonalLib::Coordinates::Axial neighbor)
		{
			return ((::System::Byte(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_1_OFFSET))(this, center, neighbor);
		}

		::System::Byte GetNeighborIndex_2(::HexagonalLib::Coordinates::Cubic center, ::HexagonalLib::Coordinates::Cubic neighbor)
		{
			return ((::System::Byte(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORINDEX_2_OFFSET))(this, center, neighbor);
		}

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetPointBetweenTwoNeighbours(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_OFFSET))(this, coord1, coord2);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetPointBetweenTwoNeighbours_1(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_1_OFFSET))(this, coord1, coord2);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GetPointBetweenTwoNeighbours_2(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETPOINTBETWEENTWONEIGHBOURS_2_OFFSET))(this, coord1, coord2);
		}
		*/

		::System::Int32 CubeDistance(::HexagonalLib::Coordinates::Offset h1, ::HexagonalLib::Coordinates::Offset h2)
		{
			return ((::System::Int32(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_OFFSET))(this, h1, h2);
		}

		::System::Int32 CubeDistance_1(::HexagonalLib::Coordinates::Axial h1, ::HexagonalLib::Coordinates::Axial h2)
		{
			return ((::System::Int32(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_1_OFFSET))(this, h1, h2);
		}

		static ::System::Int32 CubeDistance_2(::HexagonalLib::Coordinates::Cubic h1, ::HexagonalLib::Coordinates::Cubic h2)
		{
			return ((::System::Int32(*)(::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CUBEDISTANCE_2_OFFSET))(h1, h2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HexagonalLib::Coordinates::Offset>* GetNeighborsOffsets(::HexagonalLib::Coordinates::Offset coord)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETNEIGHBORSOFFSETS_OFFSET))(this, coord);
		}

		static ::System::Int32 NormalizeIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_NORMALIZEINDEX_OFFSET))(index);
		}

		/*
		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetMeshData(::System::Int32 hexesCount, ::System::Int32 subdivide)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_GETMESHDATA_OFFSET))(this, hexesCount, subdivide);
		}
		*/

		/*
		::System::Void CreateMesh(::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>* hexes, ::System::Int32 subdivide, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>* setVertex, ::System::Action_2<::System::Int32, ::System::Int32>* setIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>*, ::System::Int32, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_OFFSET))(this, hexes, subdivide, setVertex, setIndex);
		}
		*/

		/*
		::System::Void CreateMesh_1(::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>* hexes, ::System::Int32 subdivide, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>* setVertex, ::System::Action_2<::System::Int32, ::System::Int32>* setIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Axial>*, ::System::Int32, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_1_OFFSET))(this, hexes, subdivide, setVertex, setIndex);
		}
		*/

		/*
		::System::Void CreateMesh_2(::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>* hexes, ::System::Int32 subdivide, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>* setVertex, ::System::Action_2<::System::Int32, ::System::Int32>* setIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Cubic>*, ::System::Int32, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_2_OFFSET))(this, hexes, subdivide, setVertex, setIndex);
		}
		*/

		/*
		::System::Void CreateMesh_3(::System::Int32 subdivide, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>* setVertex, ::System::Action_2<::System::Int32, ::System::Int32>* setIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID_CREATEMESH_3_OFFSET))(this, subdivide, setVertex, setIndex);
		}
		*/
	};
}
