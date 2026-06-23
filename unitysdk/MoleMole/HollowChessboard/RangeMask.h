#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_CHECKBIT_OFFSET UNITYSDK_OFFSET(0x741180)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x741220)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x7411D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x741230)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11623230)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x116232B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_SETBIT_OFFSET UNITYSDK_OFFSET(0x741110)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x741280)
#define MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7412E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RangeMask_TypeDefinitionIndex = 46307;

	struct alignas(4) RangeMask
	{
		::System::UInt32 _mask; // 0x10

		::System::Void SetBit(::System::Int32 bit, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_SETBIT_OFFSET))(this, bit, value);
		}

		::System::Boolean CheckBit(::System::Int32 bit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_CHECKBIT_OFFSET))(this, bit);
		}

		::System::Boolean Equals(::MoleMole::HollowChessboard::RangeMask other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RangeMask))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::MoleMole::HollowChessboard::RangeMask left, ::MoleMole::HollowChessboard::RangeMask right)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RangeMask, ::MoleMole::HollowChessboard::RangeMask))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::MoleMole::HollowChessboard::RangeMask left, ::MoleMole::HollowChessboard::RangeMask right)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RangeMask, ::MoleMole::HollowChessboard::RangeMask))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RANGEMASK___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
