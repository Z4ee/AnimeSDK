#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNPERMANENTTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48DE60)
#define RPG_GAMECORE_ROGUETOURNPERMANENTTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournPermanentTalentRow_TypeDefinitionIndex = 14818;

	class RogueTournPermanentTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x18
		::System::String* Icon; // 0x20
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x28
		::RPG::Client::TextID EffectDesc; // 0x30
		::System::Boolean IsImportant; // 0x40
		::System::UInt32 TalentID; // 0x44
		::RPG::Client::TextID EffectTitle; // 0x48
		::RPG::Client::TextID EffectTag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNPERMANENTTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournPermanentTalentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournPermanentTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNPERMANENTTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
