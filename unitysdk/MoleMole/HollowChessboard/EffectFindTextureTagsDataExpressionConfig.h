#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x178131C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17813230)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectFindTextureTagsDataExpressionConfig_TypeDefinitionIndex = 59303;

	class EffectFindTextureTagsDataExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
