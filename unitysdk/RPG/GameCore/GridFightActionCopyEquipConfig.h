#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_750B81E2167571E9_OFFSET UNITYSDK_OFFSET(0x1899F5F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_8AB297AD2A439022_OFFSET UNITYSDK_OFFSET(0x1899FFA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899F550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyEquipConfig_TypeDefinitionIndex = 18335;

	class GridFightActionCopyEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8AB297AD2A439022(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_8AB297AD2A439022_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_750B81E2167571E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_750B81E2167571E9_OFFSET))(a1, a2);
		}
	};
}
