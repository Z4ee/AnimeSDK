#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECHARGEGIFTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C90F40)
#define RPG_GAMECORE_RECHARGEGIFTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C91140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeGiftDataRow_TypeDefinitionIndex = 13825;

	class RechargeGiftDataRow : public ::System::Object
	{
	public:
		::System::UInt32 McoinPay; // 0x10
		::System::UInt32 RewardsFree; // 0x14
		::System::UInt32 GiftID; // 0x18
		::System::UInt32 RewardsPay; // 0x1C
		::System::UInt32 McoinFree; // 0x20
		::System::UInt32 Days; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RechargeGiftDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeGiftDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
