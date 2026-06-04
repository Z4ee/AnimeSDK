#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_55B9D3AE70D213CA_OFFSET UNITYSDK_OFFSET(0x19B53BC0)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_7D82FA3E41DDBB93_OFFSET UNITYSDK_OFFSET(0x19B5E1A0)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B53B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierGetExtraBuffOnBuffAddConfig_TypeDefinitionIndex = 16909;

	class RogueModifierGetExtraBuffOnBuffAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D82FA3E41DDBB93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_7D82FA3E41DDBB93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55B9D3AE70D213CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_METHOD_3_55B9D3AE70D213CA_OFFSET))(a1, a2);
		}
	};
}
