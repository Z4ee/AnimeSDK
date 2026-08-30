#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_B51RACINGDEVELOPMENTACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E3160)
#define RPG_GAMECORE_B51RACINGDEVELOPMENTACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingDevelopmentActionRow_TypeDefinitionIndex = 10954;

	class B51RacingDevelopmentActionRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* AddStatValueMap; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGDEVELOPMENTACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingDevelopmentActionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingDevelopmentActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGDEVELOPMENTACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
