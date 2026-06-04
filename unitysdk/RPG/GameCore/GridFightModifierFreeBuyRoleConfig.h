#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_59AE2875D934308F_OFFSET UNITYSDK_OFFSET(0x197F2720)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_8422E1E3944CE266_OFFSET UNITYSDK_OFFSET(0x197ED450)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197ED400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFreeBuyRoleConfig_TypeDefinitionIndex = 18363;

	class GridFightModifierFreeBuyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59AE2875D934308F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_59AE2875D934308F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8422E1E3944CE266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_METHOD_3_8422E1E3944CE266_OFFSET))(a1, a2);
		}
	};
}
