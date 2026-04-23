#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROWTHTARGETTIMELIMITTOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189E2100)
#define RPG_GAMECORE_GROWTHTARGETTIMELIMITTOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189E2220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GrowthTargetTimeLimitTopRow_TypeDefinitionIndex = 12645;

	class GrowthTargetTimeLimitTopRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModule; // 0x10
		::System::UInt32 GachaID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROWTHTARGETTIMELIMITTOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROWTHTARGETTIMELIMITTOPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
