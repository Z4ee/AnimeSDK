#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_2C82D9815BE79838.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_F638703ACD0FA08E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16630850)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_08B7D15C48D5132C_OFFSET UNITYSDK_OFFSET(0x16630D60)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16630A70)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_8EE76E082BCB1BF4_OFFSET UNITYSDK_OFFSET(0x16630F40)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x16630BC0)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16630E00)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x16630BE0)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x16630F30)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16630BB0)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_DEC9361D6C2415BA_OFFSET UNITYSDK_OFFSET(0x16630E90)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16630F10)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x16630F20)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16630BD0)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F31B713748FE1B35_OFFSET UNITYSDK_OFFSET(0x16630C00)
#define CLASS_5_F638703ACD0FA08E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16630920)
#define CLASS_5_F638703ACD0FA08E__CCTOR_OFFSET UNITYSDK_OFFSET(0x166308A0)
#define CLASS_5_F638703ACD0FA08E__CTOR_OFFSET UNITYSDK_OFFSET(0x16630AB0)

inline static constexpr unsigned int Class_5_F638703ACD0FA08E_TypeDefinitionIndex = 56418;

class Class_5_F638703ACD0FA08E : public ::Class_4_2C82D9815BE79838<::Class_5_F638703ACD0FA08E*>
{
public:
	// static const ::System::Int32 Field_5_0 = 0x22E; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_5_5; // 0x58
	::System::Boolean Field_5_3; // 0x60
	::System::Boolean Field_5_7; // 0x61
	::System::Boolean Field_5_2; // 0x62
	::MoleMole::HollowChessboard::HollowCell Field_5_6; // 0x64
	::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> Field_5_4; // 0x70
	::MoleMole::HollowChessboard::HollowChessboardUID Field_5_1; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_5_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_5_F31B713748FE1B35(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F31B713748FE1B35_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_5_F638703ACD0FA08E* Method_5_DEC9361D6C2415BA()
	{
		return ((::Class_5_F638703ACD0FA08E*(*)())((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_DEC9361D6C2415BA_OFFSET))();
	}

	::System::Boolean Method_5_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_5_08B7D15C48D5132C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_08B7D15C48D5132C_OFFSET))(this, a1);
	}

	::System::Void Method_5_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_8EE76E082BCB1BF4()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_8EE76E082BCB1BF4_OFFSET))(this);
	}
};
