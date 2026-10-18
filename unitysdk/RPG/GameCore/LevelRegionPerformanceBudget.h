#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79E390)
#define RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D79E3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionPerformanceBudget_TypeDefinitionIndex = 17390;

	class LevelRegionPerformanceBudget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionPerformanceBudget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionPerformanceBudget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
