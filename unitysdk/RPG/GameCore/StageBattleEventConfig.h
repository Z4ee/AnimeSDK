#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_METHOD_2_8E2FC482D3B6D76A_OFFSET UNITYSDK_OFFSET(0x1B0AA840)
#define RPG_GAMECORE_STAGEBATTLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBattleEventConfig_TypeDefinitionIndex = 22614;

	class StageBattleEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EventID; // 0x10
		::System::Int32 DurationMin; // 0x14
		::System::Int32 DurationMax; // 0x18
		::RPG::GameCore::FixPoint Probability; // 0x20
		::System::Int32 MinCD; // 0x28
		::System::Int32 MaxGap; // 0x2C
		::System::Boolean TriggerOnStart; // 0x30
		::System::Int32 RankLevel; // 0x34
		::System::Int32 MaxCreationCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E2FC482D3B6D76A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageBattleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageBattleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_METHOD_2_8E2FC482D3B6D76A_OFFSET))(a1, a2);
		}
	};
}
