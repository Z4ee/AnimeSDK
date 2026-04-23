#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }

#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_435B8C2FCD02CF71_OFFSET UNITYSDK_OFFSET(0x18A6A850)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_CEB754F3F93AA827_OFFSET UNITYSDK_OFFSET(0x18A6C490)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A62210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelCurveInfo_TypeDefinitionIndex = 17910;

	class LittleGameLevelCurveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsClosed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_435B8C2FCD02CF71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelCurveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_435B8C2FCD02CF71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CEB754F3F93AA827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_METHOD_2_CEB754F3F93AA827_OFFSET))(a1, a2);
		}
	};
}
