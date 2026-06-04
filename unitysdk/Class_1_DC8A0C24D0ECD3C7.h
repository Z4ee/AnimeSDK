#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0864311C6F08EEE8.h"
#include "unitysdk/Struct_2_7DEC15197331BC9B.h"
#include "unitysdk/Struct_2_F6CF28892F8E6FF1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_71;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_2626D71FD1EE4F41;
class Class_1_49280AAF81D53F7B;
class Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2;
namespace RPG::GameCore { template <typename T> class UnmanagedStructArray_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DC8A0C24D0ECD3C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188CC0B0)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_02B68B82FF44DF2C_OFFSET UNITYSDK_OFFSET(0x188CC580)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_0D4E90EB2BAE52F1_OFFSET UNITYSDK_OFFSET(0x188CDA90)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_1DCE88F6D8787162_OFFSET UNITYSDK_OFFSET(0x188CCE50)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_1DF31017248D14E0_OFFSET UNITYSDK_OFFSET(0x188CC2B0)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_3ECE83CEE6E43F60_OFFSET UNITYSDK_OFFSET(0x188CD070)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x188C6910)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_65DEDF82214A60DE_OFFSET UNITYSDK_OFFSET(0x188CC430)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_87D87DF807B38FEA_OFFSET UNITYSDK_OFFSET(0x188CD8A0)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_8B22B8793DA332D5_OFFSET UNITYSDK_OFFSET(0x188CCE00)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x188C6850)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x188CCB50)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x188CC120)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_97DC0DC73F43C590_OFFSET UNITYSDK_OFFSET(0x188CC170)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_9CDC04708737375E_OFFSET UNITYSDK_OFFSET(0x188CCD20)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_A1C1658F78437BD8_OFFSET UNITYSDK_OFFSET(0x188CC680)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_B741B9730EBACFC0_OFFSET UNITYSDK_OFFSET(0x188CD700)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_BF6431F148CDB0D3_OFFSET UNITYSDK_OFFSET(0x188CC8E0)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C47B6761592C4423_OFFSET UNITYSDK_OFFSET(0x188CCF80)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x188CCD10)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C90B5126E6A14193_OFFSET UNITYSDK_OFFSET(0x188CD3D0)
#define CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_F879B5DF2C7EBED0_OFFSET UNITYSDK_OFFSET(0x188CCBC0)
#define CLASS_1_DC8A0C24D0ECD3C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x188CDB20)
#define CLASS_1_DC8A0C24D0ECD3C7__CTOR_OFFSET UNITYSDK_OFFSET(0x188C6720)

inline static constexpr unsigned int Class_1_DC8A0C24D0ECD3C7_TypeDefinitionIndex = 38481;

class Class_1_DC8A0C24D0ECD3C7 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC8A0C24D0ECD3C7_TypeDefinitionIndex)->GetStaticField(0x1A0D0);
	}
	static ::System::Object** StaticGet_Field_1_1()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC8A0C24D0ECD3C7_TypeDefinitionIndex)->GetStaticField(0x1A0D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x64; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x28; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x14; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_1_5; // 0x10
	::Class_1_49280AAF81D53F7B* Field_1_6; // 0x18
	::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2* Field_1_7; // 0x20
	::Il2CppArray<::System::Int32>* Field_1_8; // 0x28
	::Il2CppArray<::Struct_2_F6CF28892F8E6FF1>* Field_1_9; // 0x30
	::RPG::GameCore::UnmanagedStructArray_1<::Struct_2_0864311C6F08EEE8>* Field_1_10; // 0x38
	::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2* Field_1_11; // 0x40
	::Il2CppArray<::System::Boolean>* Field_1_12; // 0x48
	::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2* Field_1_13; // 0x50
	::Class_1_1B9BBF1B9A8CC806* Field_1_14; // 0x58
	::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2* Field_1_15; // 0x60
	::Il2CppArray<::Struct_2_7DEC15197331BC9B>* Field_1_16; // 0x68
	::Il2CppArray<::Class_1_2626D71FD1EE4F41*>* Field_1_17; // 0x70
	::System::Int32 Field_1_18; // 0x78
	::System::Boolean Field_1_19; // 0x7C
	::System::Boolean Field_1_20; // 0x7D
	::System::Boolean Field_1_21; // 0x7E
	::System::Int32 Field_1_22; // 0x80
	::System::Int32 Field_1_23; // 0x84
	::System::Int32 Field_1_24; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8F54650C0C7FD373(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_8F54650C0C7FD373_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_513F60E1612756A9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Struct_2_7DEC15197331BC9B Method_1_97DC0DC73F43C590(::System::Int32 a1)
	{
		return ((::Struct_2_7DEC15197331BC9B(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_97DC0DC73F43C590_OFFSET))(this, a1);
	}

	::System::String* Method_1_1DF31017248D14E0(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_1DF31017248D14E0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_65DEDF82214A60DE(::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2*& a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DC8A0C24D0ECD3C7_Class_1_4192656C7657C1B2*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_65DEDF82214A60DE_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_02B68B82FF44DF2C(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_02B68B82FF44DF2C_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_A1C1658F78437BD8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_A1C1658F78437BD8_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_F6CF28892F8E6FF1 Method_1_BF6431F148CDB0D3(::System::Int32 a1)
	{
		return ((::Struct_2_F6CF28892F8E6FF1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_BF6431F148CDB0D3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F879B5DF2C7EBED0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_F879B5DF2C7EBED0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_9CDC04708737375E(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_9CDC04708737375E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_8B22B8793DA332D5(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_8B22B8793DA332D5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1DCE88F6D8787162(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_1DCE88F6D8787162_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C47B6761592C4423(::System::String* a1, ::Struct_2_F6CF28892F8E6FF1& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_F6CF28892F8E6FF1&))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C47B6761592C4423_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3ECE83CEE6E43F60(::System::String* a1, ::Class_0_16E4307DCC419505_71* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_71*))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_3ECE83CEE6E43F60_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C90B5126E6A14193(::System::UInt64 a1, ::Class_0_16E4307DCC419505_71* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::Class_0_16E4307DCC419505_71*))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_C90B5126E6A14193_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_B741B9730EBACFC0(::System::String* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_B741B9730EBACFC0_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_87D87DF807B38FEA(::System::Int32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_87D87DF807B38FEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0D4E90EB2BAE52F1(::System::UInt64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_DC8A0C24D0ECD3C7_METHOD_1_0D4E90EB2BAE52F1_OFFSET))(this, a1);
	}
};
