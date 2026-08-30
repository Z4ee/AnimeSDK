#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_AC4936E90CC9EA5A_OFFSET UNITYSDK_OFFSET(0x1D158130)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_FC8694CFA2F1E61E_OFFSET UNITYSDK_OFFSET(0x1D1580E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndDressEquipConfig_TypeDefinitionIndex = 19198;

	class GridFightModifierAddNpcAndDressEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC8694CFA2F1E61E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_FC8694CFA2F1E61E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC4936E90CC9EA5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_AC4936E90CC9EA5A_OFFSET))(a1, a2);
		}
	};
}
