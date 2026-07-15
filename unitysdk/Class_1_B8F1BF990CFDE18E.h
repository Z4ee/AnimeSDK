#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE.h"
#include "unitysdk/Class_1_B8F1BF990CFDE18E_Struct_2_91876C72EBA39F54.h"
#include "unitysdk/Class_1_B8F1BF990CFDE18E_Struct_2_E83ED0C253F4ABB3.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/Struct_2_468F1D800AD1758C.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_95D2CEDB3F77EDE5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class Stream; }
template <typename T1, typename T2> class Class_1_E7E32423D479125F;

#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_10B237D86218EFEB_OFFSET UNITYSDK_OFFSET(0x1D259440)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1D2575A0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_1497530EE33986BA_OFFSET UNITYSDK_OFFSET(0x1D25B6D0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_18069411BFDB408C_1_OFFSET UNITYSDK_OFFSET(0x1D259400)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_18069411BFDB408C_OFFSET UNITYSDK_OFFSET(0x1D259340)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1D256BE0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_19E11676A9CF9FC1_OFFSET UNITYSDK_OFFSET(0x1D25BCE0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_2719D1D1C8283788_OFFSET UNITYSDK_OFFSET(0x1D258800)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_2B40C7FBEA97E7BE_1_OFFSET UNITYSDK_OFFSET(0x1D259370)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_2B40C7FBEA97E7BE_OFFSET UNITYSDK_OFFSET(0x1D258770)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_37963224BBAD7FF6_OFFSET UNITYSDK_OFFSET(0x1D259C50)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_3BD0063BA87EE097_OFFSET UNITYSDK_OFFSET(0x1D257640)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_3C13F8AB1254E490_OFFSET UNITYSDK_OFFSET(0x1D2578B0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_403F7F5580AB6B8E_OFFSET UNITYSDK_OFFSET(0x1D2581B0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_41227539288E5252_OFFSET UNITYSDK_OFFSET(0x1D25CF20)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_46BACFC748937AE2_OFFSET UNITYSDK_OFFSET(0x1D25B8B0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_4C2F8EA2F4D471CF_OFFSET UNITYSDK_OFFSET(0x1D25ACF0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_5699EFAEB01085F1_OFFSET UNITYSDK_OFFSET(0x1D257BF0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_5700ADC78226639E_OFFSET UNITYSDK_OFFSET(0x1D258CD0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_5DF1F4D788BF6689_OFFSET UNITYSDK_OFFSET(0x1D259010)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_5F6EAA890998B5BD_OFFSET UNITYSDK_OFFSET(0x1D25C810)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_67B006FC83DAE559_OFFSET UNITYSDK_OFFSET(0x1D259750)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_6EF2FB0A5532F8AC_OFFSET UNITYSDK_OFFSET(0x1D259310)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_715B8C5744FEE796_OFFSET UNITYSDK_OFFSET(0x1D2597E0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_74C1B177CB9DB8DD_OFFSET UNITYSDK_OFFSET(0x1D25AF30)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_7A2CA1696E0AFBDD_OFFSET UNITYSDK_OFFSET(0x1D25A5C0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x1D257200)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_88A8B72270D45A85_1_OFFSET UNITYSDK_OFFSET(0x1D258F80)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_88A8B72270D45A85_OFFSET UNITYSDK_OFFSET(0x1D258480)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_909CEE0254AD1181_OFFSET UNITYSDK_OFFSET(0x1D258CC0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_9E7376B9B00FD36B_OFFSET UNITYSDK_OFFSET(0x1D257F30)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_A1C25D4C269C24B6_OFFSET UNITYSDK_OFFSET(0x1D25C590)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_A6F8DE3C0D00B91A_OFFSET UNITYSDK_OFFSET(0x1D259CE0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_A7FFD33541F21E86_OFFSET UNITYSDK_OFFSET(0x1D25CAC0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_B24074D400959843_OFFSET UNITYSDK_OFFSET(0x1D2575B0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_B432CC8BA0AE92D4_OFFSET UNITYSDK_OFFSET(0x1D25B3F0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_B9CF74572C0214E0_OFFSET UNITYSDK_OFFSET(0x1D255E70)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_C19B53EF4A87C33B_OFFSET UNITYSDK_OFFSET(0x1D258510)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_C62836B6520DE75A_OFFSET UNITYSDK_OFFSET(0x1D257CE0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1D2575E0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_D04AD0E4CFFF698C_OFFSET UNITYSDK_OFFSET(0x1D258230)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_D8B14336B3D0A7C6_OFFSET UNITYSDK_OFFSET(0x1D259420)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_DCE1D6ABE8581446_OFFSET UNITYSDK_OFFSET(0x1D2565A0)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1D25CC90)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x1D25CB20)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_EC64F1C91B9296BF_OFFSET UNITYSDK_OFFSET(0x1D25A340)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_EE3CC5C3723ED0E7_OFFSET UNITYSDK_OFFSET(0x1D257A80)
#define CLASS_1_B8F1BF990CFDE18E_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1D2575C0)
#define CLASS_1_B8F1BF990CFDE18E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25CFF0)
#define CLASS_1_B8F1BF990CFDE18E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D257230)

inline static constexpr unsigned int Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex = 41253;

class Class_1_B8F1BF990CFDE18E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x1050);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x1058);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x920);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x924);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x928);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8F1BF990CFDE18E_TypeDefinitionIndex)->GetStaticField(0x92C);
	}
	// static const ::System::Int64 Field_1_6 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1000; // 0x0
	::System::String* Field_1_8; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B8F1BF990CFDE18E_Struct_2_91876C72EBA39F54>* Field_1_10; // 0x20
	::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE>>* Field_1_11; // 0x28
	::Class_1_E7E32423D479125F<::System::Int32, ::System::Int32>* Field_1_12; // 0x30
	::Class_1_95D2CEDB3F77EDE5* Field_1_13; // 0x38
	::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE>* Field_1_14; // 0x40
	::Class_1_B8F1BF990CFDE18E_Struct_2_E83ED0C253F4ABB3 Field_1_15; // 0x48
	::System::Int32 Field_1_16; // 0x60
	::System::Int32 Field_1_17; // 0x64
	::System::Int32 Field_1_18; // 0x68
	::GameFramework::FileSystem::FileSystemAccess Field_1_19; // 0x6C

	::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_95D2CEDB3F77EDE5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_95D2CEDB3F77EDE5*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::GameFramework::FileSystem::FileSystemAccess Method_1_B24074D400959843()
	{
		return ((::GameFramework::FileSystem::FileSystemAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_B24074D400959843_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::Class_1_B8F1BF990CFDE18E* Method_1_B9CF74572C0214E0(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_95D2CEDB3F77EDE5* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::Class_1_B8F1BF990CFDE18E*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_95D2CEDB3F77EDE5*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_B9CF74572C0214E0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_B8F1BF990CFDE18E* Method_1_DCE1D6ABE8581446(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_95D2CEDB3F77EDE5* a3)
	{
		return ((::Class_1_B8F1BF990CFDE18E*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_95D2CEDB3F77EDE5*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_DCE1D6ABE8581446_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::Struct_2_468F1D800AD1758C Method_1_EE3CC5C3723ED0E7(::System::Int64 a1)
	{
		return ((::Struct_2_468F1D800AD1758C(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_EE3CC5C3723ED0E7_OFFSET))(this, a1);
	}

	::Il2CppArray<::Struct_2_468F1D800AD1758C>* Method_1_C62836B6520DE75A()
	{
		return ((::Il2CppArray<::Struct_2_468F1D800AD1758C>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_C62836B6520DE75A_OFFSET))(this);
	}

	::System::Void Method_1_9E7376B9B00FD36B(::System::Collections::Generic::List_1<::Struct_2_468F1D800AD1758C>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_468F1D800AD1758C>*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_9E7376B9B00FD36B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_403F7F5580AB6B8E(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_403F7F5580AB6B8E_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_D04AD0E4CFFF698C(::System::Int64 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_D04AD0E4CFFF698C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_88A8B72270D45A85(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_88A8B72270D45A85_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_2B40C7FBEA97E7BE(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_2B40C7FBEA97E7BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C19B53EF4A87C33B(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_C19B53EF4A87C33B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2719D1D1C8283788(::System::Int64 a1, ::System::IO::Stream* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_2719D1D1C8283788_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_909CEE0254AD1181(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_909CEE0254AD1181_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_5700ADC78226639E(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_5700ADC78226639E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_88A8B72270D45A85_1(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_88A8B72270D45A85_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6EF2FB0A5532F8AC(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_6EF2FB0A5532F8AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_18069411BFDB408C(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_18069411BFDB408C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2B40C7FBEA97E7BE_1(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_2B40C7FBEA97E7BE_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_18069411BFDB408C_1(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_18069411BFDB408C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_5DF1F4D788BF6689(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_5DF1F4D788BF6689_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_D8B14336B3D0A7C6(::System::Int64 a1, ::System::IO::Stream* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_D8B14336B3D0A7C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_10B237D86218EFEB(::System::Int64 a1, ::System::Int32 a2, ::System::IO::Stream* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_10B237D86218EFEB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_67B006FC83DAE559(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_67B006FC83DAE559_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_37963224BBAD7FF6(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_37963224BBAD7FF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_715B8C5744FEE796(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_715B8C5744FEE796_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7A2CA1696E0AFBDD(::System::Int64 a1, ::System::IO::Stream* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_7A2CA1696E0AFBDD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4C2F8EA2F4D471CF(::System::Int64 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_4C2F8EA2F4D471CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_74C1B177CB9DB8DD(::System::Int64 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_74C1B177CB9DB8DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B432CC8BA0AE92D4(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_B432CC8BA0AE92D4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_46BACFC748937AE2(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_46BACFC748937AE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC64F1C91B9296BF(::System::Int64 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_EC64F1C91B9296BF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_19E11676A9CF9FC1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_19E11676A9CF9FC1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::System::Int32 Method_1_A6F8DE3C0D00B91A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_A6F8DE3C0D00B91A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5F6EAA890998B5BD(::System::Int64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_5F6EAA890998B5BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_A1C25D4C269C24B6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_A1C25D4C269C24B6_OFFSET))(this, a1);
	}

	::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE Method_1_3C13F8AB1254E490(::System::Int32 a1)
	{
		return ((::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_3C13F8AB1254E490_OFFSET))(this, a1);
	}

	::System::Void Method_1_1497530EE33986BA(::System::Int32 a1, ::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_B8F1BF990CFDE18E_Struct_2_6132FF2D200012BE))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_1497530EE33986BA_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_3BD0063BA87EE097(::Class_1_B8F1BF990CFDE18E* a1)
	{
		return ((::System::Void(*)(::Class_1_B8F1BF990CFDE18E*))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_3BD0063BA87EE097_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_41227539288E5252(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_41227539288E5252_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A7FFD33541F21E86(::System::Int64 a1)
	{
		return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_A7FFD33541F21E86_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5699EFAEB01085F1(::System::Int32 a1)
	{
		return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8F1BF990CFDE18E_METHOD_1_5699EFAEB01085F1_OFFSET))(a1);
	}
};
