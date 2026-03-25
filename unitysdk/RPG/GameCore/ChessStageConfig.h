#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class ChessStageSpawnGroupConfig; }

#define RPG_GAMECORE_CHESSSTAGECONFIG_METHOD_2_0FC03748F1C8E313_OFFSET UNITYSDK_OFFSET(0x1708E1F0)
#define RPG_GAMECORE_CHESSSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708E3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessStageConfig_TypeDefinitionIndex = 16197;

	class ChessStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x18
		::RPG::GameCore::FixVec2 ChessSize; // 0x20
		::Il2CppArray<::RPG::GameCore::ChessStageSpawnGroupConfig*>* SpawnGroupList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0FC03748F1C8E313(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGECONFIG_METHOD_2_0FC03748F1C8E313_OFFSET))(a1, a2);
		}
	};
}
