#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_5ECDFD9044F436A6_OFFSET UNITYSDK_OFFSET(0x1DB441B0)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_E3559661F1ED0DA3_OFFSET UNITYSDK_OFFSET(0x1DB440E0)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB441A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_MuteAlertValueDecline_TypeDefinitionIndex = 19878;

	class ST_Side_MuteAlertValueDecline : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3559661F1ED0DA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_E3559661F1ED0DA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5ECDFD9044F436A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_5ECDFD9044F436A6_OFFSET))(a1, a2);
		}
	};
}
