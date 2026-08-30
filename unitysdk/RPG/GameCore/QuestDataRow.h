#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/QuestUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QUESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18DD80)
#define RPG_GAMECORE_QUESTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestDataRow_TypeDefinitionIndex = 14405;

	class QuestDataRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockParamList; // 0x18
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 FinishWayID; // 0x24
		::System::UInt32 QuestType; // 0x28
		::RPG::GameCore::QuestUnlockType UnlockType; // 0x2C
		::RPG::Client::TextID QuestDisplay; // 0x30
		::RPG::Client::TextID QuestTitle; // 0x40
		::System::UInt32 GotoID; // 0x50
		::System::UInt32 RewardID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
