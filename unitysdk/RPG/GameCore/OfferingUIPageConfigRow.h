#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199D4D50)
#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199D5230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingUIPageConfigRow_TypeDefinitionIndex = 13625;

	class OfferingUIPageConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID CostTitle; // 0x28
		::RPG::Client::TextID MaxTip; // 0x38
		::RPG::Client::TextID LongTailDesc; // 0x48
		::RPG::Client::TextID LevelTitle; // 0x58
		::RPG::Client::TextID LongTailTitle; // 0x68
		::RPG::Client::TextID SubmitBtnName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OfferingUIPageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfferingUIPageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
