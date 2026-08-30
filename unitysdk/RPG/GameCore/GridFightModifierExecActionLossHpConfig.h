#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_METHOD_3_3B5575FA09A82E8E_OFFSET UNITYSDK_OFFSET(0x1D159640)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_METHOD_3_6FC2DC3870F584CA_OFFSET UNITYSDK_OFFSET(0x1D159690)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionLossHpConfig_TypeDefinitionIndex = 19187;

	class GridFightModifierExecActionLossHpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B5575FA09A82E8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_METHOD_3_3B5575FA09A82E8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FC2DC3870F584CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_METHOD_3_6FC2DC3870F584CA_OFFSET))(a1, a2);
		}
	};
}
