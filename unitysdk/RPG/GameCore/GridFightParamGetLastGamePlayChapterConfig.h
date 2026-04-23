#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_6_73EA2BF6DEC68E5E_OFFSET UNITYSDK_OFFSET(0x189C4620)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_6_E46B8544E00B1B78_OFFSET UNITYSDK_OFFSET(0x189C48D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C47A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastGamePlayChapterConfig_TypeDefinitionIndex = 18552;

	class GridFightParamGetLastGamePlayChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_73EA2BF6DEC68E5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_6_73EA2BF6DEC68E5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E46B8544E00B1B78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_6_E46B8544E00B1B78_OFFSET))(a1, a2);
		}
	};
}
