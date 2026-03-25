#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_METHOD_3_0D4CE59CCD283D70_OFFSET UNITYSDK_OFFSET(0x17266AE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_METHOD_3_DBC01657D4078619_OFFSET UNITYSDK_OFFSET(0x1726A8F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17266A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterReturnPreparationConfig_TypeDefinitionIndex = 17761;

	class GridFightModifierExecActionAfterReturnPreparationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBC01657D4078619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_METHOD_3_DBC01657D4078619_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D4CE59CCD283D70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_METHOD_3_0D4CE59CCD283D70_OFFSET))(a1, a2);
		}
	};
}
