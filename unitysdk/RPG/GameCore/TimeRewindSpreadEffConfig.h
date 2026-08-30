#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_METHOD_2_93FA56BA6F44A012_OFFSET UNITYSDK_OFFSET(0x1D5CF0A0)
#define RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSpreadEffConfig_TypeDefinitionIndex = 16432;

	class TimeRewindSpreadEffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BaseRange; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_93FA56BA6F44A012(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSpreadEffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSpreadEffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_METHOD_2_93FA56BA6F44A012_OFFSET))(a1, a2);
		}
	};
}
