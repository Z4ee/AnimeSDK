#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_6_BE8F75A638B45E3F_OFFSET UNITYSDK_OFFSET(0x189C7FE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_6_DA77E606691ED219_OFFSET UNITYSDK_OFFSET(0x189C8290)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C8160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUnlockExpertNumConfig_TypeDefinitionIndex = 18559;

	class GridFightParamGetUnlockExpertNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BE8F75A638B45E3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_6_BE8F75A638B45E3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DA77E606691ED219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_6_DA77E606691ED219_OFFSET))(a1, a2);
		}
	};
}
