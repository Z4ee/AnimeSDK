#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_73E669FDA870C659.h"
#include "unitysdk/Enum_3_2897C046542BCFF9.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6395341EAB0CC976;
class Class_1_6D46C2B510FC0355;
class Class_1_97E659ED8D5D259C_1;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_DCC33F9C2BD5AF55;
template <typename T> class Class_1_1D2D64B0F11327DE;

#define CLASS_3_493953025FA316DA_METHOD_3_01D7F8AAF707AB6F_OFFSET UNITYSDK_OFFSET(0x1800A370)
#define CLASS_3_493953025FA316DA_METHOD_3_0CE5CE29F53FFD7E_OFFSET UNITYSDK_OFFSET(0x1800A0D0)
#define CLASS_3_493953025FA316DA_METHOD_3_1379872E747EC83A_OFFSET UNITYSDK_OFFSET(0x1800A210)
#define CLASS_3_493953025FA316DA_METHOD_3_184ADF865BD1D0B5_OFFSET UNITYSDK_OFFSET(0x18009BC0)
#define CLASS_3_493953025FA316DA_METHOD_3_18BA888AB214BADA_OFFSET UNITYSDK_OFFSET(0x18007EE0)
#define CLASS_3_493953025FA316DA_METHOD_3_20153B6C99FCBDB1_OFFSET UNITYSDK_OFFSET(0x18007430)
#define CLASS_3_493953025FA316DA_METHOD_3_38E82B4E9CF8D7EF_OFFSET UNITYSDK_OFFSET(0x180095F0)
#define CLASS_3_493953025FA316DA_METHOD_3_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x18009890)
#define CLASS_3_493953025FA316DA_METHOD_3_42442ACDBA147F77_OFFSET UNITYSDK_OFFSET(0x180072C0)
#define CLASS_3_493953025FA316DA_METHOD_3_4F938037E359EE93_OFFSET UNITYSDK_OFFSET(0x18009860)
#define CLASS_3_493953025FA316DA_METHOD_3_53A724C6F6103807_OFFSET UNITYSDK_OFFSET(0x180088B0)
#define CLASS_3_493953025FA316DA_METHOD_3_5D23A58AB77004DB_OFFSET UNITYSDK_OFFSET(0x180099E0)
#define CLASS_3_493953025FA316DA_METHOD_3_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x18007170)
#define CLASS_3_493953025FA316DA_METHOD_3_76DE950001A4D91E_OFFSET UNITYSDK_OFFSET(0x18008770)
#define CLASS_3_493953025FA316DA_METHOD_3_797FC46210E00750_OFFSET UNITYSDK_OFFSET(0x180099F0)
#define CLASS_3_493953025FA316DA_METHOD_3_80B88FE2B25716FD_OFFSET UNITYSDK_OFFSET(0x1800A200)
#define CLASS_3_493953025FA316DA_METHOD_3_8892F32B5EFDA66C_OFFSET UNITYSDK_OFFSET(0x18008510)
#define CLASS_3_493953025FA316DA_METHOD_3_931DE5FAA8599AD8_OFFSET UNITYSDK_OFFSET(0x180071D0)
#define CLASS_3_493953025FA316DA_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x180070F0)
#define CLASS_3_493953025FA316DA_METHOD_3_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0x18009EA0)
#define CLASS_3_493953025FA316DA_METHOD_3_B49FE419A193B732_OFFSET UNITYSDK_OFFSET(0x18008930)
#define CLASS_3_493953025FA316DA_METHOD_3_C1D40FCFBF511181_OFFSET UNITYSDK_OFFSET(0x18007FA0)
#define CLASS_3_493953025FA316DA_METHOD_3_D1E21355F02184C5_OFFSET UNITYSDK_OFFSET(0x1800A290)
#define CLASS_3_493953025FA316DA_METHOD_3_E23AE812476F4512_OFFSET UNITYSDK_OFFSET(0x18009670)
#define CLASS_3_493953025FA316DA_METHOD_3_E3BDA3DC2130C0CD_OFFSET UNITYSDK_OFFSET(0x18009420)
#define CLASS_3_493953025FA316DA_METHOD_3_E8727210A6BB9B6F_OFFSET UNITYSDK_OFFSET(0x18008FE0)
#define CLASS_3_493953025FA316DA_METHOD_3_F40A1039406BFB27_OFFSET UNITYSDK_OFFSET(0x18009FC0)
#define CLASS_3_493953025FA316DA_METHOD_3_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x180098A0)
#define CLASS_3_493953025FA316DA__CTOR_OFFSET UNITYSDK_OFFSET(0x180085F0)

inline static constexpr unsigned int Class_3_493953025FA316DA_TypeDefinitionIndex = 46357;

class Class_3_493953025FA316DA : public ::Class_2_73E669FDA870C659
{
public:
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_1; // 0x70
	::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>* Field_3_0; // 0x78
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_2; // 0x80
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_3; // 0x88
	::System::Int32 Field_3_4; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::Class_1_6395341EAB0CC976* Method_3_67013AED7A137AC2(::Class_1_6D46C2B510FC0355*& a1)
	{
		return ((::Class_1_6395341EAB0CC976*(*)(::PVOID, ::Class_1_6D46C2B510FC0355*&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_67013AED7A137AC2_OFFSET))(this, a1);
	}

	::System::Void Method_3_931DE5FAA8599AD8(::Struct_2_A1A45D8655270887 a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Enum_3_2897C046542BCFF9 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A1A45D8655270887, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_2897C046542BCFF9))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_931DE5FAA8599AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_42442ACDBA147F77(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_97E659ED8D5D259C_1* a2, ::Class_1_97E659ED8D5D259C_1* a3, ::Enum_3_2897C046542BCFF9 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*, ::Class_1_97E659ED8D5D259C_1*, ::Enum_3_2897C046542BCFF9))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_42442ACDBA147F77_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_3_18BA888AB214BADA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_18BA888AB214BADA_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Enum_3_41536F26CBEE8D4C>>* Method_3_C1D40FCFBF511181(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Double& a3, ::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>* a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Enum_3_41536F26CBEE8D4C>>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double&, ::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_C1D40FCFBF511181_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_20153B6C99FCBDB1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_20153B6C99FCBDB1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8892F32B5EFDA66C(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_8892F32B5EFDA66C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_76DE950001A4D91E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_76DE950001A4D91E_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_53A724C6F6103807(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_53A724C6F6103807_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B49FE419A193B732(::MoleMole::HollowChessboard::HollowCell a1, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_B49FE419A193B732_OFFSET))(a1, a2);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_E8727210A6BB9B6F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_E8727210A6BB9B6F_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_38E82B4E9CF8D7EF(::MoleMole::Vector2Int a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_38E82B4E9CF8D7EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E23AE812476F4512(::Struct_2_A1A45D8655270887 a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A1A45D8655270887, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_E23AE812476F4512_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F938037E359EE93(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_97E659ED8D5D259C_1* a2, ::Class_1_97E659ED8D5D259C_1* a3, ::Enum_3_2897C046542BCFF9 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*, ::Class_1_97E659ED8D5D259C_1*, ::Enum_3_2897C046542BCFF9))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_4F938037E359EE93_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_3_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Boolean Method_3_E3BDA3DC2130C0CD(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_E3BDA3DC2130C0CD_OFFSET))(this, a1);
	}

	::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>* Method_3_5D23A58AB77004DB()
	{
		return ((::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_5D23A58AB77004DB_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_3_797FC46210E00750()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_797FC46210E00750_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HollowCell>* Method_3_184ADF865BD1D0B5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_184ADF865BD1D0B5_OFFSET))(this);
	}

	::System::Void Method_3_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_A97853745B74DFF6_OFFSET))(this);
	}

	::System::Boolean Method_3_F40A1039406BFB27(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_F40A1039406BFB27_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_0CE5CE29F53FFD7E(::Struct_2_A1A45D8655270887 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::Struct_2_A1A45D8655270887))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_0CE5CE29F53FFD7E_OFFSET))(this, a1);
	}

	::Class_1_6395341EAB0CC976* Method_3_80B88FE2B25716FD(::Class_1_6D46C2B510FC0355*& a1)
	{
		return ((::Class_1_6395341EAB0CC976*(*)(::PVOID, ::Class_1_6D46C2B510FC0355*&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_80B88FE2B25716FD_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_1379872E747EC83A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_1379872E747EC83A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D1E21355F02184C5(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowCell& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_D1E21355F02184C5_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_01D7F8AAF707AB6F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_01D7F8AAF707AB6F_OFFSET))(this, a1);
	}
};
