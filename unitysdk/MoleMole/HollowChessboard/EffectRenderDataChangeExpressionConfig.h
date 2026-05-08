#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11758B50)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11758BC0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRenderDataChangeExpressionConfig_TypeDefinitionIndex = 66766;

	class EffectRenderDataChangeExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
