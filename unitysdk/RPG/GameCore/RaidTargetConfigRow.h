#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C88BB0)
#define RPG_GAMECORE_RAIDTARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C89560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigRow_TypeDefinitionIndex = 13800;

	class RaidTargetConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::System::UInt32>* HintStep; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::UInt32 IsShowProgress; // 0x28
		::System::UInt32 RewardID; // 0x2C
		::System::Boolean IsInBattle; // 0x30
		::RPG::GameCore::RaidTargetType TargetType; // 0x34
		::RPG::Client::TextID TargetName; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 TargetParam1; // 0x4C
		::System::UInt32 TargetParam2; // 0x50
		::RPG::GameCore::ParamType ParamType; // 0x54
		::RPG::Client::TextID TargetNameSimple; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RaidTargetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
