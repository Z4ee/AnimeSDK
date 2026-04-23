#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESPECIALCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A15410)
#define RPG_GAMECORE_IDLELIVESPECIALCHATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpecialChatRow_TypeDefinitionIndex = 11225;

	class IdleLiveSpecialChatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChatList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 RepeatCount; // 0x1C
		::System::UInt32 TriggerID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Single Interval; // 0x28
		::System::Boolean IsExclusive; // 0x2C
		::System::Single FlySpeed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALCHATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpecialChatRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpecialChatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALCHATROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
