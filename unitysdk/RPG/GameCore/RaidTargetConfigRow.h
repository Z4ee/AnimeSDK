#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1757EE50)
#define RPG_GAMECORE_RAIDTARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1757F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigRow_TypeDefinitionIndex = 13325;

	class RaidTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::System::UInt32>* HintStep; // 0x20
		::System::UInt32 TargetParam2; // 0x28
		::System::UInt32 IsShowProgress; // 0x2C
		::RPG::GameCore::RaidTargetType TargetType; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID TargetName; // 0x38
		::System::UInt32 RewardID; // 0x48
		::RPG::GameCore::ParamType ParamType; // 0x4C
		::System::Boolean IsInBattle; // 0x50
		::System::UInt32 TargetParam1; // 0x54
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
