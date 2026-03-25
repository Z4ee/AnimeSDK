#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172860E0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172869B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageRouteConfigRow_TypeDefinitionIndex = 12447;

	class GridFightStageRouteConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IntensifyBuffPoolIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::Il2CppArray<::System::UInt32>* PenaltyBonusRuleIDList; // 0x20
		::RPG::GameCore::GridFightNodeType NodeType; // 0x28
		::System::UInt32 ChapterID; // 0x2C
		::System::UInt32 StageID; // 0x30
		::System::UInt32 NodeTemplateID; // 0x34
		::System::UInt32 BasicGoldRewardNum; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 IsAugment; // 0x40
		::System::UInt32 SectionID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightStageRouteConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageRouteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
