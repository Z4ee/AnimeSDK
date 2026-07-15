#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_METHOD_3_B10747706E5463E1_OFFSET UNITYSDK_OFFSET(0x1C5D0020)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_METHOD_3_B10F52ABD77DE0BD_OFFSET UNITYSDK_OFFSET(0x1C5CFFD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndUnDressEquipConfig_TypeDefinitionIndex = 18674;

	class GridFightModifierAddNpcAndUnDressEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B10F52ABD77DE0BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_METHOD_3_B10F52ABD77DE0BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B10747706E5463E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_METHOD_3_B10747706E5463E1_OFFSET))(a1, a2);
		}
	};
}
