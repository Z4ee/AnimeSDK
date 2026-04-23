#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_12;

#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D76030)
#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D76350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHandBookEventRow_TypeDefinitionIndex = 14249;

	class RogueTournHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_12*>* UnlockNPCProgressIDList; // 0x10
		::System::UInt32 Priority; // 0x18
		::System::UInt32 UnlockDisplayID; // 0x1C
		::System::UInt32 TypeDisplayID; // 0x20
		::System::Boolean IsUsed; // 0x24
		::System::UInt32 EventHandbookID; // 0x28
		::System::UInt32 ImageID; // 0x2C
		::RPG::Client::TextID EventTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournHandBookEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHandBookEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
