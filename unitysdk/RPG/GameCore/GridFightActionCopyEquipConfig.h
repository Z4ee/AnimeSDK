#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_750B81E2167571E9_OFFSET UNITYSDK_OFFSET(0x1D95F9B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_CF53F6DEAB492665_OFFSET UNITYSDK_OFFSET(0x1D95FC00)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyEquipConfig_TypeDefinitionIndex = 19068;

	class GridFightActionCopyEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CF53F6DEAB492665(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_CF53F6DEAB492665_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_750B81E2167571E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_6_750B81E2167571E9_OFFSET))(a1, a2);
		}
	};
}
