#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }

#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_2D6E774D549B2975_OFFSET UNITYSDK_OFFSET(0x1D7B2450)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_CEB754F3F93AA827_OFFSET UNITYSDK_OFFSET(0x1D7B6210)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B03E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelCurveInfo_TypeDefinitionIndex = 18850;

	class LittleGameLevelCurveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsClosed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D6E774D549B2975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelCurveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_2D6E774D549B2975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CEB754F3F93AA827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_CEB754F3F93AA827_OFFSET))(a1, a2);
		}
	};
}
