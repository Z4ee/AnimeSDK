#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20EA660)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPRESS_1_OFFSET UNITYSDK_OFFSET(0x179D6C60)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPRESS_OFFSET UNITYSDK_OFFSET(0x20EA790)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_COMPRESSEDVALUE_OFFSET UNITYSDK_OFFSET(0x20EA750)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_ISOVERFLOW_OFFSET UNITYSDK_OFFSET(0x20EA530)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x20EA620)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179D6AA0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x179D67D0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x179D6600)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x179D65E0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179D6B70)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x179D69B0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x179D68C0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_TOBIGFIXPOINT_OFFSET UNITYSDK_OFFSET(0x20EA7A0)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x72D10)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x20EA650)
#define RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__SINGOFFIXPOINT_OFFSET UNITYSDK_OFFSET(0x179D65B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPointWithMultiplier_TypeDefinitionIndex = 9392;

	struct alignas(8) FixPointWithMultiplier
	{
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::FixPoint Multiplier; // 0x18

		::System::Void _ctor(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::RPG::GameCore::FixPoint value, ::RPG::GameCore::FixPoint multiplier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__CTOR_1_OFFSET))(this, value, multiplier);
		}

		::System::Boolean get_IsOverFlow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_ISOVERFLOW_OFFSET))(this);
		}

		::System::Int32 get_Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_SIGN_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPointWithMultiplier op_Implicit(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPointWithMultiplier(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Boolean op_GreaterThan(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 CompareTo(::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPARETO_OFFSET))(this, other);
		}

		::RPG::GameCore::FixPointWithMultiplier get_CompressedValue()
		{
			return ((::RPG::GameCore::FixPointWithMultiplier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_GET_COMPRESSEDVALUE_OFFSET))(this);
		}

		::System::Void Compress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPRESS_OFFSET))(this);
		}

		static ::System::Boolean Compress_1(::RPG::GameCore::FixPoint& val, ::RPG::GameCore::FixPoint& multiplier)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_COMPRESS_1_OFFSET))(val, multiplier);
		}

		/*
		::RPG::GameCore::BigFixPoint ToBigFixPoint()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER_TOBIGFIXPOINT_OFFSET))(this);
		}
		*/

		static ::System::Int32 _SingOfFixPoint(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTWITHMULTIPLIER__SINGOFFIXPOINT_OFFSET))(value);
		}
	};
}
