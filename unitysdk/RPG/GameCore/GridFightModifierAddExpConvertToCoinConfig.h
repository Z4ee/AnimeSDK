#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_METHOD_3_C3C90536A1F8C41D_OFFSET UNITYSDK_OFFSET(0x1C5CFC00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_METHOD_3_FE1CAAC3780B5C59_OFFSET UNITYSDK_OFFSET(0x1C5CFBB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CFBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddExpConvertToCoinConfig_TypeDefinitionIndex = 18726;

	class GridFightModifierAddExpConvertToCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE1CAAC3780B5C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_METHOD_3_FE1CAAC3780B5C59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3C90536A1F8C41D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_METHOD_3_C3C90536A1F8C41D_OFFSET))(a1, a2);
		}
	};
}
