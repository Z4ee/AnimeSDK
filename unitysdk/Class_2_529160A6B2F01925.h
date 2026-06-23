#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_625EA19CD353E00F.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"

class Class_1_0D6706375CDAAE8C;
namespace LitJson { class JsonData; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_529160A6B2F01925_METHOD_2_17993F57D027DF49_OFFSET UNITYSDK_OFFSET(0x17948F70)
#define CLASS_2_529160A6B2F01925_METHOD_2_2027F5485CE9FAC0_1_OFFSET UNITYSDK_OFFSET(0x17946ED0)
#define CLASS_2_529160A6B2F01925_METHOD_2_2027F5485CE9FAC0_OFFSET UNITYSDK_OFFSET(0x17944260)
#define CLASS_2_529160A6B2F01925_METHOD_2_2FAA566F3B5F133E_OFFSET UNITYSDK_OFFSET(0x17945270)
#define CLASS_2_529160A6B2F01925_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17942CE0)
#define CLASS_2_529160A6B2F01925_METHOD_2_5DB34C6F4E26C8A4_OFFSET UNITYSDK_OFFSET(0x17948220)
#define CLASS_2_529160A6B2F01925_METHOD_2_6E6C1214F3FFEAA8_OFFSET UNITYSDK_OFFSET(0x179415B0)
#define CLASS_2_529160A6B2F01925_METHOD_2_8133AF1BF5DF705F_OFFSET UNITYSDK_OFFSET(0x17946B20)
#define CLASS_2_529160A6B2F01925_METHOD_2_83969A45CBFE1BA7_OFFSET UNITYSDK_OFFSET(0x1794B700)
#define CLASS_2_529160A6B2F01925_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17946E20)
#define CLASS_2_529160A6B2F01925_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x17942EC0)
#define CLASS_2_529160A6B2F01925_METHOD_2_C4B2681812B3B584_OFFSET UNITYSDK_OFFSET(0x17945380)
#define CLASS_2_529160A6B2F01925_METHOD_2_CA42DCEE4AAA24C6_OFFSET UNITYSDK_OFFSET(0x17947F90)
#define CLASS_2_529160A6B2F01925_METHOD_2_D22E36049E3BB371_OFFSET UNITYSDK_OFFSET(0x1794A060)
#define CLASS_2_529160A6B2F01925_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x17947F40)
#define CLASS_2_529160A6B2F01925__CTOR_OFFSET UNITYSDK_OFFSET(0x17941430)

inline static constexpr unsigned int Class_2_529160A6B2F01925_TypeDefinitionIndex = 81830;

class Class_2_529160A6B2F01925 : public ::Foundation::Singleton_1<::Class_2_529160A6B2F01925*>
{
public:
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::String* Field_2_38; // 0x0
	// static const ::System::String* Field_2_39; // 0x0
	// static const ::System::String* Field_2_40; // 0x0
	// static const ::System::String* Field_2_41; // 0x0
	// static const ::System::String* Field_2_42; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* Field_2_17; // 0x10
	::System::String* Field_2_36; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* Field_2_13; // 0x20
	::System::String* Field_2_6; // 0x28
	::System::String* Field_2_44; // 0x30
	::System::String* Field_2_43; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x40
	::System::String* Field_2_46; // 0x48
	::System::String* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_18; // 0x58
	::System::String* Field_2_35; // 0x60
	::System::String* Field_2_3; // 0x68
	::System::String* Field_2_1; // 0x70
	::System::String* Field_2_45; // 0x78
	::System::String* Field_2_5; // 0x80
	::System::String* Field_2_12; // 0x88
	::System::String* Field_2_47; // 0x90
	::Enum_3_625EA19CD353E00F Field_2_28; // 0x98
	::System::Int32 Field_2_11; // 0x9C
	::System::Int32 Field_2_9; // 0xA0
	::System::Int32 Field_2_14; // 0xA4
	::System::Int32 Field_2_30; // 0xA8
	::System::Int32 Field_2_0; // 0xAC
	::System::Int32 Field_2_20; // 0xB0
	::MoleMole::Config::TimePeriodType Field_2_15; // 0xB4
	::System::Int32 Field_2_29; // 0xB8
	::System::Int32 Field_2_21; // 0xBC
	::System::Int32 Field_2_34; // 0xC0
	::System::Int32 Field_2_26; // 0xC4
	::System::Int32 Field_2_25; // 0xC8
	::System::Int32 Field_2_27; // 0xCC
	::System::Single Field_2_24; // 0xD0
	::System::Boolean Field_2_7; // 0xD4
	::System::Boolean Field_2_8; // 0xD5
	::System::Int32 Field_2_10; // 0xD8
	::System::Int32 Field_2_22; // 0xDC
	::System::Int32 Field_2_33; // 0xE0
	::System::Int32 Field_2_23; // 0xE4
	::System::Int32 Field_2_32; // 0xE8
	::Enum_3_7CF131C413C919AF Field_2_31; // 0xEC
	::System::Int32 Field_2_19; // 0xF0
	::MoleMole::Config::WeatherType Field_2_16; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925__CTOR_OFFSET))(this);
	}

	::LitJson::JsonData* Method_2_6E6C1214F3FFEAA8()
	{
		return ((::LitJson::JsonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_6E6C1214F3FFEAA8_OFFSET))(this);
	}

	::System::Boolean Method_2_2027F5485CE9FAC0(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_2027F5485CE9FAC0_OFFSET))(this, a1);
	}

	::System::String* Method_2_C4B2681812B3B584()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_C4B2681812B3B584_OFFSET))(this);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::String* Method_2_8133AF1BF5DF705F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_8133AF1BF5DF705F_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_2027F5485CE9FAC0_1(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_2027F5485CE9FAC0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Boolean Method_2_5DB34C6F4E26C8A4(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_5DB34C6F4E26C8A4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_17993F57D027DF49(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_17993F57D027DF49_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::String* Method_2_2FAA566F3B5F133E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_2FAA566F3B5F133E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D22E36049E3BB371(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_D22E36049E3BB371_OFFSET))(this, a1);
	}

	::MiHoYo::SDK::JSONObject* Method_2_83969A45CBFE1BA7()
	{
		return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_83969A45CBFE1BA7_OFFSET))(this);
	}

	::System::String* Method_2_CA42DCEE4AAA24C6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_529160A6B2F01925_METHOD_2_CA42DCEE4AAA24C6_OFFSET))(this);
	}
};
