#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_METHOD_6_6A91D7F866F0E144_OFFSET UNITYSDK_OFFSET(0x175BC540)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_METHOD_6_6B6A38A834E1ADCD_OFFSET UNITYSDK_OFFSET(0x175BBA50)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BB970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastConfig_TypeDefinitionIndex = 18115;

	class RogueActPersonaCurRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6B6A38A834E1ADCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_METHOD_6_6B6A38A834E1ADCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6A91D7F866F0E144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_METHOD_6_6A91D7F866F0E144_OFFSET))(a1, a2);
		}
	};
}
