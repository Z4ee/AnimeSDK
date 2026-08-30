#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYACTIVITYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBD03D0)
#define RPG_GAMECORE_ALLEYACTIVITYQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD05C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyActivityQuestRow_TypeDefinitionIndex = 12544;

	class AlleyActivityQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID MainTabTitle; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 SubTab; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYACTIVITYQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyActivityQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyActivityQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYACTIVITYQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
