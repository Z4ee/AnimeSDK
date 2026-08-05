#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_520C809486AB1156.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidget_TimeShowType.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class TimeZoneInfo; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x122D28F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x122D5630)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_0BA701AE55571564_OFFSET UNITYSDK_OFFSET(0x122D1DF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET UNITYSDK_OFFSET(0x122D26C0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_1_OFFSET UNITYSDK_OFFSET(0x122D6D80)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_OFFSET UNITYSDK_OFFSET(0x122D16B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET UNITYSDK_OFFSET(0x122D4CF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_190852C798214C4D_OFFSET UNITYSDK_OFFSET(0x122D6C90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_23F8A9E76D0E5618_OFFSET UNITYSDK_OFFSET(0x122D24F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_28864B8DCDC61651_OFFSET UNITYSDK_OFFSET(0x122D44B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_2D8C60326FA29F42_OFFSET UNITYSDK_OFFSET(0x122D5690)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_30466415B62C2CD3_OFFSET UNITYSDK_OFFSET(0x122D20A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x122D17C0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET UNITYSDK_OFFSET(0x122D6A90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET UNITYSDK_OFFSET(0x122D4220)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_34DD6A5A4BC9CDE1_OFFSET UNITYSDK_OFFSET(0x122D2CE0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_37DFD1ADA143141D_OFFSET UNITYSDK_OFFSET(0x122D4A60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET UNITYSDK_OFFSET(0x122D6000)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET UNITYSDK_OFFSET(0x122D51A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_44787F90E45D3E22_OFFSET UNITYSDK_OFFSET(0x122D2370)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x122D6330)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_470D9D24C99A1137_OFFSET UNITYSDK_OFFSET(0x122D4740)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x122D5530)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET UNITYSDK_OFFSET(0x122D6710)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_54BA8CF016A73AF9_OFFSET UNITYSDK_OFFSET(0x122D1C10)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_54FE915BC8E2C55E_OFFSET UNITYSDK_OFFSET(0x122D5B90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET UNITYSDK_OFFSET(0x122D2880)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET UNITYSDK_OFFSET(0x122D4790)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5A4FD64409EF45FA_OFFSET UNITYSDK_OFFSET(0x122D3840)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5F564650A7D4DA32_OFFSET UNITYSDK_OFFSET(0x122D25F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET UNITYSDK_OFFSET(0x122D5E30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET UNITYSDK_OFFSET(0x122D5AF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET UNITYSDK_OFFSET(0x122C48A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x122D6BE0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_70A5BBA335B42D92_OFFSET UNITYSDK_OFFSET(0x122D1A60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET UNITYSDK_OFFSET(0x122D7030)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_1_OFFSET UNITYSDK_OFFSET(0x122D6950)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_2_OFFSET UNITYSDK_OFFSET(0x122D6F10)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_OFFSET UNITYSDK_OFFSET(0x122D4600)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_84AF0DEFACFEC550_OFFSET UNITYSDK_OFFSET(0x122D4950)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_850F9BFFF2187F47_OFFSET UNITYSDK_OFFSET(0x122D66A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_899075CF76A18E64_OFFSET UNITYSDK_OFFSET(0x122D5410)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET UNITYSDK_OFFSET(0x122D5ED0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x122D4340)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_91C2BD8BB4322472_OFFSET UNITYSDK_OFFSET(0x122D1D40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x122D3FF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_1_OFFSET UNITYSDK_OFFSET(0x122D3160)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_2_OFFSET UNITYSDK_OFFSET(0x122D2E80)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_3_OFFSET UNITYSDK_OFFSET(0x122D32D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_OFFSET UNITYSDK_OFFSET(0x122D2FF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET UNITYSDK_OFFSET(0x122D4FA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9CC271E474E142FC_OFFSET UNITYSDK_OFFSET(0x122D6E90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9EBC6615862BE488_OFFSET UNITYSDK_OFFSET(0x122D3D40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET UNITYSDK_OFFSET(0x122D75F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_A78B7657F567CDED_OFFSET UNITYSDK_OFFSET(0x122D1F70)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_AE2EF59213590E83_OFFSET UNITYSDK_OFFSET(0x122D5A30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B0CE0AD4BA43D0C1_OFFSET UNITYSDK_OFFSET(0x122D67C0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET UNITYSDK_OFFSET(0x122D4800)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET UNITYSDK_OFFSET(0x122D3440)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C200A7ED2A388358_OFFSET UNITYSDK_OFFSET(0x122D7160)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x122D6850)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET UNITYSDK_OFFSET(0x122D60B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_CFCFB28C041DBF77_OFFSET UNITYSDK_OFFSET(0x122D36F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_DC6579B6A87EE5DA_OFFSET UNITYSDK_OFFSET(0x122D2900)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_DDCEDBADFBB4FC9D_OFFSET UNITYSDK_OFFSET(0x122D1820)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E7B76D6CB1A69659_OFFSET UNITYSDK_OFFSET(0x122D3580)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E7EA7C4060FEF21C_1_OFFSET UNITYSDK_OFFSET(0x122D5CB0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E7EA7C4060FEF21C_OFFSET UNITYSDK_OFFSET(0x122D4E20)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET UNITYSDK_OFFSET(0x122D6250)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F3B57DEB5F3EE47F_OFFSET UNITYSDK_OFFSET(0x122D5870)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x122D2570)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET UNITYSDK_OFFSET(0x122D5F80)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_1_OFFSET UNITYSDK_OFFSET(0x122D7780)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_OFFSET UNITYSDK_OFFSET(0x122D3BE0)
#define CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122D1370)

inline static constexpr unsigned int Class_1_398EB61BC390BA4C_TypeDefinitionIndex = 48652;

class Class_1_398EB61BC390BA4C : public ::System::Object
{
public:
	static ::System::TimeZoneInfo** StaticGet_Field_1_15()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x3DE70);
	}
	static ::Struct_2_49ABC235CB23B56F* StaticGet_Field_1_12()
	{
		return (::Struct_2_49ABC235CB23B56F*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x3DE78);
	}
	static ::System::TimeZoneInfo** StaticGet_Field_1_4()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x3DE88);
	}
	static ::System::Int64* StaticGet_Field_1_11()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE810);
	}
	static ::System::Int64* StaticGet_Field_1_8()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE818);
	}
	static ::System::TimeSpan* StaticGet_Field_1_14()
	{
		return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE820);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE828);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE82C);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE82D);
	}
	static ::System::Int64* StaticGet_Field_1_18()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE830);
	}
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE838);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE83C);
	}
	// static const ::System::Int32 Field_1_1 = 0x15180; // 0x0
	// static const ::System::Int32 Field_1_0 = 0x93A80; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3C; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::Int64 Field_1_13 = 0x5265C00; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::String* Method_1_DDCEDBADFBB4FC9D(::System::TimeSpan a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::TimeSpan, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_DDCEDBADFBB4FC9D_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_44787F90E45D3E22()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_44787F90E45D3E22_OFFSET))();
	}

	static ::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F5447CD65612575D_OFFSET))();
	}

	static ::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_5F564650A7D4DA32(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5F564650A7D4DA32_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_100C1D09897DCD64()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET))();
	}

	static ::System::Void Method_1_DC6579B6A87EE5DA(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_DC6579B6A87EE5DA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_54BA8CF016A73AF9(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_54BA8CF016A73AF9_OFFSET))(a1);
	}

	static ::System::String* Method_1_70A5BBA335B42D92(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_70A5BBA335B42D92_OFFSET))(a1);
	}

	static ::System::DateTimeOffset Method_1_B24AAB8F84750FE9(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::DateTimeOffset(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_E7B76D6CB1A69659(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E7B76D6CB1A69659_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::DateTime Method_1_9EBC6615862BE488(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9EBC6615862BE488_OFFSET))(a1);
	}

	static ::System::String* Method_1_950F79375749C36A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_33E56182071BF9C8()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET))();
	}

	static ::System::String* Method_1_91C2BD8BB4322472(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_91C2BD8BB4322472_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_28864B8DCDC61651()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_28864B8DCDC61651_OFFSET))();
	}

	static ::System::String* Method_1_A78B7657F567CDED(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_A78B7657F567CDED_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_470D9D24C99A1137(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_470D9D24C99A1137_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5909BCB7614123CD()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET))();
	}

	static ::System::DateTime Method_1_84AF0DEFACFEC550(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_84AF0DEFACFEC550_OFFSET))(a1);
	}

	static ::System::String* Method_1_950F79375749C36A_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5909BCB7614123CD_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET))();
	}

	static ::System::DateTime Method_1_E7EA7C4060FEF21C(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E7EA7C4060FEF21C_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_OFFSET))(a1);
	}

	static ::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET))();
	}

	static ::System::Boolean Method_1_9B648E232A72278C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3DBBB84585AEE192(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET))(a1);
	}

	static ::System::String* Method_1_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_4B967A5E70FF7EE4_OFFSET))(a1);
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::TimeSpan Method_1_2D8C60326FA29F42(::System::UInt64 a1)
	{
		return ((::System::TimeSpan(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_2D8C60326FA29F42_OFFSET))(a1);
	}

	static ::System::String* Method_1_F3B57DEB5F3EE47F(::System::Int64 a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::Int64, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F3B57DEB5F3EE47F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34DD6A5A4BC9CDE1(::System::Int64 a1, ::System::Int32 a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_34DD6A5A4BC9CDE1_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_30466415B62C2CD3(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_30466415B62C2CD3_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET))(a1);
	}

	static ::System::String* Method_1_AE2EF59213590E83(::System::Int32 a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::Int32, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_AE2EF59213590E83_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET))();
	}

	static ::System::DateTime Method_1_E7EA7C4060FEF21C_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E7EA7C4060FEF21C_1_OFFSET))(a1);
	}

	static ::System::Double Method_1_54FE915BC8E2C55E(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_54FE915BC8E2C55E_OFFSET))(a1);
	}

	static ::System::String* Method_1_0BA701AE55571564(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_0BA701AE55571564_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6_1(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F6A54462AAB8D116(::System::Int64 a1)
	{
		return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_23F8A9E76D0E5618()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_23F8A9E76D0E5618_OFFSET))();
	}

	static ::System::Boolean Method_1_39DF58BD9C5AA523(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_EFAE4323FCD86DE1(::System::Int64 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Boolean Method_1_850F9BFFF2187F47(::System::Int64 a1, ::System::Int64 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_850F9BFFF2187F47_OFFSET))(a1, a2, a3);
	}

	static ::System::DateTime Method_1_37DFD1ADA143141D(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_37DFD1ADA143141D_OFFSET))(a1);
	}

	static ::System::Double Method_1_4E5F0C484BC1A4CD()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET))();
	}

	static ::System::Int64 Method_1_C4AA67D5D098910B(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET))(a1, a2);
	}

	static ::System::TimeSpan Method_1_5A4FD64409EF45FA(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::TimeSpan(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5A4FD64409EF45FA_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_B0CE0AD4BA43D0C1(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B0CE0AD4BA43D0C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::String* Method_1_950F79375749C36A_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_2_OFFSET))(a1);
	}

	static ::System::Double Method_1_8A3C9E953B929AB6(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_1_OFFSET))(a1);
	}

	static ::System::DayOfWeek Method_1_31C82ABDD4AEA8E1(::System::Int64 a1)
	{
		return ((::System::DayOfWeek(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_115D533F9C8CC8D9()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_OFFSET))();
	}

	static ::System::Single Method_1_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET))();
	}

	static ::System::DateTime Method_1_190852C798214C4D(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::DateTime(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_190852C798214C4D_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_115D533F9C8CC8D9_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_1_OFFSET))();
	}

	static ::System::Int64 Method_1_9CC271E474E142FC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9CC271E474E142FC_OFFSET))();
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45_2(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_2_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_FD7A24056DDB8864(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_748962C7CFBAF8D2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Double Method_1_1260683EEE786AE0()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET))();
	}

	static ::System::Void Method_1_C200A7ED2A388358(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C200A7ED2A388358_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_CFCFB28C041DBF77()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_CFCFB28C041DBF77_OFFSET))();
	}

	static ::System::Int64 Method_1_67480B0AF6E587A7()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET))();
	}

	static ::System::Int64 Method_1_899075CF76A18E64(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::Int64(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_899075CF76A18E64_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A24CFEED1C9FCFA0(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_950F79375749C36A_3(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_3_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_B20E6F6FA8476DEC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET))();
	}

	static ::System::Int64 Method_1_FD7A24056DDB8864_1(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_1_OFFSET))(a1, a2);
	}
};
