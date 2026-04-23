#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE.h"
#include "unitysdk/Class_1_47084BF3E44176C5_Struct_2_91876C72EBA39F54.h"
#include "unitysdk/Class_1_47084BF3E44176C5_Struct_2_E83ED0C253F4ABB3.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/Struct_2_468F1D800AD1758C.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_6C719BA8F85845D8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class Stream; }
template <typename T1, typename T2> class Class_1_E7E32423D479125F;

#define CLASS_1_47084BF3E44176C5_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x181912E0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1818BF90)
#define CLASS_1_47084BF3E44176C5_METHOD_1_13C243C29B3ACB86_OFFSET UNITYSDK_OFFSET(0x1818D270)
#define CLASS_1_47084BF3E44176C5_METHOD_1_18069411BFDB408C_1_OFFSET UNITYSDK_OFFSET(0x1818E4B0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_18069411BFDB408C_OFFSET UNITYSDK_OFFSET(0x1818E3F0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_2B40C7FBEA97E7BE_1_OFFSET UNITYSDK_OFFSET(0x1818E420)
#define CLASS_1_47084BF3E44176C5_METHOD_1_2B40C7FBEA97E7BE_OFFSET UNITYSDK_OFFSET(0x1818DB20)
#define CLASS_1_47084BF3E44176C5_METHOD_1_2C44A37372C112E0_OFFSET UNITYSDK_OFFSET(0x1818D010)
#define CLASS_1_47084BF3E44176C5_METHOD_1_37963224BBAD7FF6_OFFSET UNITYSDK_OFFSET(0x1818EAD0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_3BD0063BA87EE097_OFFSET UNITYSDK_OFFSET(0x1818C3F0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_3C13F8AB1254E490_OFFSET UNITYSDK_OFFSET(0x1818CF10)
#define CLASS_1_47084BF3E44176C5_METHOD_1_403F7F5580AB6B8E_OFFSET UNITYSDK_OFFSET(0x1818D710)
#define CLASS_1_47084BF3E44176C5_METHOD_1_41227539288E5252_OFFSET UNITYSDK_OFFSET(0x181914A0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_41FFF6B83D3E1FDC_OFFSET UNITYSDK_OFFSET(0x18190D90)
#define CLASS_1_47084BF3E44176C5_METHOD_1_4C2F8EA2F4D471CF_OFFSET UNITYSDK_OFFSET(0x1818F7D0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_5699EFAEB01085F1_OFFSET UNITYSDK_OFFSET(0x1818D180)
#define CLASS_1_47084BF3E44176C5_METHOD_1_5F22BCB1D9B47751_OFFSET UNITYSDK_OFFSET(0x18190120)
#define CLASS_1_47084BF3E44176C5_METHOD_1_651C5E8DBB0C9D34_OFFSET UNITYSDK_OFFSET(0x1818E4F0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_67B006FC83DAE559_OFFSET UNITYSDK_OFFSET(0x1818E730)
#define CLASS_1_47084BF3E44176C5_METHOD_1_6E7BB3980BE12B4B_OFFSET UNITYSDK_OFFSET(0x1818D4D0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_6EF2FB0A5532F8AC_OFFSET UNITYSDK_OFFSET(0x1818E3C0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_74C1B177CB9DB8DD_OFFSET UNITYSDK_OFFSET(0x1818F9B0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x1818BBB0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_88A8B72270D45A85_1_OFFSET UNITYSDK_OFFSET(0x1818E110)
#define CLASS_1_47084BF3E44176C5_METHOD_1_88A8B72270D45A85_OFFSET UNITYSDK_OFFSET(0x1818D900)
#define CLASS_1_47084BF3E44176C5_METHOD_1_89EF36A3CDFFE7E0_OFFSET UNITYSDK_OFFSET(0x1818DF30)
#define CLASS_1_47084BF3E44176C5_METHOD_1_8DBF9906B811C81A_OFFSET UNITYSDK_OFFSET(0x1818F110)
#define CLASS_1_47084BF3E44176C5_METHOD_1_9C8530C299F115D2_OFFSET UNITYSDK_OFFSET(0x1818D990)
#define CLASS_1_47084BF3E44176C5_METHOD_1_9D051B6840128F4C_OFFSET UNITYSDK_OFFSET(0x18190010)
#define CLASS_1_47084BF3E44176C5_METHOD_1_A480F4DC74B5E476_OFFSET UNITYSDK_OFFSET(0x1818F3A0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_A6F8DE3C0D00B91A_OFFSET UNITYSDK_OFFSET(0x1818EB60)
#define CLASS_1_47084BF3E44176C5_METHOD_1_A7FFD33541F21E86_OFFSET UNITYSDK_OFFSET(0x18191160)
#define CLASS_1_47084BF3E44176C5_METHOD_1_B24074D400959843_OFFSET UNITYSDK_OFFSET(0x1818BFA0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_B3909D954FBE615A_OFFSET UNITYSDK_OFFSET(0x1818E7C0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_B432CC8BA0AE92D4_OFFSET UNITYSDK_OFFSET(0x1818FDA0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1818C4A0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_B9CF74572C0214E0_OFFSET UNITYSDK_OFFSET(0x1818BFE0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1818BFD0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_CAFC80BFA1F570D5_OFFSET UNITYSDK_OFFSET(0x1818D790)
#define CLASS_1_47084BF3E44176C5_METHOD_1_D7EF7E3FC8BCADC7_OFFSET UNITYSDK_OFFSET(0x1818C5F0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_D8B14336B3D0A7C6_OFFSET UNITYSDK_OFFSET(0x1818E4D0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_DA8E9EAF5BD8C17F_OFFSET UNITYSDK_OFFSET(0x1818DF20)
#define CLASS_1_47084BF3E44176C5_METHOD_1_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x181911C0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_EE6690584BBED967_OFFSET UNITYSDK_OFFSET(0x18190F10)
#define CLASS_1_47084BF3E44176C5_METHOD_1_F01A05FC4EF7FE98_OFFSET UNITYSDK_OFFSET(0x18190550)
#define CLASS_1_47084BF3E44176C5_METHOD_1_F11069CEF0C69085_OFFSET UNITYSDK_OFFSET(0x1818E1A0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1818BFB0)
#define CLASS_1_47084BF3E44176C5_METHOD_1_F66743A008DB4308_OFFSET UNITYSDK_OFFSET(0x1818DBB0)
#define CLASS_1_47084BF3E44176C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x18191570)
#define CLASS_1_47084BF3E44176C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1818BBE0)

inline static constexpr unsigned int Class_1_47084BF3E44176C5_TypeDefinitionIndex = 39615;

class Class_1_47084BF3E44176C5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0x13C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0x13C8);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0xFE0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0xFE4);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0xFE8);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47084BF3E44176C5_TypeDefinitionIndex)->GetStaticField(0xFEC);
	}
	// static const ::System::Int64 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1000; // 0x0
	::System::Collections::Generic::List_1<::Class_1_47084BF3E44176C5_Struct_2_91876C72EBA39F54>* Field_1_12; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE>* Field_1_14; // 0x18
	::Class_1_E7E32423D479125F<::System::Int32, ::System::Int32>* Field_1_13; // 0x20
	::System::String* Field_1_8; // 0x28
	::Class_1_6C719BA8F85845D8* Field_1_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_11; // 0x38
	::Class_1_47084BF3E44176C5_Struct_2_E83ED0C253F4ABB3 Field_1_16; // 0x40
	::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE>>* Field_1_15; // 0x58
	::System::Int32 Field_1_17; // 0x60
	::System::Int32 Field_1_19; // 0x64
	::GameFramework::FileSystem::FileSystemAccess Field_1_9; // 0x68
	::System::Int32 Field_1_18; // 0x6C

	::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_6C719BA8F85845D8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_6C719BA8F85845D8*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::GameFramework::FileSystem::FileSystemAccess Method_1_B24074D400959843()
	{
		return ((::GameFramework::FileSystem::FileSystemAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_B24074D400959843_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::Class_1_47084BF3E44176C5* Method_1_B9CF74572C0214E0(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_6C719BA8F85845D8* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::Class_1_47084BF3E44176C5*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_6C719BA8F85845D8*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_B9CF74572C0214E0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_47084BF3E44176C5* Method_1_D7EF7E3FC8BCADC7(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::Class_1_6C719BA8F85845D8* a3)
	{
		return ((::Class_1_47084BF3E44176C5*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::Class_1_6C719BA8F85845D8*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_D7EF7E3FC8BCADC7_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::Struct_2_468F1D800AD1758C Method_1_2C44A37372C112E0(::System::Int64 a1)
	{
		return ((::Struct_2_468F1D800AD1758C(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_2C44A37372C112E0_OFFSET))(this, a1);
	}

	::Il2CppArray<::Struct_2_468F1D800AD1758C>* Method_1_13C243C29B3ACB86()
	{
		return ((::Il2CppArray<::Struct_2_468F1D800AD1758C>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_13C243C29B3ACB86_OFFSET))(this);
	}

	::System::Void Method_1_6E7BB3980BE12B4B(::System::Collections::Generic::List_1<::Struct_2_468F1D800AD1758C>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_468F1D800AD1758C>*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_6E7BB3980BE12B4B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_403F7F5580AB6B8E(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_403F7F5580AB6B8E_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_CAFC80BFA1F570D5(::System::Int64 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_CAFC80BFA1F570D5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_88A8B72270D45A85(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_88A8B72270D45A85_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_2B40C7FBEA97E7BE(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_2B40C7FBEA97E7BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_9C8530C299F115D2(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_9C8530C299F115D2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F66743A008DB4308(::System::Int64 a1, ::System::IO::Stream* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_F66743A008DB4308_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_DA8E9EAF5BD8C17F(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_DA8E9EAF5BD8C17F_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_89EF36A3CDFFE7E0(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_89EF36A3CDFFE7E0_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_88A8B72270D45A85_1(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_88A8B72270D45A85_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6EF2FB0A5532F8AC(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_6EF2FB0A5532F8AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_18069411BFDB408C(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_18069411BFDB408C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2B40C7FBEA97E7BE_1(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_2B40C7FBEA97E7BE_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_18069411BFDB408C_1(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_18069411BFDB408C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F11069CEF0C69085(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_F11069CEF0C69085_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_D8B14336B3D0A7C6(::System::Int64 a1, ::System::IO::Stream* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_D8B14336B3D0A7C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_651C5E8DBB0C9D34(::System::Int64 a1, ::System::Int32 a2, ::System::IO::Stream* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_651C5E8DBB0C9D34_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_67B006FC83DAE559(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_67B006FC83DAE559_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_37963224BBAD7FF6(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_37963224BBAD7FF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B3909D954FBE615A(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_B3909D954FBE615A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_A480F4DC74B5E476(::System::Int64 a1, ::System::IO::Stream* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_A480F4DC74B5E476_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4C2F8EA2F4D471CF(::System::Int64 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_4C2F8EA2F4D471CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_74C1B177CB9DB8DD(::System::Int64 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_74C1B177CB9DB8DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B432CC8BA0AE92D4(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_B432CC8BA0AE92D4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5F22BCB1D9B47751(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_5F22BCB1D9B47751_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DBF9906B811C81A(::System::Int64 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_8DBF9906B811C81A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F01A05FC4EF7FE98(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_F01A05FC4EF7FE98_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::System::Int32 Method_1_A6F8DE3C0D00B91A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_A6F8DE3C0D00B91A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EE6690584BBED967(::System::Int64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_EE6690584BBED967_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_1_41FFF6B83D3E1FDC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_41FFF6B83D3E1FDC_OFFSET))(this, a1);
	}

	::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE Method_1_3C13F8AB1254E490(::System::Int32 a1)
	{
		return ((::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_3C13F8AB1254E490_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D051B6840128F4C(::System::Int32 a1, ::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_47084BF3E44176C5_Struct_2_6132FF2D200012BE))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_9D051B6840128F4C_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_3BD0063BA87EE097(::Class_1_47084BF3E44176C5* a1)
	{
		return ((::System::Void(*)(::Class_1_47084BF3E44176C5*))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_3BD0063BA87EE097_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_41227539288E5252(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_41227539288E5252_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A7FFD33541F21E86(::System::Int64 a1)
	{
		return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_A7FFD33541F21E86_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5699EFAEB01085F1(::System::Int32 a1)
	{
		return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47084BF3E44176C5_METHOD_1_5699EFAEB01085F1_OFFSET))(a1);
	}
};
