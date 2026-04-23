#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG_METHOD_3_304192B5DF73E70E_OFFSET UNITYSDK_OFFSET(0x189BC700)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG_METHOD_3_71661393C4501D87_OFFSET UNITYSDK_OFFSET(0x189BC7D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BC780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionImmediatelyConfig_TypeDefinitionIndex = 18371;

	class GridFightModifierExecActionImmediatelyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_304192B5DF73E70E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionImmediatelyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionImmediatelyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG_METHOD_3_304192B5DF73E70E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71661393C4501D87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionImmediatelyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionImmediatelyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONIMMEDIATELYCONFIG_METHOD_3_71661393C4501D87_OFFSET))(a1, a2);
		}
	};
}
