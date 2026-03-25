#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHESSSTAGEUNITINFO_METHOD_2_4D0745202E2FC733_OFFSET UNITYSDK_OFFSET(0x1708E7B0)
#define RPG_GAMECORE_CHESSSTAGEUNITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1708E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessStageUnitInfo_TypeDefinitionIndex = 16195;

	class ChessStageUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::FixVec2 Pos; // 0x18
		::RPG::GameCore::FixPoint DirAngle; // 0x28
		::System::UInt32 UnitID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGEUNITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D0745202E2FC733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessStageUnitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessStageUnitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGEUNITINFO_METHOD_2_4D0745202E2FC733_OFFSET))(a1, a2);
		}
	};
}
