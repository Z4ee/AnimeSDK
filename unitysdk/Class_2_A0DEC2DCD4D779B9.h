#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleSimulatePhase.h"
#include "unitysdk/Struct_2_99EBAB41CE8725CD.h"

class Class_0_16E4307DCC419505_229;
class Class_1_32ED9F60AC82E5A0_2;
class Class_1_32ED9F60AC82E5A0_3;
class Class_1_43BD383C98B4C0C5_67;
class Class_1_5BE136E515AF9A61;
class Class_1_AC00AF6C29094205;
class Class_1_B0DE39839E6C6513;
class Class_1_C9DFE5EE7107C629_8;
class Class_1_E0231B607CD65186_4;
class Class_1_F3CA30716D4FAF92_10;
class Class_2_6D25D6E36F5AF8D2;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_08BA3E1AB7FD3480_OFFSET UNITYSDK_OFFSET(0x1C96DCE0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_1_OFFSET UNITYSDK_OFFSET(0x1C962E30)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_2_OFFSET UNITYSDK_OFFSET(0x1C96F0E0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1C965CB0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x1C96EFA0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x1C96F2F0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1C96E0A0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_1_OFFSET UNITYSDK_OFFSET(0x1C96E100)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_2_OFFSET UNITYSDK_OFFSET(0x1C96F000)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_OFFSET UNITYSDK_OFFSET(0x1C96DBE0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_7CDB06A5A53EE3C9_OFFSET UNITYSDK_OFFSET(0x1C96F270)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_BCD7CCE219E9C8AF_OFFSET UNITYSDK_OFFSET(0x1C96DEF0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_CAD058DA669D519E_OFFSET UNITYSDK_OFFSET(0x1C96E200)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_D0C36C8A1B6B9D8A_OFFSET UNITYSDK_OFFSET(0x1C96E800)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C96E1E0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1C96F140)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C96DCC0)
#define CLASS_2_A0DEC2DCD4D779B9_METHOD_2_FF028C31884BFA3B_OFFSET UNITYSDK_OFFSET(0x1C96F160)
#define CLASS_2_A0DEC2DCD4D779B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F350)

inline static constexpr unsigned int Class_2_A0DEC2DCD4D779B9_TypeDefinitionIndex = 42594;

class Class_2_A0DEC2DCD4D779B9 : public ::Entitas::Context_1<::Class_2_6D25D6E36F5AF8D2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9__CTOR_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_673DE15674E18423()
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_OFFSET))(this);
	}

	::Class_1_B0DE39839E6C6513* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_B0DE39839E6C6513*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_08BA3E1AB7FD3480(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_08BA3E1AB7FD3480_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_BCD7CCE219E9C8AF(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_BCD7CCE219E9C8AF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_673DE15674E18423_1()
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_1_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_67* Method_2_1561BFA77991A03A_1()
	{
		return ((::Class_1_43BD383C98B4C0C5_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_CAD058DA669D519E(::System::Boolean a1, ::Enum_3_63BCB6C405BA8A1D_2 a2, ::Enum_3_63BCB6C405BA8A1D_2 a3, ::Class_1_32ED9F60AC82E5A0_2* a4, ::Class_0_16E4307DCC419505_229* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_8* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_8* a33, ::Class_1_F3CA30716D4FAF92_10* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID, ::System::Boolean, ::Enum_3_63BCB6C405BA8A1D_2, ::Enum_3_63BCB6C405BA8A1D_2, ::Class_1_32ED9F60AC82E5A0_2*, ::Class_0_16E4307DCC419505_229*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_8*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_8*, ::Class_1_F3CA30716D4FAF92_10*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_CAD058DA669D519E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
	}

	::System::Void Method_2_D0C36C8A1B6B9D8A(::System::Boolean a1, ::Enum_3_63BCB6C405BA8A1D_2 a2, ::Enum_3_63BCB6C405BA8A1D_2 a3, ::Class_1_32ED9F60AC82E5A0_2* a4, ::Class_0_16E4307DCC419505_229* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_8* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_8* a33, ::Class_1_F3CA30716D4FAF92_10* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63BCB6C405BA8A1D_2, ::Enum_3_63BCB6C405BA8A1D_2, ::Class_1_32ED9F60AC82E5A0_2*, ::Class_0_16E4307DCC419505_229*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_8*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_8*, ::Class_1_F3CA30716D4FAF92_10*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_D0C36C8A1B6B9D8A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
	}

	::System::Void Method_2_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_1_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_673DE15674E18423_2()
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_673DE15674E18423_2_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_4* Method_2_1561BFA77991A03A_2()
	{
		return ((::Class_1_E0231B607CD65186_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_1561BFA77991A03A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_2_6D25D6E36F5AF8D2* Method_2_FF028C31884BFA3B(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_FF028C31884BFA3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7CDB06A5A53EE3C9(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_7CDB06A5A53EE3C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9_METHOD_2_455E250D679F9642_2_OFFSET))(this);
	}
};
