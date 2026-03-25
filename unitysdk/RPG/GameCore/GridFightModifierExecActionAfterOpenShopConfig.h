#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_METHOD_3_06A929FBBEC362DE_OFFSET UNITYSDK_OFFSET(0x1726A770)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_METHOD_3_6B3BDDCE11ACA7D7_OFFSET UNITYSDK_OFFSET(0x17266840)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172667F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterOpenShopConfig_TypeDefinitionIndex = 17827;

	class GridFightModifierExecActionAfterOpenShopConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06A929FBBEC362DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_METHOD_3_06A929FBBEC362DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B3BDDCE11ACA7D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_METHOD_3_6B3BDDCE11ACA7D7_OFFSET))(a1, a2);
		}
	};
}
