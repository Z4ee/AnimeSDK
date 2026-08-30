#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D198380)
#define RPG_GAMECORE_RAIDTARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D198D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigRow_TypeDefinitionIndex = 14432;

	class RaidTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HintStep; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::RPG::Client::TextID TargetName; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 TargetParam2; // 0x3C
		::System::UInt32 RewardID; // 0x40
		::RPG::GameCore::RaidTargetType TargetType; // 0x44
		::RPG::Client::TextID TargetNameSimple; // 0x48
		::RPG::GameCore::ParamType ParamType; // 0x58
		::System::UInt32 IsShowProgress; // 0x5C
		::System::Boolean IsInBattle; // 0x60
		::System::UInt32 TargetParam1; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidTargetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
