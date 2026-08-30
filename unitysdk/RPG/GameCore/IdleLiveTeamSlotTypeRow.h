#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A53C0)
#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A55A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotTypeRow_TypeDefinitionIndex = 11701;

	class IdleLiveTeamSlotTypeRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
