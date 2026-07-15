#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingStageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C38ACE0)
#define RPG_GAMECORE_CHENLINGSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageRow_TypeDefinitionIndex = 10684;

	class ChenLingStageRow : public ::System::Object
	{
	public:
		::System::String* IconPathInBattle; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID CommanderName; // 0x20
		::System::UInt32 NextID; // 0x30
		::System::UInt32 FinishUnlockDeckID; // 0x34
		::System::UInt32 LockDeckID; // 0x38
		::RPG::GameCore::ChenLingStageType Type; // 0x3C
		::System::UInt32 CampID; // 0x40
		::System::UInt32 UnlockSubMissionID; // 0x44
		::System::UInt32 ID; // 0x48
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
