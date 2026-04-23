#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188CA860)
#define RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryBuffSlotRow_TypeDefinitionIndex = 10963;

	class FantasticStoryBuffSlotRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockChapterID; // 0x10
		::System::UInt32 BuffSlotID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FantasticStoryBuffSlotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FantasticStoryBuffSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
