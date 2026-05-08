#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_B0D8A511FD44B47A;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9159F6FE46573B6F_METHOD_1_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0xEA79190)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEA78A80)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xEA79560)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xEA78C80)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xEA78910)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_1FA0D90C97B5D636_1_OFFSET UNITYSDK_OFFSET(0xEA78970)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_1FA0D90C97B5D636_OFFSET UNITYSDK_OFFSET(0xEA78680)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xEA795D0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xEA78F00)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_3CED1CE924F67F53_OFFSET UNITYSDK_OFFSET(0xEA78AC0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_69F9657F273FCBE0_1_OFFSET UNITYSDK_OFFSET(0xEA78E20)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_69F9657F273FCBE0_OFFSET UNITYSDK_OFFSET(0xEA78690)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xEA78CF0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_1_OFFSET UNITYSDK_OFFSET(0xEA78840)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_2_OFFSET UNITYSDK_OFFSET(0xEA78FE0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_3_OFFSET UNITYSDK_OFFSET(0xEA790B0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_OFFSET UNITYSDK_OFFSET(0xEA78770)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_AA6695935BE1005A_OFFSET UNITYSDK_OFFSET(0xEA78BE0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_B5305074442AE4E2_OFFSET UNITYSDK_OFFSET(0xEA78510)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xEA791F0)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xEA78670)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xEA78980)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xEA78360)
#define CLASS_1_9159F6FE46573B6F_METHOD_1_FFDE30076B25F57A_OFFSET UNITYSDK_OFFSET(0xEA785C0)
#define CLASS_1_9159F6FE46573B6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEA781A0)
#define CLASS_1_9159F6FE46573B6F__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA784A0)
#define CLASS_1_9159F6FE46573B6F__CTOR_OFFSET UNITYSDK_OFFSET(0xEA78380)

inline static constexpr unsigned int Class_1_9159F6FE46573B6F_TypeDefinitionIndex = 76179;

class Class_1_9159F6FE46573B6F : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowCell* StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowChessboard::HollowCell*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9159F6FE46573B6F_TypeDefinitionIndex)->GetStaticField(0xC800);
	}
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_8; // 0x10
	::Class_1_B0D8A511FD44B47A* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x3C
	::System::Single Field_1_5; // 0x48
	::System::Boolean Field_1_3; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_B5305074442AE4E2(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Action_2<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Action_2<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_B5305074442AE4E2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_1FA0D90C97B5D636()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_1FA0D90C97B5D636_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_69F9657F273FCBE0()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_69F9657F273FCBE0_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_9324B4EEBA4AABA9()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_9324B4EEBA4AABA9_1()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_FFDE30076B25F57A(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_FFDE30076B25F57A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_1FA0D90C97B5D636_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_1FA0D90C97B5D636_1_OFFSET))(this);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_3CED1CE924F67F53()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_3CED1CE924F67F53_OFFSET))(this);
	}

	::System::Boolean Method_1_AA6695935BE1005A(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_AA6695935BE1005A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_69F9657F273FCBE0_1()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_69F9657F273FCBE0_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_9324B4EEBA4AABA9_2()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_2_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_9324B4EEBA4AABA9_3()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_9324B4EEBA4AABA9_3_OFFSET))(this);
	}

	::System::Void Method_1_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_0960CAEE01038065_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9159F6FE46573B6F_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}
};
