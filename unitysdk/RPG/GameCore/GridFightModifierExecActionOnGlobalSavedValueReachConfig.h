#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_METHOD_3_0991FDFD09F2BA98_OFFSET UNITYSDK_OFFSET(0x197ECB90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_METHOD_3_2D5B1710E590D2C1_OFFSET UNITYSDK_OFFSET(0x197F2220)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197ECB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionOnGlobalSavedValueReachConfig_TypeDefinitionIndex = 18399;

	class GridFightModifierExecActionOnGlobalSavedValueReachConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D5B1710E590D2C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_METHOD_3_2D5B1710E590D2C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0991FDFD09F2BA98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_METHOD_3_0991FDFD09F2BA98_OFFSET))(a1, a2);
		}
	};
}
