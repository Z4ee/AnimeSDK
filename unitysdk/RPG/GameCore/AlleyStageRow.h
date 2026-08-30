#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5662D0)
#define RPG_GAMECORE_ALLEYSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C566AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyStageRow_TypeDefinitionIndex = 12548;

	class AlleyStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StageSpecialOrder; // 0x10
		::Il2CppArray<::System::UInt32>* StageAlleyEvent; // 0x18
		::System::UInt32 StageMainMission; // 0x20
		::System::UInt32 StageTarget; // 0x24
		::RPG::Client::TextID StageDesc; // 0x28
		::RPG::Client::TextID StageTitle; // 0x38
		::System::UInt32 StageID; // 0x48
		::System::UInt32 TakeMainMission; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
