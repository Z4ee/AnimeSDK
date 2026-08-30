#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG_METHOD_6_62AD735DD9AF2EE1_OFFSET UNITYSDK_OFFSET(0x1D14A190)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG_METHOD_6_C28BE9877C542645_OFFSET UNITYSDK_OFFSET(0x1D149EA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionDelEquipConfig_TypeDefinitionIndex = 19094;

	class GridFightActionDelEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_62AD735DD9AF2EE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG_METHOD_6_62AD735DD9AF2EE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C28BE9877C542645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELEQUIPCONFIG_METHOD_6_C28BE9877C542645_OFFSET))(a1, a2);
		}
	};
}
