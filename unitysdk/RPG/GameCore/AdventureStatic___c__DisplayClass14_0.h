#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelCurveInfo; }

#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x195B44B0)
#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS14_0__FINDLEVELCURVEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x195B44C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic___c__DisplayClass14_0_TypeDefinitionIndex = 56383;

	class AdventureStatic___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 curveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindLevelCurveInfo_b__0(::RPG::GameCore::LevelCurveInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS14_0__FINDLEVELCURVEINFO_B__0_OFFSET))(this, a1);
		}
	};
}
