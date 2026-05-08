#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x10BC5870)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC58E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenPlayKeyChangedExpressionConfig_TypeDefinitionIndex = 46839;

	class ScreenPlayKeyChangedExpressionConfig : public ::System::Object
	{
	public:
		::System::Boolean TargetValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENPLAYKEYCHANGEDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
