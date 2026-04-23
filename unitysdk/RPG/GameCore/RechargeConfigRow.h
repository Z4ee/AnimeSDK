#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECHARGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C8F850)
#define RPG_GAMECORE_RECHARGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8FC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeConfigRow_TypeDefinitionIndex = 13815;

	class RechargeConfigRow : public ::System::Object
	{
	public:
		::System::String* GiftImage; // 0x10
		::System::String* TierID; // 0x18
		::System::String* ProductID; // 0x20
		::RPG::Client::TextID NormalRechargeConfirm; // 0x28
		::System::UInt32 GiftType; // 0x38
		::System::UInt32 FirstCharge; // 0x3C
		::RPG::Client::TextID FirstRechangeConfirm; // 0x40
		::RPG::Client::TextID GiftName; // 0x50
		::System::UInt32 ListOrder; // 0x60
		::System::UInt32 NormalCharge; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RechargeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
