#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECHARGEGIFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17584F60)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17585130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeGiftConfigRow_TypeDefinitionIndex = 13345;

	class RechargeGiftConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GiftIDList; // 0x10
		::Il2CppArray<::System::String*>* DiscountForFiat; // 0x18
		::System::Single Discount; // 0x20
		::System::UInt32 GiftType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RechargeGiftConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeGiftConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
