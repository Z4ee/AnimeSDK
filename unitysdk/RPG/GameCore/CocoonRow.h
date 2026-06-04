#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CocoonType.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COCOONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196658A0)
#define RPG_GAMECORE_COCOONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196662D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CocoonRow_TypeDefinitionIndex = 11952;

	class CocoonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x18
		::Il2CppArray<::System::UInt32>* DropList; // 0x20
		::Il2CppArray<::System::UInt32>* StageIDList; // 0x28
		::Il2CppArray<::System::Int32>* OpenDate; // 0x30
		::RPG::Client::TextID BuffDesc; // 0x38
		::System::UInt32 MaxChallengeCnt; // 0x48
		::System::Boolean AutoObtainDamageType; // 0x4C
		::RPG::GameCore::CocoonType CocoonType; // 0x50
		::System::UInt32 PropID; // 0x54
		::System::UInt32 StageID; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 MappingInfoID; // 0x60
		::System::UInt32 StaminaCost; // 0x64
		::RPG::GameCore::FarmTypeConfig FarmType; // 0x68
		::System::UInt32 WorldLevel; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CocoonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CocoonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
