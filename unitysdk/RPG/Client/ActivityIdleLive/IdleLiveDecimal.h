#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0xDFF40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE0050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE0110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xE0080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET UNITYSDK_OFFSET(0xDFFA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET UNITYSDK_OFFSET(0xDFF90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET UNITYSDK_OFFSET(0xE0230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE0120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET UNITYSDK_OFFSET(0xE0010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET UNITYSDK_OFFSET(0xDFF20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET UNITYSDK_OFFSET(0xDFF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xC45F1B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC46BC50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xC46C270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0xC46C150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xC46C010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xC44C3F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0xC4462F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0xC46B8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0xC448BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xC46B940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC46BD40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xC46C1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0xC46BED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xC46BE40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xC4463B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xC44BED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET UNITYSDK_OFFSET(0xC469BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET UNITYSDK_OFFSET(0xDFF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET UNITYSDK_OFFSET(0xDFF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xE0210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET UNITYSDK_OFFSET(0xDFFC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET UNITYSDK_OFFSET(0xDFFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET UNITYSDK_OFFSET(0xDFFD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET UNITYSDK_OFFSET(0xE0200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xE01F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE0180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET UNITYSDK_OFFSET(0xDFFE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET UNITYSDK_OFFSET(0xDFFF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4697C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDFE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0xDFEA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0xDFEF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0xDFF00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_5_OFFSET UNITYSDK_OFFSET(0xDFF10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0xDFDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET UNITYSDK_OFFSET(0xE0240)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDecimal_TypeDefinitionIndex = 75119;

	struct alignas(8) IdleLiveDecimal
	{
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_One()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x16140);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_Zero()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x16158);
		}
		static ::Il2CppArray<::System::Numerics::BigInteger>** StaticGet_s_powerOf10Table()
		{
			return (::Il2CppArray<::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x16170);
		}
		// static const ::System::Int32 MAX_DENOMINATOR_LOG10 = 0x63; // 0x0
		::System::Numerics::BigInteger _numerator; // 0x10
		::System::Int32 _denominatorLog10; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_3_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_4(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_4_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_5(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_5_OFFSET))(this, a1, a2);
		}

		static ::System::Numerics::BigInteger PowerOf10(::System::Int32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET))(a1);
		}

		::System::Numerics::BigInteger GetScaledNumerator(::System::Int32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET))(this, a1);
		}

		::System::Void Add(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET))(this, a1);
		}

		::System::Void Sub(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET))(this, a1);
		}

		::System::Void Mul(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Pow(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Addition(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Subtraction(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Multiply(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		::System::UInt32 FloorToUint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET))(this);
		}

		::System::Int32 FloorToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET))(this);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET))(this);
		}

		/*
		::RPG::GameCore::FixPoint ToFixPoint()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET))(this);
		}
		*/

		::System::Int64 ToLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET))(this);
		}

		::System::UInt64 ToULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Truncate()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetLerpedValue(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit(::System::Int64 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_1(::System::UInt64 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_3(::System::Double a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET))(a1);
		}

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_4(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET))(a1);
		}
		*/

		::System::Int32 CompareTo(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToStringWithSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET))(this);
		}

		/*
		::System::ValueTuple_2<::System::String*, ::System::String*> ToDisplayData()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET))(this);
		}
		*/

		::System::String* FormatWithDecimal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET))(this, a1, a2);
		}

		/*
		::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> _ToDisplayDataRaw(::System::Int32 a1, ::System::Nullable_1<::System::Numerics::BigInteger> a2)
		{
			return ((::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Numerics::BigInteger>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET))(this, a1, a2);
		}
		*/
	};
}
