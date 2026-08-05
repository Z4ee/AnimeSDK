#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_16.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_HASFALSEMVPCONDITION_OFFSET UNITYSDK_OFFSET(0x7CED00)
#define MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_HASMVPCONDITION_OFFSET UNITYSDK_OFFSET(0x7CECF0)
#define MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_PARSEFROMFLOORTEMPLATE_OFFSET UNITYSDK_OFFSET(0x134C8470)

namespace MoleMole
{
	inline static constexpr unsigned int BabelTowerTemplateOverrideData_TypeDefinitionIndex = 75149;

	struct alignas(8) BabelTowerTemplateOverrideData
	{
		::System::Int32 LevelAdjustID; // 0x10
		::System::String* MvpCondition; // 0x18
		::System::String* FalseMvpCondition; // 0x20
		::System::Int32 CardSetID; // 0x28
		::System::Int32 LevelOpenPerformance; // 0x2C
		::System::Int32 MonsterLevel; // 0x30
		::System::Int32 DamageFinalScorePercentage; // 0x34
		::System::Int32 HpFinalScorePercentage; // 0x38
		::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* TimeFinalScoreRatio; // 0x40
		::System::String* TimeDialogText; // 0x48
		::System::Int32 NoDamageFinalScore; // 0x50
		::System::Int32 TreasureScore; // 0x54
		::System::String* LevelAdjustDesc; // 0x58
		::System::String* LevelAdjustRefDesc; // 0x60
		::System::String* DemonizeDesc; // 0x68
		::System::String* DemonizeRefDesc; // 0x70

		::System::Boolean HasMvpCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_HASMVPCONDITION_OFFSET))(this);
		}

		::System::Boolean HasFalseMvpCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_HASFALSEMVPCONDITION_OFFSET))(this);
		}

		static ::MoleMole::BabelTowerTemplateOverrideData ParseFromFloorTemplate(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* template_)
		{
			return ((::MoleMole::BabelTowerTemplateOverrideData(*)(::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERTEMPLATEOVERRIDEDATA_PARSEFROMFLOORTEMPLATE_OFFSET))(template_);
		}
	};
}
