#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_METHOD_3_0491617E6351DB34_OFFSET UNITYSDK_OFFSET(0x1D733CA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_METHOD_3_61794CDD161188B8_OFFSET UNITYSDK_OFFSET(0x1D733C50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D733C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterAddRoleConfig_TypeDefinitionIndex = 19370;

	class GridFightModifierExecActionAfterAddRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61794CDD161188B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_METHOD_3_61794CDD161188B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0491617E6351DB34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_METHOD_3_0491617E6351DB34_OFFSET))(a1, a2);
		}
	};
}
