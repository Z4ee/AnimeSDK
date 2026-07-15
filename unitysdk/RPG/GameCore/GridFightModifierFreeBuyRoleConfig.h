#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_1DAD121E65710C0A_OFFSET UNITYSDK_OFFSET(0x1D069F10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_8422E1E3944CE266_OFFSET UNITYSDK_OFFSET(0x1D069F60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFreeBuyRoleConfig_TypeDefinitionIndex = 18608;

	class GridFightModifierFreeBuyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DAD121E65710C0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_1DAD121E65710C0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8422E1E3944CE266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_8422E1E3944CE266_OFFSET))(a1, a2);
		}
	};
}
