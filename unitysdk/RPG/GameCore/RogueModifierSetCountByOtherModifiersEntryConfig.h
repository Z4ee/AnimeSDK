#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_METHOD_2_6B70C3D3AF662335_OFFSET UNITYSDK_OFFSET(0x1D3FC7D0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByOtherModifiersEntryConfig_TypeDefinitionIndex = 17510;

	class RogueModifierSetCountByOtherModifiersEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6B70C3D3AF662335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_METHOD_2_6B70C3D3AF662335_OFFSET))(a1, a2);
		}
	};
}
