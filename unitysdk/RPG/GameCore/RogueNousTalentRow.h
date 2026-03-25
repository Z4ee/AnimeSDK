#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176484D0)
#define RPG_GAMECORE_ROGUENOUSTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17648D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousTalentRow_TypeDefinitionIndex = 13661;

	class RogueNousTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x20
		::System::String* Icon; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x30
		::RPG::Client::TextID EffectDesc; // 0x38
		::RPG::Client::TextID EffectTag; // 0x48
		::System::UInt32 TalentID; // 0x58
		::RPG::Client::TextID EffectTitle; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
