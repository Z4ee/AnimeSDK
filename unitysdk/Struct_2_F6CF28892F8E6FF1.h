#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/Struct_2_84E8631222D334C4.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_64;
namespace System { class String; }

#define STRUCT_2_F6CF28892F8E6FF1_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x68F0)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x22AEE10)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x22AEE00)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_884A0AA8A175ACAA_OFFSET UNITYSDK_OFFSET(0x22AEB90)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8D94453293C1F210_OFFSET UNITYSDK_OFFSET(0x22AEDF0)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x22AEC30)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E130)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x22AED10)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x22AED80)
#define STRUCT_2_F6CF28892F8E6FF1_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD250)
#define STRUCT_2_F6CF28892F8E6FF1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AEEB0)
#define STRUCT_2_F6CF28892F8E6FF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B1F040)
#define STRUCT_2_F6CF28892F8E6FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x22AECD0)
#define STRUCT_2_F6CF28892F8E6FF1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AEEC0)

inline static constexpr unsigned int Struct_2_F6CF28892F8E6FF1_TypeDefinitionIndex = 37742;

struct alignas(8) Struct_2_F6CF28892F8E6FF1
{
	static ::Struct_2_F6CF28892F8E6FF1* StaticGet_Field_2_5()
	{
		return (::Struct_2_F6CF28892F8E6FF1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F6CF28892F8E6FF1_TypeDefinitionIndex)->GetStaticField(0xD210);
	}
	// static const ::System::UInt16 Field_2_8 = 0x8000; // 0x0
	// static const ::System::UInt16 Field_2_9 = 0x7FFF; // 0x0
	::Class_0_16E4307DCC419505_64* Field_2_0; // 0x10
	::System::Int32 _BlockIndex_k__BackingField; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::System::UInt32 Field_2_3; // 0x20
	::RPG::Client::AssetsStaticFlag Field_2_4; // 0x24
	::Struct_2_84E8631222D334C4 Field_2_6; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::System::UInt16 Field_2_10; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_64* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::AssetsStaticFlag a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_64*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::AssetsStaticFlag, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1__CCTOR_OFFSET))();
	}

	::System::Int32 get_BlockIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_SET_BLOCKINDEX_OFFSET))(this, value);
	}

	::System::UInt64 Method_2_884A0AA8A175ACAA()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_884A0AA8A175ACAA_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag Method_2_8D94453293C1F210()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8D94453293C1F210_OFFSET))(this);
	}

	::System::String* Method_2_8279976FE67B5972()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8279976FE67B5972_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
