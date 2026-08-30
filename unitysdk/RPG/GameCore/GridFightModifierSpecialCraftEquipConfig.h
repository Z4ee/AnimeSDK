#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG_METHOD_3_3496065CEE21EE79_OFFSET UNITYSDK_OFFSET(0x1D15B0C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG_METHOD_3_C680AAD647922875_OFFSET UNITYSDK_OFFSET(0x1D15B070)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15B0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecialCraftEquipConfig_TypeDefinitionIndex = 19166;

	class GridFightModifierSpecialCraftEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C680AAD647922875(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecialCraftEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecialCraftEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG_METHOD_3_C680AAD647922875_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3496065CEE21EE79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecialCraftEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecialCraftEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIALCRAFTEQUIPCONFIG_METHOD_3_3496065CEE21EE79_OFFSET))(a1, a2);
		}
	};
}
