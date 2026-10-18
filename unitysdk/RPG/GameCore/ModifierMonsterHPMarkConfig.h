#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_METHOD_2_5A15D19557C6073E_OFFSET UNITYSDK_OFFSET(0x1D860C20)
#define RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D860D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierMonsterHPMarkConfig_TypeDefinitionIndex = 18248;

	class ModifierMonsterHPMarkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ForceKillMarkType Type; // 0x10
		::RPG::GameCore::DynamicFloat* MarkRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A15D19557C6073E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierMonsterHPMarkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierMonsterHPMarkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_METHOD_2_5A15D19557C6073E_OFFSET))(a1, a2);
		}
	};
}
