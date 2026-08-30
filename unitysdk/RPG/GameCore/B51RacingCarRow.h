#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingCarType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_B51RACINGCARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE5CA10)
#define RPG_GAMECORE_B51RACINGCARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5CD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingCarRow_TypeDefinitionIndex = 10946;

	class B51RacingCarRow : public ::System::Object
	{
	public:
		::System::String* InitHexColor; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* StatValueMap; // 0x18
		::Il2CppArray<::System::UInt32>* PartIDList; // 0x20
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x28
		::RPG::GameCore::B51RacingCarType Type; // 0x30
		::System::UInt32 CarNumber; // 0x34
		::System::UInt32 TeamID; // 0x38
		::System::UInt32 AIRole; // 0x3C
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGCARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingCarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingCarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGCARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
