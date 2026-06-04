#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_METHOD_3_3C1568F8D378B2E1_OFFSET UNITYSDK_OFFSET(0x197EB5B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_METHOD_3_94B42183D41BAB08_OFFSET UNITYSDK_OFFSET(0x197F15A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EB560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEnableFunctionConfig_TypeDefinitionIndex = 18397;

	class GridFightModifierEnableFunctionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94B42183D41BAB08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEnableFunctionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEnableFunctionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_METHOD_3_94B42183D41BAB08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C1568F8D378B2E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEnableFunctionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEnableFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_METHOD_3_3C1568F8D378B2E1_OFFSET))(a1, a2);
		}
	};
}
