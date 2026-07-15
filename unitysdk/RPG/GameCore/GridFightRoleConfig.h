#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLECONFIG_METHOD_2_022F94E94F2B1ED8_OFFSET UNITYSDK_OFFSET(0x1D072810)
#define RPG_GAMECORE_GRIDFIGHTROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D072930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConfig_TypeDefinitionIndex = 10200;

	class GridFightRoleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleId; // 0x10
		::System::UInt32 Star; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_022F94E94F2B1ED8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIG_METHOD_2_022F94E94F2B1ED8_OFFSET))(a1, a2);
		}
	};
}
