#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x129AA830)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x129AA8A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRenderDataChangeExpressionConfig_TypeDefinitionIndex = 68694;

	class EffectRenderDataChangeExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_355* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
