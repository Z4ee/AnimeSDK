#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D19D4F0)
#define RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19D6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChatStoryPhaseRow_TypeDefinitionIndex = 11759;

	class IdleLiveChatStoryPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChatList; // 0x10
		::System::Single FlySpeed; // 0x18
		::System::Single Interval; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveChatStoryPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveChatStoryPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
