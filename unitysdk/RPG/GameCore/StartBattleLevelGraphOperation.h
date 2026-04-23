#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION_METHOD_3_089C1AF7CA38E60C_OFFSET UNITYSDK_OFFSET(0x18E99710)
#define RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION_METHOD_3_582B6197F804978F_OFFSET UNITYSDK_OFFSET(0x18E99790)
#define RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E99760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattleLevelGraphOperation_TypeDefinitionIndex = 22367;

	class StartBattleLevelGraphOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LevelGraphOperationType OperationType; // 0x18
		::System::UInt32 Param; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_089C1AF7CA38E60C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleLevelGraphOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleLevelGraphOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION_METHOD_3_089C1AF7CA38E60C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_582B6197F804978F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleLevelGraphOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleLevelGraphOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLELEVELGRAPHOPERATION_METHOD_3_582B6197F804978F_OFFSET))(a1, a2);
		}
	};
}
