#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5E73F0)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CumulativeScoreBoardConfigRow_TypeDefinitionIndex = 15187;

	class CumulativeScoreBoardConfigRow : public ::System::Object
	{
	public:
		::System::String* TargetValue; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ConfigID; // 0x20
		::System::Boolean IsDecrease; // 0x24
		::System::Int32 MaxDigit; // 0x28
		::System::UInt32 ZeroFillLength; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CumulativeScoreBoardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CumulativeScoreBoardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
