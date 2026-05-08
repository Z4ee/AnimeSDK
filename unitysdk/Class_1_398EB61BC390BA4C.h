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

#define CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1617FD20)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x16181DA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_0BA701AE55571564_OFFSET UNITYSDK_OFFSET(0x1617E9B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET UNITYSDK_OFFSET(0x1617FB60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_1_OFFSET UNITYSDK_OFFSET(0x1617D0A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_OFFSET UNITYSDK_OFFSET(0x16181680)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET UNITYSDK_OFFSET(0x161805D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_1CE61664AD67C2CB_OFFSET UNITYSDK_OFFSET(0x1617FDF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_23F8A9E76D0E5618_OFFSET UNITYSDK_OFFSET(0x16182A30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_28864B8DCDC61651_OFFSET UNITYSDK_OFFSET(0x16180D00)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_2D8C60326FA29F42_OFFSET UNITYSDK_OFFSET(0x1617F5A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_30466415B62C2CD3_OFFSET UNITYSDK_OFFSET(0x1617EC60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x16181950)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET UNITYSDK_OFFSET(0x16181EB0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET UNITYSDK_OFFSET(0x16182CD0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_34DD6A5A4BC9CDE1_OFFSET UNITYSDK_OFFSET(0x16180240)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_37DFD1ADA143141D_OFFSET UNITYSDK_OFFSET(0x1617FEE0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET UNITYSDK_OFFSET(0x16181E00)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET UNITYSDK_OFFSET(0x161812F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_44787F90E45D3E22_OFFSET UNITYSDK_OFFSET(0x161826F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1617D1B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_470D9D24C99A1137_OFFSET UNITYSDK_OFFSET(0x16182190)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x1617F790)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET UNITYSDK_OFFSET(0x1617DA60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_54BA8CF016A73AF9_OFFSET UNITYSDK_OFFSET(0x1617E7D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_54FE915BC8E2C55E_OFFSET UNITYSDK_OFFSET(0x1617DEF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET UNITYSDK_OFFSET(0x16181790)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET UNITYSDK_OFFSET(0x1616E400)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5D6F89D54DEF195F_OFFSET UNITYSDK_OFFSET(0x161819B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5F564650A7D4DA32_OFFSET UNITYSDK_OFFSET(0x16180170)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET UNITYSDK_OFFSET(0x16182E90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET UNITYSDK_OFFSET(0x16182DF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET UNITYSDK_OFFSET(0x1617E160)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x16180F90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_70A5BBA335B42D92_OFFSET UNITYSDK_OFFSET(0x1617E620)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET UNITYSDK_OFFSET(0x1617EF40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_1_OFFSET UNITYSDK_OFFSET(0x16180E50)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_2_OFFSET UNITYSDK_OFFSET(0x16182550)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_OFFSET UNITYSDK_OFFSET(0x1617DDB0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_84AF0DEFACFEC550_OFFSET UNITYSDK_OFFSET(0x16183240)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_899075CF76A18E64_OFFSET UNITYSDK_OFFSET(0x16181560)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET UNITYSDK_OFFSET(0x16182C20)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x16182AB0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_91C2BD8BB4322472_OFFSET UNITYSDK_OFFSET(0x1617E900)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1617D520)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_1_OFFSET UNITYSDK_OFFSET(0x1617F070)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_2_OFFSET UNITYSDK_OFFSET(0x1617F9F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_3_OFFSET UNITYSDK_OFFSET(0x16180460)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_OFFSET UNITYSDK_OFFSET(0x1617D750)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET UNITYSDK_OFFSET(0x16183040)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9CC271E474E142FC_OFFSET UNITYSDK_OFFSET(0x16182670)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9EBC6615862BE488_OFFSET UNITYSDK_OFFSET(0x16181040)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET UNITYSDK_OFFSET(0x161822E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_A78B7657F567CDED_OFFSET UNITYSDK_OFFSET(0x1617EB30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_AE2EF59213590E83_OFFSET UNITYSDK_OFFSET(0x1617FD30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B0CE0AD4BA43D0C1_OFFSET UNITYSDK_OFFSET(0x16182F30)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET UNITYSDK_OFFSET(0x16181800)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B2174699EBFB6343_OFFSET UNITYSDK_OFFSET(0x1617F1E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET UNITYSDK_OFFSET(0x1617DC70)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C200A7ED2A388358_OFFSET UNITYSDK_OFFSET(0x16180700)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x161821E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET UNITYSDK_OFFSET(0x1617D8C0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_CFCFB28C041DBF77_OFFSET UNITYSDK_OFFSET(0x1617E010)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_DDCEDBADFBB4FC9D_OFFSET UNITYSDK_OFFSET(0x1617E3D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E7B76D6CB1A69659_OFFSET UNITYSDK_OFFSET(0x16180B90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET UNITYSDK_OFFSET(0x16182470)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F3B57DEB5F3EE47F_OFFSET UNITYSDK_OFFSET(0x16182870)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x16182FC0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET UNITYSDK_OFFSET(0x161803E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F904DEDACC00E8EF_1_OFFSET UNITYSDK_OFFSET(0x16182010)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F904DEDACC00E8EF_OFFSET UNITYSDK_OFFSET(0x1617E250)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_1_OFFSET UNITYSDK_OFFSET(0x1617F890)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_OFFSET UNITYSDK_OFFSET(0x1617DB10)
#define CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1617CD60)

inline static constexpr unsigned int Class_1_398EB61BC390BA4C_TypeDefinitionIndex = 75777;

class Class_1_398EB61BC390BA4C : public ::System::Object
{
public:
	static ::System::TimeZoneInfo** StaticGet_Field_1_5()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x391B0);
	}
	static ::Struct_2_49ABC235CB23B56F* StaticGet_Field_1_12()
	{
		return (::Struct_2_49ABC235CB23B56F*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x391B8);
	}
	static ::System::TimeZoneInfo** StaticGet_Field_1_10()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x391C8);
	}
	static ::System::Int64* StaticGet_Field_1_6()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0D0);
	}
	static ::System::TimeSpan* StaticGet_Field_1_11()
	{
		return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0D8);
	}
	static ::System::Int64* StaticGet_Field_1_9()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0E0);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0E8);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0EC);
	}
	static ::System::Boolean* StaticGet_Field_1_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0ED);
	}
	static ::System::Int64* StaticGet_Field_1_14()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0F0);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0F8);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xE0FC);
	}
	// static const ::System::Int32 Field_1_0 = 0x15180; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x93A80; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3C; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET))();
	}

	static ::System::String* Method_1_950F79375749C36A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_C4AA67D5D098910B(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_4E5F0C484BC1A4CD()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET))();
	}

	static ::System::Int64 Method_1_FD7A24056DDB8864(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_OFFSET))(a1);
	}

	static ::System::Double Method_1_54FE915BC8E2C55E(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_54FE915BC8E2C55E_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_CFCFB28C041DBF77()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_CFCFB28C041DBF77_OFFSET))();
	}

	static ::System::String* Method_1_DDCEDBADFBB4FC9D(::System::TimeSpan a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::TimeSpan, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_DDCEDBADFBB4FC9D_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_748962C7CFBAF8D2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::String* Method_1_54BA8CF016A73AF9(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_54BA8CF016A73AF9_OFFSET))(a1);
	}

	static ::System::TimeSpan Method_1_B2174699EBFB6343(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::TimeSpan(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B2174699EBFB6343_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_4B967A5E70FF7EE4_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_FD7A24056DDB8864_1(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FD7A24056DDB8864_1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_0BA701AE55571564(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_0BA701AE55571564_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_100C1D09897DCD64()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET))();
	}

	static ::System::String* Method_1_AE2EF59213590E83(::System::Int32 a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::Int32, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_AE2EF59213590E83_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_1CE61664AD67C2CB(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::DateTime(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_1CE61664AD67C2CB_OFFSET))(a1, a2);
	}

	static ::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_5F564650A7D4DA32(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5F564650A7D4DA32_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_37DFD1ADA143141D(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_37DFD1ADA143141D_OFFSET))(a1);
	}

	static ::System::Void Method_1_34DD6A5A4BC9CDE1(::System::Int64 a1, ::System::Int32 a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_34DD6A5A4BC9CDE1_OFFSET))(a1, a2, a3);
	}

	static ::System::DateTimeOffset Method_1_B24AAB8F84750FE9(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::DateTimeOffset(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6A54462AAB8D116(::System::Int64 a1)
	{
		return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET))(a1);
	}

	static ::System::String* Method_1_91C2BD8BB4322472(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_91C2BD8BB4322472_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5909BCB7614123CD()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET))();
	}

	static ::System::Void Method_1_C200A7ED2A388358(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C200A7ED2A388358_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_E7B76D6CB1A69659(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E7B76D6CB1A69659_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_950F79375749C36A_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_1_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_28864B8DCDC61651()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_28864B8DCDC61651_OFFSET))();
	}

	static ::System::Double Method_1_1260683EEE786AE0()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET))();
	}

	static ::System::DateTime Method_1_9EBC6615862BE488(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9EBC6615862BE488_OFFSET))(a1);
	}

	static ::System::TimeSpan Method_1_2D8C60326FA29F42(::System::UInt64 a1)
	{
		return ((::System::TimeSpan(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_2D8C60326FA29F42_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3DBBB84585AEE192(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_115D533F9C8CC8D9()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_OFFSET))();
	}

	static ::System::Int64 Method_1_5909BCB7614123CD_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET))();
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::String* Method_1_950F79375749C36A_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_2_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_115D533F9C8CC8D9_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_115D533F9C8CC8D9_1_OFFSET))();
	}

	static ::System::String* Method_1_950F79375749C36A_3(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_950F79375749C36A_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_5D6F89D54DEF195F(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5D6F89D54DEF195F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Single Method_1_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET))();
	}

	static ::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET))();
	}

	static ::System::Boolean Method_1_39DF58BD9C5AA523(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET))(a1, a2, a3);
	}

	static ::System::DayOfWeek Method_1_31C82ABDD4AEA8E1(::System::Int64 a1)
	{
		return ((::System::DayOfWeek(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_1_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_470D9D24C99A1137(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_470D9D24C99A1137_OFFSET))(a1);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::Boolean Method_1_A24CFEED1C9FCFA0(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_899075CF76A18E64(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::Int64(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_899075CF76A18E64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFAE4323FCD86DE1(::System::Int64 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_75D8B346BBCC8D45_2(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_75D8B346BBCC8D45_2_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_F904DEDACC00E8EF(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F904DEDACC00E8EF_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_9CC271E474E142FC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9CC271E474E142FC_OFFSET))();
	}

	static ::System::String* Method_1_A78B7657F567CDED(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_A78B7657F567CDED_OFFSET))(a1);
	}

	static ::System::String* Method_1_70A5BBA335B42D92(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_70A5BBA335B42D92_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_B20E6F6FA8476DEC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET))();
	}

	static ::System::DateTime Method_1_F904DEDACC00E8EF_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F904DEDACC00E8EF_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_F3B57DEB5F3EE47F(::System::Int64 a1, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType a2)
	{
		return ((::System::String*(*)(::System::Int64, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F3B57DEB5F3EE47F_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_23F8A9E76D0E5618()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_23F8A9E76D0E5618_OFFSET))();
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::System::Double Method_1_8A3C9E953B929AB6(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_33E56182071BF9C8()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET))();
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6_1(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_67480B0AF6E587A7()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET))();
	}

	static ::System::DateTime Method_1_44787F90E45D3E22()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_44787F90E45D3E22_OFFSET))();
	}

	static ::System::Int64 Method_1_B0CE0AD4BA43D0C1(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B0CE0AD4BA43D0C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F5447CD65612575D_OFFSET))();
	}

	static ::System::String* Method_1_30466415B62C2CD3(::System::TimeSpan a1)
	{
		return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_30466415B62C2CD3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9B648E232A72278C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_84AF0DEFACFEC550(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_84AF0DEFACFEC550_OFFSET))(a1);
	}
};
