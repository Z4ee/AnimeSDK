#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02A5EBAC971E3DBB_Struct_2_04EE0A3341480476_7.h"
#include "unitysdk/Enum_3_3835791E5DA3DB29.h"
#include "unitysdk/Enum_3_4D920E0D40284B49.h"
#include "unitysdk/Enum_3_8C5B5B31A78ED626.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

class Class_1_4502605F4267F6F1;
class Class_1_71A741F5D691F2DB;
class Class_1_7AC8164CC7B8672E;
class Class_1_E49DB4EA3354E910;
class Class_3_8C1391B81D00FEB6;
class Class_4_5B32B6042C9283CB;
class Class_4_7B5A65E248106C68;
class Class_5_F638703ACD0FA08E;
namespace System { class String; }

#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_03FA1B35347EBB2B_1_OFFSET UNITYSDK_OFFSET(0x14A8D8C0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_03FA1B35347EBB2B_OFFSET UNITYSDK_OFFSET(0x14A8B380)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_075C3CB0611E13E8_OFFSET UNITYSDK_OFFSET(0x14A8B420)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_1238F98003F9A69A_OFFSET UNITYSDK_OFFSET(0x14A8C890)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_14C1FEB54A3EE5AB_OFFSET UNITYSDK_OFFSET(0x14A8D130)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_16D11216AF5E34C0_OFFSET UNITYSDK_OFFSET(0x14A8A6C0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_2DD1408874C85E04_OFFSET UNITYSDK_OFFSET(0x14A8AA60)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x14A8C020)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_3C60F74A43B74EF1_OFFSET UNITYSDK_OFFSET(0x14A8A9F0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_429B134DFFA34BEC_OFFSET UNITYSDK_OFFSET(0x14A8C620)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_46D99C1A71DDB72B_OFFSET UNITYSDK_OFFSET(0x14A89C70)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_477437DD4EF9815F_OFFSET UNITYSDK_OFFSET(0x14A8D5D0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_53673345732CA593_OFFSET UNITYSDK_OFFSET(0x14A8BDB0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_53C37F4C7BF2443D_OFFSET UNITYSDK_OFFSET(0x14A8A670)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_6CDEA343DA344C99_OFFSET UNITYSDK_OFFSET(0x14A8A210)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_6D0F25C331DA4355_OFFSET UNITYSDK_OFFSET(0x14A8A870)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_6D19BB7866DAB074_OFFSET UNITYSDK_OFFSET(0x14A8B060)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_711F40BE3EF62937_OFFSET UNITYSDK_OFFSET(0x14A8AF20)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_7F7F639AF62B0739_OFFSET UNITYSDK_OFFSET(0x14A8C460)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_82EEEF54ED466607_OFFSET UNITYSDK_OFFSET(0x14A8D340)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_8779A3F5AD742936_1_OFFSET UNITYSDK_OFFSET(0x14A8D840)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x14A8C850)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_A1A66C52124B5F40_OFFSET UNITYSDK_OFFSET(0x14A8D9C0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_A3F065FAA989C629_OFFSET UNITYSDK_OFFSET(0x14A8A3B0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_A7F1269B14875A0F_OFFSET UNITYSDK_OFFSET(0x14A8DBB0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_B7FC3F5949C406A2_OFFSET UNITYSDK_OFFSET(0x14A8CB60)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x14A8D2E0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_BA2F36BCA25934DA_OFFSET UNITYSDK_OFFSET(0x14A8D0A0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_C5084F943915D3CD_OFFSET UNITYSDK_OFFSET(0x14A8B230)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_C8D870D28259E938_OFFSET UNITYSDK_OFFSET(0x14A8D960)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_CB9DC1483D7A2305_OFFSET UNITYSDK_OFFSET(0x14A8AFA0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_CF4F1E4B35340B21_OFFSET UNITYSDK_OFFSET(0x14A8D400)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_E052B6CEE9B8820B_OFFSET UNITYSDK_OFFSET(0x14A8A050)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_F0170AF6D4B7040B_OFFSET UNITYSDK_OFFSET(0x14A8B5F0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_F3003B7FCCC25664_OFFSET UNITYSDK_OFFSET(0x14A89EB0)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x14A8D880)
#define CLASS_1_02A5EBAC971E3DBB_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x14A8AEE0)

inline static constexpr unsigned int Class_1_02A5EBAC971E3DBB_TypeDefinitionIndex = 81387;

class Class_1_02A5EBAC971E3DBB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02A5EBAC971E3DBB_TypeDefinitionIndex)->GetStaticField(0xE940);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02A5EBAC971E3DBB_TypeDefinitionIndex)->GetStaticField(0xE944);
	}

	static ::System::Void Method_1_46D99C1A71DDB72B(::Class_4_5B32B6042C9283CB* a1, ::Enum_3_8C5B5B31A78ED626 a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Enum_3_8C5B5B31A78ED626))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_46D99C1A71DDB72B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3003B7FCCC25664(::Struct_2_90E529DB4DCB014F a1, ::Class_1_4502605F4267F6F1* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Struct_2_90E529DB4DCB014F, ::Class_1_4502605F4267F6F1*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_F3003B7FCCC25664_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A3F065FAA989C629(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_E49DB4EA3354E910* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_E49DB4EA3354E910*))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_A3F065FAA989C629_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_53C37F4C7BF2443D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_53C37F4C7BF2443D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D0F25C331DA4355(::System::UInt32 a1, ::Class_1_4502605F4267F6F1* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_1_4502605F4267F6F1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_6D0F25C331DA4355_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_3C60F74A43B74EF1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Int32(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_3C60F74A43B74EF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DD1408874C85E04(::Class_4_7B5A65E248106C68* a1, ::Class_1_7AC8164CC7B8672E* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*, ::Class_1_7AC8164CC7B8672E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_2DD1408874C85E04_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::Enum_3_4D920E0D40284B49 Method_1_711F40BE3EF62937(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Enum_3_4D920E0D40284B49(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_711F40BE3EF62937_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D19BB7866DAB074(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_6D19BB7866DAB074_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C5084F943915D3CD(::System::UInt32 a1, ::MoleMole::HollowChessboard::HollowCell& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_C5084F943915D3CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03FA1B35347EBB2B(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_03FA1B35347EBB2B_OFFSET))(a1, a2);
	}

	static ::Class_1_4502605F4267F6F1* Method_1_075C3CB0611E13E8(::System::UInt32 a1)
	{
		return ((::Class_1_4502605F4267F6F1*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_075C3CB0611E13E8_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_1_F0170AF6D4B7040B(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_F0170AF6D4B7040B_OFFSET))(a1);
	}

	static ::System::Void Method_1_53673345732CA593(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_53673345732CA593_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_3BCF0226A6CDC13B_OFFSET))();
	}

	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	static ::System::Void Method_1_1238F98003F9A69A(::System::UInt32 a1, ::System::Int32 a2, ::Enum_3_8C5B5B31A78ED626 a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::Enum_3_8C5B5B31A78ED626))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_1238F98003F9A69A_OFFSET))(a1, a2, a3);
	}

	static ::Class_4_5B32B6042C9283CB* Method_1_16D11216AF5E34C0(::System::UInt32 a1)
	{
		return ((::Class_4_5B32B6042C9283CB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_16D11216AF5E34C0_OFFSET))(a1);
	}

	static ::Struct_2_0AFACF733846A6F9 Method_1_CB9DC1483D7A2305(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Struct_2_0AFACF733846A6F9(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_CB9DC1483D7A2305_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7FC3F5949C406A2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Enum_3_3835791E5DA3DB29 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::Enum_3_3835791E5DA3DB29, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_B7FC3F5949C406A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6CDEA343DA344C99(::Class_4_5B32B6042C9283CB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_6CDEA343DA344C99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA2F36BCA25934DA(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_BA2F36BCA25934DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_14C1FEB54A3EE5AB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_14C1FEB54A3EE5AB_OFFSET))(a1);
	}

	static ::Class_1_7AC8164CC7B8672E* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_7AC8164CC7B8672E*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	static ::System::Void Method_1_82EEEF54ED466607(::System::UInt32 a1, ::Class_1_02A5EBAC971E3DBB_Struct_2_04EE0A3341480476_7& a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_1_02A5EBAC971E3DBB_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_82EEEF54ED466607_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF4F1E4B35340B21(::Class_1_71A741F5D691F2DB* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_1_71A741F5D691F2DB*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_CF4F1E4B35340B21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_477437DD4EF9815F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_477437DD4EF9815F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_429B134DFFA34BEC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_429B134DFFA34BEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E052B6CEE9B8820B(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_E052B6CEE9B8820B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8779A3F5AD742936_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_8779A3F5AD742936_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))();
	}

	static ::System::Void Method_1_7F7F639AF62B0739(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_7F7F639AF62B0739_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03FA1B35347EBB2B_1(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_03FA1B35347EBB2B_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C8D870D28259E938(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Single(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_C8D870D28259E938_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_A1A66C52124B5F40(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_A1A66C52124B5F40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7F1269B14875A0F(::Class_3_8C1391B81D00FEB6* a1)
	{
		return ((::System::Void(*)(::Class_3_8C1391B81D00FEB6*))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_METHOD_1_A7F1269B14875A0F_OFFSET))(a1);
	}
};
