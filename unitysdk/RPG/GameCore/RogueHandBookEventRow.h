#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_14;

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D934010)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9343F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventRow_TypeDefinitionIndex = 14666;

	class RogueHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventTypeList; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_14*>* UnlockNPCProgressIDList; // 0x18
		::System::UInt32 EventReward; // 0x20
		::System::UInt32 ImageID; // 0x24
		::System::UInt32 EventHandbookID; // 0x28
		::System::UInt32 Order; // 0x2C
		::RPG::Client::TextID EventTitle; // 0x30
		::RPG::Client::TextID EventType; // 0x40
		::RPG::Client::TextID UnlockHintDesc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueHandBookEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
