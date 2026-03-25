#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_6_27EDB41DECAD3EEB_OFFSET UNITYSDK_OFFSET(0x171C2150)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_6_958E41E9399DEAB0_OFFSET UNITYSDK_OFFSET(0x171C22C0)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C2220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceAllBuffByRarityConfig_TypeDefinitionIndex = 17669;

	class FateActReplaceAllBuffByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_27EDB41DECAD3EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_6_27EDB41DECAD3EEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_958E41E9399DEAB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_6_958E41E9399DEAB0_OFFSET))(a1, a2);
		}
	};
}
