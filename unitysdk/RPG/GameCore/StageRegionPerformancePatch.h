#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_METHOD_2_872ACE8EFB2C3A0D_OFFSET UNITYSDK_OFFSET(0x1776C1B0)
#define RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1776C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionPerformancePatch_TypeDefinitionIndex = 17606;

	class StageRegionPerformancePatch : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int16 MaxPerObjectShadowCount; // 0x10
		::System::Int16 DecEntityLodQualityPlatform; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_872ACE8EFB2C3A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRegionPerformancePatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRegionPerformancePatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_METHOD_2_872ACE8EFB2C3A0D_OFFSET))(a1, a2);
		}
	};
}
