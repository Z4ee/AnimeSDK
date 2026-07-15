#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }

#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_METHOD_3_4CEA8A3BAF2A1BB9_OFFSET UNITYSDK_OFFSET(0x1BCC0230)
#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_METHOD_3_BD459CE6711B96BC_OFFSET UNITYSDK_OFFSET(0x1BCC02E0)
#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC02D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCurveInfoConfig_TypeDefinitionIndex = 18119;

	class LittleGameCurveInfoConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LittleGameLevelCurveInfo* Curve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CEA8A3BAF2A1BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCurveInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCurveInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_METHOD_3_4CEA8A3BAF2A1BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD459CE6711B96BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCurveInfoConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCurveInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_METHOD_3_BD459CE6711B96BC_OFFSET))(a1, a2);
		}
	};
}
