#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECORDOPERATION_METHOD_2_CEFCE0F8A97532D7_OFFSET UNITYSDK_OFFSET(0x1DB7C020)
#define RPG_GAMECORE_RECORDOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordOperation_TypeDefinitionIndex = 17990;

	class RecordOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TurnCounter; // 0x10
		::RPG::GameCore::TurnState State; // 0x14
		::System::UInt32 OpCounter; // 0x18
		::System::UInt16 OpType; // 0x1C
		::System::Int32 SkillIndex; // 0x20
		::System::UInt32 ActionEntityID; // 0x24
		::System::UInt32 TargetEntityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CEFCE0F8A97532D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDOPERATION_METHOD_2_CEFCE0F8A97532D7_OFFSET))(a1, a2);
		}
	};
}
