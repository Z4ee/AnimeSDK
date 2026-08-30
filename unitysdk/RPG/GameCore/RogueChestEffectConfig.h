#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_METHOD_2_E9EE83B825C7A914_OFFSET UNITYSDK_OFFSET(0x1D3CA030)
#define RPG_GAMECORE_ROGUECHESTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestEffectConfig_TypeDefinitionIndex = 17693;

	class RogueChestEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E9EE83B825C7A914(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueChestEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueChestEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_METHOD_2_E9EE83B825C7A914_OFFSET))(a1, a2);
		}
	};
}
