#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_03DE57D25AB27AE9.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_F638703ACD0FA08E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB18EB70)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_08B7D15C48D5132C_OFFSET UNITYSDK_OFFSET(0xB18F070)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB18ED90)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_8EE76E082BCB1BF4_OFFSET UNITYSDK_OFFSET(0xB18F020)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0xB18F010)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB18F280)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0xB18EFF0)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xB18F270)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xB18EF50)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_DEC9361D6C2415BA_OFFSET UNITYSDK_OFFSET(0xB18EF70)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB18F060)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB18F470)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB18EF60)
#define CLASS_5_F638703ACD0FA08E_METHOD_5_F31B713748FE1B35_OFFSET UNITYSDK_OFFSET(0xB18F310)
#define CLASS_5_F638703ACD0FA08E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB18EC40)
#define CLASS_5_F638703ACD0FA08E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB18EBC0)
#define CLASS_5_F638703ACD0FA08E__CTOR_OFFSET UNITYSDK_OFFSET(0xB18EDE0)

inline static constexpr unsigned int Class_5_F638703ACD0FA08E_TypeDefinitionIndex = 89088;

class Class_5_F638703ACD0FA08E : public ::Class_4_03DE57D25AB27AE9<::Class_5_F638703ACD0FA08E*>
{
public:
	// static const ::System::Int32 Field_5_0 = 0x22E; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_5_11; // 0x58
	::MoleMole::HollowChessboard::HollowChessboardUID Field_5_7; // 0x60
	::MoleMole::HollowChessboard::HollowCell Field_5_10; // 0x68
	::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> Field_5_4; // 0x74
	::System::Boolean Field_5_6; // 0x84
	::System::Boolean Field_5_5; // 0x85
	::System::Boolean Field_5_9; // 0x86

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

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_5_F638703ACD0FA08E* Method_5_DEC9361D6C2415BA()
	{
		return ((::Class_5_F638703ACD0FA08E*(*)())((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_DEC9361D6C2415BA_OFFSET))();
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_5_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_8EE76E082BCB1BF4()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_8EE76E082BCB1BF4_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_5_08B7D15C48D5132C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_08B7D15C48D5132C_OFFSET))(this, a1);
	}

	::System::Void Method_5_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_5_F31B713748FE1B35(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F31B713748FE1B35_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F638703ACD0FA08E_METHOD_5_F0088C88851A7DFB_2_OFFSET))(this);
	}
};
