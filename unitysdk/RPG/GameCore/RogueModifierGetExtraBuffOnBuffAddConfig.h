#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_214C6D700984BD8E_OFFSET UNITYSDK_OFFSET(0x1EEF9BF0)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_55B9D3AE70D213CA_OFFSET UNITYSDK_OFFSET(0x1EEF9C40)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierGetExtraBuffOnBuffAddConfig_TypeDefinitionIndex = 17576;

	class RogueModifierGetExtraBuffOnBuffAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_214C6D700984BD8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_214C6D700984BD8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55B9D3AE70D213CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_55B9D3AE70D213CA_OFFSET))(a1, a2);
		}
	};
}
