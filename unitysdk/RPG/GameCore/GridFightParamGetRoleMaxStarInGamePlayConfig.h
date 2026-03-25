#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_A905C7DE890CDDC2_OFFSET UNITYSDK_OFFSET(0x172730F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_EBC4CB53C91C1CAC_OFFSET UNITYSDK_OFFSET(0x172733A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17273270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleMaxStarInGamePlayConfig_TypeDefinitionIndex = 17914;

	class GridFightParamGetRoleMaxStarInGamePlayConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A905C7DE890CDDC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_A905C7DE890CDDC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EBC4CB53C91C1CAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_EBC4CB53C91C1CAC_OFFSET))(a1, a2);
		}
	};
}
