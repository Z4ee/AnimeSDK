#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_METHOD_3_04E29B1E87E7D968_OFFSET UNITYSDK_OFFSET(0x1C5D01B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_METHOD_3_7B8E94E9DF2C3EA4_OFFSET UNITYSDK_OFFSET(0x1C5D0200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D01F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleDelayGrantConfig_TypeDefinitionIndex = 18713;

	class GridFightModifierAddRoleDelayGrantConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04E29B1E87E7D968(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_METHOD_3_04E29B1E87E7D968_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B8E94E9DF2C3EA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_METHOD_3_7B8E94E9DF2C3EA4_OFFSET))(a1, a2);
		}
	};
}
