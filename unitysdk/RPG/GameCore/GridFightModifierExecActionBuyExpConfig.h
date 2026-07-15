#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_METHOD_3_02BE446FEB437B6E_OFFSET UNITYSDK_OFFSET(0x1C5D1410)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_METHOD_3_070A6C5B98A09B2A_OFFSET UNITYSDK_OFFSET(0x1C5D1460)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D1450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionBuyExpConfig_TypeDefinitionIndex = 18619;

	class GridFightModifierExecActionBuyExpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02BE446FEB437B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_METHOD_3_02BE446FEB437B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_070A6C5B98A09B2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_METHOD_3_070A6C5B98A09B2A_OFFSET))(a1, a2);
		}
	};
}
