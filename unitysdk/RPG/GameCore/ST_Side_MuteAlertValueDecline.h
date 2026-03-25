#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_02E1E38DBB76F0F1_OFFSET UNITYSDK_OFFSET(0x176995B0)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_5ECDFD9044F436A6_OFFSET UNITYSDK_OFFSET(0x1768D820)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1768D7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_MuteAlertValueDecline_TypeDefinitionIndex = 18396;

	class ST_Side_MuteAlertValueDecline : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_02E1E38DBB76F0F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_02E1E38DBB76F0F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5ECDFD9044F436A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_METHOD_4_5ECDFD9044F436A6_OFFSET))(a1, a2);
		}
	};
}
