#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTENTITYIDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x19B29720)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTENTITYIDEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B29790)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectEntityIDExpressionConfig_TypeDefinitionIndex = 71620;

	class EffectEntityIDExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTENTITYIDEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_355* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTENTITYIDEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
