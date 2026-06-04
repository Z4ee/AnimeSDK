#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECHARGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AB4320)
#define RPG_GAMECORE_RECHARGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB4750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeConfigRow_TypeDefinitionIndex = 13881;

	class RechargeConfigRow : public ::System::Object
	{
	public:
		::System::String* TierID; // 0x10
		::System::String* ProductID; // 0x18
		::System::String* GiftImage; // 0x20
		::System::UInt32 FirstCharge; // 0x28
		::System::UInt32 GiftType; // 0x2C
		::System::UInt32 NormalCharge; // 0x30
		::System::UInt32 ListOrder; // 0x34
		::RPG::Client::TextID FirstRechangeConfirm; // 0x38
		::RPG::Client::TextID GiftName; // 0x48
		::RPG::Client::TextID NormalRechargeConfirm; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RechargeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
