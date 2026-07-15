#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_METHOD_2_11D22C4DC16F1298_OFFSET UNITYSDK_OFFSET(0x1C5D0510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoAddBonusRule_TypeDefinitionIndex = 18638;

	class GridFightModifierAutoAddBonusRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11D22C4DC16F1298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusRule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoAddBonusRule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_METHOD_2_11D22C4DC16F1298_OFFSET))(a1, a2);
		}
	};
}
