#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_B51RACINGDRIVERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E3350)
#define RPG_GAMECORE_B51RACINGDRIVERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingDriverRow_TypeDefinitionIndex = 10956;

	class B51RacingDriverRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* AddStatMap; // 0x10
		::System::String* AvatarIconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 SkillID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGDRIVERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingDriverRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingDriverRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGDRIVERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
