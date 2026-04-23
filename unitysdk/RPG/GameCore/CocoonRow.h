#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CocoonType.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COCOONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18824AB0)
#define RPG_GAMECORE_COCOONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18825540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CocoonRow_TypeDefinitionIndex = 11857;

	class CocoonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* OpenDate; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::Il2CppArray<::System::UInt32>* StageIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x28
		::Il2CppArray<::System::UInt32>* DropList; // 0x30
		::System::Boolean AutoObtainDamageType; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::GameCore::CocoonType CocoonType; // 0x40
		::System::UInt32 StageID; // 0x44
		::System::UInt32 PropID; // 0x48
		::System::UInt32 MappingInfoID; // 0x4C
		::System::UInt32 MaxChallengeCnt; // 0x50
		::RPG::GameCore::FarmTypeConfig FarmType; // 0x54
		::System::UInt32 WorldLevel; // 0x58
		::System::UInt32 StaminaCost; // 0x5C
		::RPG::Client::TextID BuffDesc; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CocoonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CocoonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
