#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A12BB0)
#define RPG_GAMECORE_IDLELIVEMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A12DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveMessageRow_TypeDefinitionIndex = 11229;

	class IdleLiveMessageRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 TriggerID; // 0x14
		::System::UInt32 MessageID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::UInt32 StartContentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveMessageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveMessageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
