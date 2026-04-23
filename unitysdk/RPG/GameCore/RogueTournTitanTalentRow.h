#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNTITANTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D7C2E0)
#define RPG_GAMECORE_ROGUETOURNTITANTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7C770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournTitanTalentRow_TypeDefinitionIndex = 14284;

	class RogueTournTitanTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x18
		::System::String* TalentIconPath; // 0x20
		::System::String* ActJson; // 0x28
		::RPG::GameCore::RogueTitanType TitanType; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID TalentDesc; // 0x38
		::System::UInt32 Level; // 0x48
		::System::UInt32 PreID; // 0x4C
		::RPG::Client::TextID ActTitle; // 0x50
		::RPG::Client::TextID TalentTitle; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournTitanTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournTitanTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
