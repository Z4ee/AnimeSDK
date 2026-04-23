#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2StarTargetFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEV2STARTARGETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC70C0)
#define RPG_GAMECORE_MATCHTHREEV2STARTARGETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC7300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2StarTargetRow_TypeDefinitionIndex = 11389;

	class MatchThreeV2StarTargetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishParamList; // 0x10
		::System::UInt32 Reward; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 StarTargetID; // 0x30
		::RPG::GameCore::MatchThreeV2StarTargetFinishType FinishType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2STARTARGETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2StarTargetRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2StarTargetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2STARTARGETROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
