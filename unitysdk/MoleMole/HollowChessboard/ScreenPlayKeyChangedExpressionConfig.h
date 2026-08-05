#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x17908920)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17908990)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenPlayKeyChangedExpressionConfig_TypeDefinitionIndex = 54372;

	class ScreenPlayKeyChangedExpressionConfig : public ::System::Object
	{
	public:
		::System::Boolean TargetValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_355* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
