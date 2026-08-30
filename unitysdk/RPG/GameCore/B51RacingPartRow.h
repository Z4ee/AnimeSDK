#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_B51RACINGPARTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E3BA0)
#define RPG_GAMECORE_B51RACINGPARTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingPartRow_TypeDefinitionIndex = 10948;

	class B51RacingPartRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* AddStatTierMap; // 0x18
		::System::String* AssetPath; // 0x20
		::RPG::GameCore::B51RacingPartType Type; // 0x28
		::System::UInt32 SkillID; // 0x2C
		::System::Boolean IsDefault; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGPARTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingPartRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingPartRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGPARTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
