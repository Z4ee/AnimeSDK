#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_8DE6008419E48091_OFFSET UNITYSDK_OFFSET(0x1D3B8A90)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_9225B42228C110B5_OFFSET UNITYSDK_OFFSET(0x1D3B89D0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B89C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 19534;

	class RogueActPersonaCurRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_8DE6008419E48091(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_8DE6008419E48091_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_9225B42228C110B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_9225B42228C110B5_OFFSET))(a1, a2);
		}
	};
}
