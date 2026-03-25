#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelCurveInfo; }

#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS15_0__APPLYLEVELCURVE_B__0_OFFSET UNITYSDK_OFFSET(0xA869E00)
#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA869DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic___c__DisplayClass15_0_TypeDefinitionIndex = 47685;

	class AdventureStatic___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 curveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyLevelCurve_b__0(::RPG::GameCore::LevelCurveInfo* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS15_0__APPLYLEVELCURVE_B__0_OFFSET))(this, item);
		}
	};
}
