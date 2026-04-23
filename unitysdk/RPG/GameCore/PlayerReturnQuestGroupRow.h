#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C34C00)
#define RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C34D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnQuestGroupRow_TypeDefinitionIndex = 13730;

	class PlayerReturnQuestGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockTime; // 0x10
		::System::UInt32 GroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnQuestGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnQuestGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
