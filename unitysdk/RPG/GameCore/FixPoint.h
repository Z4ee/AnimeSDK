#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_GAMECORE_FIXPOINT_ABS_OFFSET UNITYSDK_OFFSET(0x191900F0)
#define RPG_GAMECORE_FIXPOINT_ACOS_OFFSET UNITYSDK_OFFSET(0x19198040)
#define RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET UNITYSDK_OFFSET(0x19196250)
#define RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x191993F0)
#define RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET UNITYSDK_OFFSET(0x19198840)
#define RPG_GAMECORE_FIXPOINT_ATAN_OFFSET UNITYSDK_OFFSET(0x191981C0)
#define RPG_GAMECORE_FIXPOINT_CEILING_OFFSET UNITYSDK_OFFSET(0x19194F70)
#define RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x19199490)
#define RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET UNITYSDK_OFFSET(0x19194A80)
#define RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET UNITYSDK_OFFSET(0x191991D0)
#define RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET UNITYSDK_OFFSET(0x19197350)
#define RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x19199470)
#define RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x22AA3D0)
#define RPG_GAMECORE_FIXPOINT_COS_OFFSET UNITYSDK_OFFSET(0x19197E20)
#define RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET UNITYSDK_OFFSET(0x191962A0)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET UNITYSDK_OFFSET(0x19194840)
#define RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1675420)
#define RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BC510)
#define RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET UNITYSDK_OFFSET(0x191961F0)
#define RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET UNITYSDK_OFFSET(0x19196200)
#define RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET UNITYSDK_OFFSET(0x19197E50)
#define RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET UNITYSDK_OFFSET(0x19196330)
#define RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET UNITYSDK_OFFSET(0x19196270)
#define RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET UNITYSDK_OFFSET(0x19197890)
#define RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET UNITYSDK_OFFSET(0x19196240)
#define RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x191900A0)
#define RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET UNITYSDK_OFFSET(0x19194D90)
#define RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x191900B0)
#define RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET UNITYSDK_OFFSET(0x19196660)
#define RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE5170)
#define RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1676A90)
#define RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x19199440)
#define RPG_GAMECORE_FIXPOINT_LN_OFFSET UNITYSDK_OFFSET(0x19196790)
#define RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET UNITYSDK_OFFSET(0x19199C20)
#define RPG_GAMECORE_FIXPOINT_LOG2_OFFSET UNITYSDK_OFFSET(0x19196670)
#define RPG_GAMECORE_FIXPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x19199C00)
#define RPG_GAMECORE_FIXPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x19199C10)
#define RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19191760)
#define RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x191900C0)
#define RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x19190F50)
#define RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x191921E0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19195EF0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19199160)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19195FE0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19199170)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x19196000)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x191990C0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x19199180)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x191902D0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x19190F40)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x19190120)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x19196380)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x191993E0)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19196650)
#define RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19196370)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x191963A0)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x19196390)
#define RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x191962F0)
#define RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x191921F0)
#define RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x19196210)
#define RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x19196350)
#define RPG_GAMECORE_FIXPOINT_PARSE_OFFSET UNITYSDK_OFFSET(0x191996E0)
#define RPG_GAMECORE_FIXPOINT_POW2_OFFSET UNITYSDK_OFFSET(0x191963B0)
#define RPG_GAMECORE_FIXPOINT_POW_OFFSET UNITYSDK_OFFSET(0x191967D0)
#define RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET UNITYSDK_OFFSET(0x191996B0)
#define RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET UNITYSDK_OFFSET(0x19199690)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x191994E0)
#define RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET UNITYSDK_OFFSET(0x19199540)
#define RPG_GAMECORE_FIXPOINT_ROUND_OFFSET UNITYSDK_OFFSET(0x191951A0)
#define RPG_GAMECORE_FIXPOINT_SIGN_OFFSET UNITYSDK_OFFSET(0x191961D0)
#define RPG_GAMECORE_FIXPOINT_SIN_OFFSET UNITYSDK_OFFSET(0x19196C90)
#define RPG_GAMECORE_FIXPOINT_SQRT_OFFSET UNITYSDK_OFFSET(0x19196940)
#define RPG_GAMECORE_FIXPOINT_TAN_OFFSET UNITYSDK_OFFSET(0x19197E80)
#define RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x22BC380)
#define RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET UNITYSDK_OFFSET(0xE21D0)
#define RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x164E440)
#define RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x22BC3D0)
#define RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x22BC450)
#define RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x22BC440)
#define RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x22BC430)
#define RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET UNITYSDK_OFFSET(0x164E440)
#define RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET UNITYSDK_OFFSET(0x22BC420)
#define RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0xE21D0)
#define RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x22BC430)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22BC4F0)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BC4F0)
#define RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET UNITYSDK_OFFSET(0x22BC500)
#define RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x164E440)
#define RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x22BC420)
#define RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET UNITYSDK_OFFSET(0x19199CC0)
#define RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1919A5B0)
#define RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22BC530)
#define RPG_GAMECORE_FIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET UNITYSDK_OFFSET(0x19199CE0)
#define RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET UNITYSDK_OFFSET(0x1919A040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPoint_TypeDefinitionIndex = 9591;

	struct alignas(8) FixPoint
	{
		static ::Il2CppArray<::System::Int64>** StaticGet_SinLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x5160);
		}
		static ::Il2CppArray<::System::Int64>** StaticGet_TanLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x5168);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x29E0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MaxValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x29E8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiTimes2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x29F0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2Inv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x29F8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_E()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A00);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_s_FixEpsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A08);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MinValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A10);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A18);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_InvalidFixPoint()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A20);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Max()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A28);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiInv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A30);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Epsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A38);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A40);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Min()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A48);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Ln2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A50);
		}
		static ::System::Boolean* StaticGet_LutLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A58);
		}
		static ::System::Decimal* StaticGet_Precision()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A5C);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_LutInterval()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A70);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Deg2Rad()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A78);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Pi()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A80);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Rad2Deg()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x2A88);
		}
		// static const ::System::Int64 MAX_VALUE = 0x7FFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int64 MIN_VALUE = 0x8000000000000000; // 0x0
		// static const ::System::Int32 NUM_BITS = 0x40; // 0x0
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE = 0x100000000; // 0x0
		// static const ::System::Int64 E_RAW_VALUE = 0x2B7E15162; // 0x0
		// static const ::System::Int64 PI_TIMES_2 = 0x6487ED511; // 0x0
		// static const ::System::Int64 PI = 0x3243F6A88; // 0x0
		// static const ::System::Int64 PI_OVER_2 = 0x1921FB544; // 0x0
		// static const ::System::Int64 LN2 = 0xB17217F7; // 0x0
		// static const ::System::Int64 LOG2MAX = 0x1F00000000; // 0x0
		// static const ::System::Int64 LOG2MIN = 0xFFFFFFE000000000; // 0x0
		// static const ::System::Int64 EPSILON = 0x1000; // 0x0
		// static const ::System::Int32 LUT_SIZE = 0x3243; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt64 INTEGER_CUT = 0xFFFFFFFF00000000; // 0x0
		::System::Int64 m_rawValue; // 0x10

		::System::Void _ctor(::System::Int64 rawValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_OFFSET))(this, rawValue);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET))();
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Byte ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET))(this, provider);
		}

		::System::SByte ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Char ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET))(this, provider);
		}

		/*
		::System::DateTime ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET))(this, provider);
		}
		*/

		::System::Int16 ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET))(this, provider);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET))(this, provider);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET))(this, provider);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET))(this, provider);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET))(this, provider);
		}

		::System::String* ToString(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET))(this, provider);
		}

		::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET))(this, conversionType, provider);
		}

		static ::System::Int32 Sign(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIGN_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Abs(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ABS_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint FastAbs(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Floor(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Ceiling(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILING_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Round(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint FractionalPart(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Addition(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastAdd(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_Subtraction(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastSub(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET))(x, y);
		}

		static ::System::Int64 AddOverflowHelper(::System::Int64 x, ::System::Int64 y, ::System::Boolean& overflow)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET))(x, y, overflow);
		}

		static ::RPG::GameCore::FixPoint op_Multiply(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint Multiply(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y, ::System::Boolean& isOverflow)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET))(x, y, isOverflow);
		}

		static ::RPG::GameCore::FixPoint FastMul(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET))(x, y);
		}

		static ::System::Int32 CountLeadingZeroes(::System::UInt64 x)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint op_Division(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_Modulus(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastMod(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_UnaryNegation(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_GreaterThan(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET))(x, y);
		}

		static ::System::Boolean op_LessThan(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET))(x, y);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET))(x, y);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint Pow2(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW2_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Log2(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOG2_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Ln(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Pow(::RPG::GameCore::FixPoint b, ::RPG::GameCore::FixPoint exp)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW_OFFSET))(b, exp);
		}

		static ::RPG::GameCore::FixPoint Sqrt(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRT_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Sin(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint FastSin(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET))(x);
		}

		static ::System::Int64 ClampSinValue(::System::Int64 angle, ::System::Boolean& flipHorizontal, ::System::Boolean& flipVertical)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET))(angle, flipHorizontal, flipVertical);
		}

		static ::RPG::GameCore::FixPoint Cos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint FastCos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Tan(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TAN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Acos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ACOS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Atan(::RPG::GameCore::FixPoint z)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN_OFFSET))(z);
		}

		static ::RPG::GameCore::FixPoint Atan2(::RPG::GameCore::FixPoint y, ::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET))(y, x);
		}

		static ::RPG::GameCore::FixPoint op_Explicit(::System::Int64 value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_1(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_2(::System::Single value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::Single op_Explicit_3(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Single(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_4(::System::Double value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Double op_Explicit_5(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_6(::System::Decimal value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_7(::RPG::GameCore::FixPoint value)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit_8(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET))(value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::RPG::GameCore::FixPoint other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET))(this, other);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint ClampFromDecimal(::System::Decimal val)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET))(val);
		}

		static ::RPG::GameCore::FixPoint FromRaw(::System::Int64 rawValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET))(rawValue);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint CreateFromRaw(::System::Int64 rawValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET))(rawValue);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint op_Implicit(::System::Int32 i)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET))(i);
		}

		static ::RPG::GameCore::FixPoint op_Implicit_1(::System::UInt32 u)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET))(u);
		}

		static ::System::Boolean Approximately(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Boolean IsAlmostZero(::RPG::GameCore::FixPoint a)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET))(a);
		}

		static ::RPG::GameCore::FixPoint Clamp(::RPG::GameCore::FixPoint val, ::RPG::GameCore::FixPoint min, ::RPG::GameCore::FixPoint max)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET))(val, min, max);
		}

		static ::RPG::GameCore::FixPoint Clamp01(::RPG::GameCore::FixPoint f)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET))(f);
		}

		static ::System::Int32 CeilToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET))(f);
		}

		static ::System::Int32 FloorToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET))(f);
		}

		static ::System::Int32 RoundToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET))(f);
		}

		static ::RPG::GameCore::FixPoint Round_1(::RPG::GameCore::FixPoint value, ::System::Int32 numDigits)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET))(value, numDigits);
		}

		static ::RPG::GameCore::FixPoint Repeat(::RPG::GameCore::FixPoint value, ::RPG::GameCore::FixPoint step)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET))(value, step);
		}

		static ::RPG::GameCore::FixPoint RepeatFromTo(::RPG::GameCore::FixPoint value, ::RPG::GameCore::FixPoint from, ::RPG::GameCore::FixPoint to)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET))(value, from, to);
		}

		static ::RPG::GameCore::FixPoint Parse(::System::String* s)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSE_OFFSET))(s);
		}

		static ::RPG::GameCore::FixPoint Max(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MAX_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixPoint Min(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MIN_OFFSET))(a, b);
		}

		static ::System::Void LoadLut(::Il2CppArray<::System::Int32>* sinLut, ::Il2CppArray<::System::Int32>* tanLut)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET))(sinLut, tanLut);
		}

		static ::System::Void UnloadLut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET))();
		}

		static ::System::Void _GenerateSinLut(::System::String* filePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET))(filePath);
		}

		static ::System::Void _GenerateTanLut(::System::String* filePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET))(filePath);
		}
	};
}
