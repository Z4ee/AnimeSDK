#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FARMELEMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171BE040)
#define RPG_GAMECORE_FARMELEMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171BE9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmElementConfigRow_TypeDefinitionIndex = 11462;

	class FarmElementConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x18
		::Il2CppArray<::System::UInt32>* DropList; // 0x20
		::System::UInt32 StaminaCost; // 0x28
		::System::Boolean AutoObtainDamageType; // 0x2C
		::System::UInt32 MaxChallengeCnt; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 StageID; // 0x38
		::System::UInt32 MappingInfoID; // 0x3C
		::System::UInt32 WorldLevel; // 0x40
		::RPG::Client::TextID BuffDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FarmElementConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FarmElementConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
