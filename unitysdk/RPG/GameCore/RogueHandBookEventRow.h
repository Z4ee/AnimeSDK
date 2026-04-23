#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_12;

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D18CC0)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D190B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventRow_TypeDefinitionIndex = 14034;

	class RogueHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventTypeList; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_12*>* UnlockNPCProgressIDList; // 0x18
		::RPG::Client::TextID UnlockHintDesc; // 0x20
		::System::UInt32 EventHandbookID; // 0x30
		::System::UInt32 Order; // 0x34
		::RPG::Client::TextID EventType; // 0x38
		::RPG::Client::TextID EventTitle; // 0x48
		::System::UInt32 EventReward; // 0x58
		::System::UInt32 ImageID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueHandBookEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
