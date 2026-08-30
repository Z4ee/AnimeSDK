#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_6_81C427E4B5555A09_OFFSET UNITYSDK_OFFSET(0x1D08E7A0)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_6_8F9AFEBC755E380D_OFFSET UNITYSDK_OFFSET(0x1D08E7F0)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08E7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMaxProgressMainTraitConfig_TypeDefinitionIndex = 16459;

	class FateParamMaxProgressMainTraitConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_81C427E4B5555A09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_6_81C427E4B5555A09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8F9AFEBC755E380D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_6_8F9AFEBC755E380D_OFFSET))(a1, a2);
		}
	};
}
