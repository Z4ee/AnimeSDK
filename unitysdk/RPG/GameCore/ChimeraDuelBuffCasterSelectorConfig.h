#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG_METHOD_3_31048B86FB2E6111_OFFSET UNITYSDK_OFFSET(0x170962B0)
#define RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG_METHOD_3_339B613F449DED3C_OFFSET UNITYSDK_OFFSET(0x17096210)
#define RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170962A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffCasterSelectorConfig_TypeDefinitionIndex = 14599;

	class ChimeraDuelBuffCasterSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_339B613F449DED3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffCasterSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffCasterSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG_METHOD_3_339B613F449DED3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31048B86FB2E6111(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffCasterSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffCasterSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCASTERSELECTORCONFIG_METHOD_3_31048B86FB2E6111_OFFSET))(a1, a2);
		}
	};
}
