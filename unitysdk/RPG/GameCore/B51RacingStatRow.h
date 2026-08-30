#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGSTATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E4420)
#define RPG_GAMECORE_B51RACINGSTATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E4720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingStatRow_TypeDefinitionIndex = 10950;

	class B51RacingStatRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* TierRequireValueList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::Single ExtraRatio; // 0x30
		::RPG::GameCore::B51RacingStatType ID; // 0x34
		::RPG::Client::TextID Desc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSTATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingStatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingStatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSTATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
