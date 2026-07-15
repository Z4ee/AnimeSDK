#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_METHOD_6_683FEB900793FD2B_OFFSET UNITYSDK_OFFSET(0x1C49D720)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_METHOD_6_90CFB5E961FE4E2F_OFFSET UNITYSDK_OFFSET(0x1C49D770)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveAllRogueBuffAndAddCoinConfig_TypeDefinitionIndex = 18900;

	class RogueActRemoveAllRogueBuffAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_683FEB900793FD2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_METHOD_6_683FEB900793FD2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_90CFB5E961FE4E2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_METHOD_6_90CFB5E961FE4E2F_OFFSET))(a1, a2);
		}
	};
}
