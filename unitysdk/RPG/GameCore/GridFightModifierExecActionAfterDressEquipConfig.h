#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG_METHOD_3_8ACE5A9EE19772F3_OFFSET UNITYSDK_OFFSET(0x197F1B20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG_METHOD_3_FCC79826EA52F5AA_OFFSET UNITYSDK_OFFSET(0x197EBF50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EBF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterDressEquipConfig_TypeDefinitionIndex = 18471;

	class GridFightModifierExecActionAfterDressEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8ACE5A9EE19772F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterDressEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterDressEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG_METHOD_3_8ACE5A9EE19772F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCC79826EA52F5AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERDRESSEQUIPCONFIG_METHOD_3_FCC79826EA52F5AA_OFFSET))(a1, a2);
		}
	};
}
