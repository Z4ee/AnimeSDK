#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29EEA995F8FD7C71.h"
#include "unitysdk/MoleMole/ChessStateMachine/ParamsType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_0_16E4307DCC419505_238;
class Class_0_16E4307DCC419505_445;
class Class_1_43BD383C98B4C0C5_31;
class Class_1_6C9FA1DA785001A9;
class Class_2_4E3F5BE8BDF41F9D;
class Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE;
class Class_3_40E291F340E2D9F9;
class Class_4_AC6D98911872E0CE;
namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EF10ADA6B197DAB5_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xECC7CD0)
#define CLASS_2_EF10ADA6B197DAB5_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0xECC7D10)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_07B048FC77A405EB_OFFSET UNITYSDK_OFFSET(0xECC8D00)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_094C4406B0618952_OFFSET UNITYSDK_OFFSET(0xECC9040)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B34812DBF10A7BC_OFFSET UNITYSDK_OFFSET(0xECCA250)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B99165AD48B7DD4_OFFSET UNITYSDK_OFFSET(0xECC8EB0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_1D4D1480BAE4D7D8_OFFSET UNITYSDK_OFFSET(0xECC8DE0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xECCA0A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_24A04D197D439210_OFFSET UNITYSDK_OFFSET(0xECC9A00)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0xECC9A60)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_53D3B67BDFEDB97D_OFFSET UNITYSDK_OFFSET(0xECC9350)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5B01EB01B927ABCC_OFFSET UNITYSDK_OFFSET(0xECCA140)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xECC89A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5D48C30011B902DB_1_OFFSET UNITYSDK_OFFSET(0xECCA3F0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5D48C30011B902DB_OFFSET UNITYSDK_OFFSET(0xECCA1A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5DC897723DD64CDE_OFFSET UNITYSDK_OFFSET(0xECCA0B0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_7BCD013666249C9A_OFFSET UNITYSDK_OFFSET(0xECC9220)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xECC87B0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xECCA3E0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_95C5D515D9C060E5_OFFSET UNITYSDK_OFFSET(0xECC89B0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_9E6E4BC04F8DA2C5_OFFSET UNITYSDK_OFFSET(0xECC9F80)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0xECC94B0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_ABE279FE70322A94_OFFSET UNITYSDK_OFFSET(0xECC8B50)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_B2D9A06B1C69B33C_OFFSET UNITYSDK_OFFSET(0xECC9E40)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_B8A33CFAD0D8B395_OFFSET UNITYSDK_OFFSET(0xECC9B80)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xECCA470)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xECCA220)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xECCA240)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xECC9340)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0xECC9440)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_D3F4A9917F7B37AE_OFFSET UNITYSDK_OFFSET(0xECC8740)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_DBFBD874171F243A_OFFSET UNITYSDK_OFFSET(0xECC9670)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xECC8EA0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xECC94A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xECCA230)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xECC7DE0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FB7AD93CD839677A_OFFSET UNITYSDK_OFFSET(0xECC7DF0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_1_OFFSET UNITYSDK_OFFSET(0xECC9CA0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0xECC97F0)
#define CLASS_2_EF10ADA6B197DAB5__CCTOR_OFFSET UNITYSDK_OFFSET(0xECC7DD0)
#define CLASS_2_EF10ADA6B197DAB5__CTOR_OFFSET UNITYSDK_OFFSET(0xECC7BA0)

inline static constexpr unsigned int Class_2_EF10ADA6B197DAB5_TypeDefinitionIndex = 79767;

class Class_2_EF10ADA6B197DAB5 : public ::Class_1_29EEA995F8FD7C71
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF10ADA6B197DAB5_TypeDefinitionIndex)->GetStaticField(0x12040);
	}
	::Class_1_43BD383C98B4C0C5_31* Field_2_13; // 0x48
	::System::Action* Field_2_1; // 0x50
	::Class_1_6C9FA1DA785001A9* Field_2_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_10; // 0x60
	::Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE* Field_2_14; // 0x68
	::System::Collections::Generic::List_1<::Class_2_4E3F5BE8BDF41F9D*>* Field_2_6; // 0x70
	::Class_0_16E4307DCC419505_238* Field_2_15; // 0x78
	::Class_4_AC6D98911872E0CE* Field_2_8; // 0x80
	::System::Boolean Field_2_19; // 0x88
	::System::Boolean Field_2_5; // 0x89
	::System::Boolean Field_2_4; // 0x8A
	::System::Boolean Field_2_12; // 0x8B
	::System::Boolean Field_2_11; // 0x8C
	::System::Int32 Field_2_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5__CCTOR_OFFSET))();
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_DESTRUCTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_FB7AD93CD839677A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*& a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Collections::Generic::List_1<::System::Int32>*& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FB7AD93CD839677A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_238* Method_2_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_238*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_2_95C5D515D9C060E5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_95C5D515D9C060E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE279FE70322A94(::System::String* a1, ::System::String* a2, ::Class_3_40E291F340E2D9F9* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_3_40E291F340E2D9F9*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_ABE279FE70322A94_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_07B048FC77A405EB(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_07B048FC77A405EB_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_1D4D1480BAE4D7D8(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_1D4D1480BAE4D7D8_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_0B99165AD48B7DD4(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B99165AD48B7DD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7BCD013666249C9A(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_7BCD013666249C9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_53D3B67BDFEDB97D(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_53D3B67BDFEDB97D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_445*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_A7836646989A4215_OFFSET))(this);
	}

	::System::Boolean Method_2_DBFBD874171F243A(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_DBFBD874171F243A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_24A04D197D439210(::Class_0_16E4307DCC419505_238* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_238*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_24A04D197D439210_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_2F809989C4EE835D_OFFSET))(this, a1, a2);
	}

	::Class_4_AC6D98911872E0CE* Method_2_B8A33CFAD0D8B395()
	{
		return ((::Class_4_AC6D98911872E0CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_B8A33CFAD0D8B395_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_1_OFFSET))(this);
	}

	::System::Void Method_2_B2D9A06B1C69B33C(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_B2D9A06B1C69B33C_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_4E3F5BE8BDF41F9D* Method_2_094C4406B0618952(::System::String* a1)
	{
		return ((::Class_2_4E3F5BE8BDF41F9D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_094C4406B0618952_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3F4A9917F7B37AE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_D3F4A9917F7B37AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E6E4BC04F8DA2C5(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_9E6E4BC04F8DA2C5_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_31* Method_2_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_5DC897723DD64CDE(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5DC897723DD64CDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B01EB01B927ABCC(::Class_4_AC6D98911872E0CE* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5B01EB01B927ABCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5D48C30011B902DB(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5D48C30011B902DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B34812DBF10A7BC(::System::Int32 a1, ::System::Boolean a2, ::MoleMole::ChessStateMachine::ParamsType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MoleMole::ChessStateMachine::ParamsType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B34812DBF10A7BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_43BD383C98B4C0C5_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D48C30011B902DB_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5D48C30011B902DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
