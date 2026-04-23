#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188CCAA0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188CD8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmStageUnlockConfigRow_TypeDefinitionIndex = 11860;

	class FarmStageUnlockConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FarmGachaIDList; // 0x10
		::System::String* UIEntranceBgPath; // 0x18
		::System::String* UIEnviromentConfig; // 0x20
		::System::UInt32 UnlockWorldLevelStart; // 0x28
		::System::UInt32 UIEnterBattleArea; // 0x2C
		::System::UInt32 UIEntranceParam; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 OpenInAdvanceLimitActivityModuleID; // 0x38
		::RPG::GameCore::FarmTypeConfig FarmType; // 0x3C
		::System::UInt32 OpenInAdvanceLimitUnlockID; // 0x40
		::System::UInt32 UnlockWorldLevelEnd; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FarmStageUnlockConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FarmStageUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
