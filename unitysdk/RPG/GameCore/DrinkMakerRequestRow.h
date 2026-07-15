#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerBanModEntranceType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERREQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB268B0)
#define RPG_GAMECORE_DRINKMAKERREQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB27080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerRequestRow_TypeDefinitionIndex = 12653;

	class DrinkMakerRequestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::Client::TextID RequestDesc; // 0x18
		::System::UInt32 SuccessTip; // 0x28
		::System::UInt32 FailTip; // 0x2C
		::RPG::Client::TextID RequestShortDesc; // 0x30
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x40
		::RPG::GameCore::DrinkMakerBanModEntranceType BanModeEntrance; // 0x44
		::System::UInt32 RequestID; // 0x48

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
