#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChessStageUnitInfo; }

#define RPG_GAMECORE_CHESSSTAGESPAWNGROUPCONFIG_METHOD_2_F788DC1BF162A8D7_OFFSET UNITYSDK_OFFSET(0x1708E500)
#define RPG_GAMECORE_CHESSSTAGESPAWNGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708E790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessStageSpawnGroupConfig_TypeDefinitionIndex = 16196;

	class ChessStageSpawnGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Time; // 0x10
		::System::Int32 BatchCount; // 0x18
		::RPG::GameCore::FixPoint BatchInterval; // 0x20
		::Il2CppArray<::RPG::GameCore::ChessStageUnitInfo*>* UnitList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGESPAWNGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F788DC1BF162A8D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessStageSpawnGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessStageSpawnGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGESPAWNGROUPCONFIG_METHOD_2_F788DC1BF162A8D7_OFFSET))(a1, a2);
		}
	};
}
