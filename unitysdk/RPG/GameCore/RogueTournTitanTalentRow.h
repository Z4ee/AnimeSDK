#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNTITANTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BCFA50)
#define RPG_GAMECORE_ROGUETOURNTITANTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCFED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournTitanTalentRow_TypeDefinitionIndex = 14340;

	class RogueTournTitanTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x18
		::System::String* ActJson; // 0x20
		::System::String* TalentIconPath; // 0x28
		::RPG::Client::TextID TalentDesc; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 PreID; // 0x44
		::RPG::Client::TextID TalentTitle; // 0x48
		::RPG::Client::TextID ActTitle; // 0x58
		::RPG::GameCore::RogueTitanType TitanType; // 0x68
		::System::UInt32 Level; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournTitanTalentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournTitanTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
