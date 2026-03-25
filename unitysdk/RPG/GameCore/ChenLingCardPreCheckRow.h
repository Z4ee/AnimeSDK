#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardPreCheckType.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/ChenLingGridStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGCARDPRECHECKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17083C80)
#define RPG_GAMECORE_CHENLINGCARDPRECHECKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17083F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardPreCheckRow_TypeDefinitionIndex = 10341;

	class ChenLingCardPreCheckRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingCardPreCheckType ConditionType; // 0x10
		::RPG::Client::TextID Toast; // 0x18
		::RPG::GameCore::ChenLingCardType UseCardType; // 0x28
		::RPG::GameCore::ChenLingGridStatus TargetGridType; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt32 UseCardID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDPRECHECKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingCardPreCheckRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingCardPreCheckRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDPRECHECKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
