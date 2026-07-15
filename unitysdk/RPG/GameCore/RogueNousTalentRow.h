#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D174800)
#define RPG_GAMECORE_ROGUENOUSTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1750C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousTalentRow_TypeDefinitionIndex = 14342;

	class RogueNousTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x28
		::System::String* Icon; // 0x30
		::System::UInt32 TalentID; // 0x38
		::RPG::Client::TextID EffectDesc; // 0x40
		::RPG::Client::TextID EffectTag; // 0x50
		::RPG::Client::TextID EffectTitle; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousTalentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
