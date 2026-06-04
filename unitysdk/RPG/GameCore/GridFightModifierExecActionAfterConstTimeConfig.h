#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_METHOD_3_81784BFAE163A405_OFFSET UNITYSDK_OFFSET(0x197EBD90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_METHOD_3_B11241FCEC52176C_OFFSET UNITYSDK_OFFSET(0x197F1A20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EBD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterConstTimeConfig_TypeDefinitionIndex = 18424;

	class GridFightModifierExecActionAfterConstTimeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B11241FCEC52176C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_METHOD_3_B11241FCEC52176C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81784BFAE163A405(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_METHOD_3_81784BFAE163A405_OFFSET))(a1, a2);
		}
	};
}
