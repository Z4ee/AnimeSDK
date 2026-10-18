#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECHARGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9710C0)
#define RPG_GAMECORE_RECHARGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9714F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeConfigRow_TypeDefinitionIndex = 14612;

	class RechargeConfigRow : public ::System::Object
	{
	public:
		::System::String* TierID; // 0x10
		::System::String* ProductID; // 0x18
		::System::String* GiftImage; // 0x20
		::RPG::Client::TextID FirstRechangeConfirm; // 0x28
		::RPG::Client::TextID GiftName; // 0x38
		::System::UInt32 GiftType; // 0x48
		::System::UInt32 NormalCharge; // 0x4C
		::System::UInt32 FirstCharge; // 0x50
		::System::UInt32 ListOrder; // 0x54
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
