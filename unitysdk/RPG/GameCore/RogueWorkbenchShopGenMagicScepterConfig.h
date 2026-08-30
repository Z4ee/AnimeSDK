#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_METHOD_2_7BC8C424409BBB22_OFFSET UNITYSDK_OFFSET(0x1D493AF0)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D493B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchShopGenMagicScepterConfig_TypeDefinitionIndex = 17814;

	class RogueWorkbenchShopGenMagicScepterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7BC8C424409BBB22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchShopGenMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchShopGenMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_METHOD_2_7BC8C424409BBB22_OFFSET))(a1, a2);
		}
	};
}
