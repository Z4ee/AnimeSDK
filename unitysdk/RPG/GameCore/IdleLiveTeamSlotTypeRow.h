#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A16E20)
#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A17000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotTypeRow_TypeDefinitionIndex = 11164;

	class IdleLiveTeamSlotTypeRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
