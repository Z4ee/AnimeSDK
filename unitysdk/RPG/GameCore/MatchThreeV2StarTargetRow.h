#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2StarTargetFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEV2STARTARGETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D252C80)
#define RPG_GAMECORE_MATCHTHREEV2STARTARGETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D252EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2StarTargetRow_TypeDefinitionIndex = 11925;

	class MatchThreeV2StarTargetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishParamList; // 0x10
		::System::UInt32 StarTargetID; // 0x18
		::RPG::GameCore::MatchThreeV2StarTargetFinishType FinishType; // 0x1C
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 Reward; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2STARTARGETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2StarTargetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2StarTargetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2STARTARGETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
