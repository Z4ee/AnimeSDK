#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1C6FF0)
#define RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelStageUnlockConfigRow_TypeDefinitionIndex = 12088;

	class WorldLevelStageUnlockConfigRow : public ::System::Object
	{
	public:
		::System::String* UIEntranceBgPath; // 0x10
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 UIEntranceParam; // 0x1C
		::System::UInt32 UIEnviromentParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WorldLevelStageUnlockConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WorldLevelStageUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
