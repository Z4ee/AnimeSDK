#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_6_130643BD4A5C43C5_OFFSET UNITYSDK_OFFSET(0x1E0CC380)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_6_51C134C2E14D8C49_OFFSET UNITYSDK_OFFSET(0x1E0CC3D0)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActModifyLevelParamConfig_TypeDefinitionIndex = 19001;

	class FateActModifyLevelParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_130643BD4A5C43C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyLevelParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyLevelParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_6_130643BD4A5C43C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_51C134C2E14D8C49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_6_51C134C2E14D8C49_OFFSET))(a1, a2);
		}
	};
}
