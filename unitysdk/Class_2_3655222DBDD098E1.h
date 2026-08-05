#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"

class Class_2_14986121AA61AD99;
class Class_3_783F0B97013CC576;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3655222DBDD098E1_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1505B040)
#define CLASS_2_3655222DBDD098E1_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1505AE20)
#define CLASS_2_3655222DBDD098E1_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1505ABF0)
#define CLASS_2_3655222DBDD098E1_METHOD_2_418B038717020A3A_OFFSET UNITYSDK_OFFSET(0x1505B090)
#define CLASS_2_3655222DBDD098E1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1505AD90)
#define CLASS_2_3655222DBDD098E1_METHOD_2_C976FC3C8221DA6B_OFFSET UNITYSDK_OFFSET(0x1505AF00)
#define CLASS_2_3655222DBDD098E1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1505AFB0)
#define CLASS_2_3655222DBDD098E1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1505AE60)
#define CLASS_2_3655222DBDD098E1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1505A830)
#define CLASS_2_3655222DBDD098E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1505AD10)
#define CLASS_2_3655222DBDD098E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1505AD80)

inline static constexpr unsigned int Class_2_3655222DBDD098E1_TypeDefinitionIndex = 69214;

class Class_2_3655222DBDD098E1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_10 = 0xD8; // 0x0
	::System::String* Field_2_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* Field_2_11; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::Int32 Field_2_6; // 0x38
	::Enum_3_5D65F42F0EEB3310 Field_2_0; // 0x3C
	::System::Single Field_2_5; // 0x40
	::System::Boolean Field_2_1; // 0x44
	::System::Boolean Field_2_4; // 0x45

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C976FC3C8221DA6B(::System::String* a1, ::Enum_3_5D65F42F0EEB3310 a2, ::System::String* a3, ::System::Int32 a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_5D65F42F0EEB3310, ::System::String*, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_C976FC3C8221DA6B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_418B038717020A3A(::Class_2_14986121AA61AD99* a1, ::Class_3_783F0B97013CC576* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_3_783F0B97013CC576*))((::PBYTE)hIl2Cpp + CLASS_2_3655222DBDD098E1_METHOD_2_418B038717020A3A_OFFSET))(this, a1, a2);
	}
};
