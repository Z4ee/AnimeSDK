#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SilverWolfSubTabType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C88050)
#define RPG_GAMECORE_SILVERWOLFSUBTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C88360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfSubTabRow_TypeDefinitionIndex = 11776;

	class SilverWolfSubTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 UnlockMission; // 0x18
		::System::UInt32 EntranceID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 MappingInfoID; // 0x24
		::RPG::Client::TextID Title; // 0x28
		::RPG::GameCore::SilverWolfSubTabType TabType; // 0x38
		::System::UInt32 FinalQuest; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SilverWolfSubTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfSubTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
