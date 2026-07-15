#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_METHOD_3_B1BB0162A4B3B99C_OFFSET UNITYSDK_OFFSET(0x1D06AB00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_METHOD_3_BDE75F574B1C08D8_OFFSET UNITYSDK_OFFSET(0x1D06AB50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06AB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReviveGlobalHpConfig_TypeDefinitionIndex = 18634;

	class GridFightModifierReviveGlobalHpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1BB0162A4B3B99C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_METHOD_3_B1BB0162A4B3B99C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDE75F574B1C08D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_METHOD_3_BDE75F574B1C08D8_OFFSET))(a1, a2);
		}
	};
}
