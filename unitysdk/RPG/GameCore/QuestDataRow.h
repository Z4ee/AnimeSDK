#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/QuestUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QUESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9AB150)
#define RPG_GAMECORE_QUESTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AB990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestDataRow_TypeDefinitionIndex = 13987;

	class QuestDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockParamList; // 0x10
		::System::String* ImagePath; // 0x18
		::RPG::Client::TextID QuestDisplay; // 0x20
		::RPG::GameCore::QuestUnlockType UnlockType; // 0x30
		::System::UInt32 FinishWayID; // 0x34
		::RPG::Client::TextID QuestTitle; // 0x38
		::System::UInt32 QuestID; // 0x48
		::System::UInt32 GotoID; // 0x4C
		::System::UInt32 QuestType; // 0x50
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
