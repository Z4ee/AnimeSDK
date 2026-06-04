#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerBanModEntranceType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERREQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196CAB20)
#define RPG_GAMECORE_DRINKMAKERREQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196CB2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerRequestRow_TypeDefinitionIndex = 12516;

	class DrinkMakerRequestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::Client::TextID RequestShortDesc; // 0x18
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x28
		::RPG::GameCore::DrinkMakerBanModEntranceType BanModeEntrance; // 0x2C
		::System::UInt32 RequestID; // 0x30
		::RPG::Client::TextID RequestDesc; // 0x38
		::System::UInt32 SuccessTip; // 0x48
		::System::UInt32 FailTip; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerRequestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerRequestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
