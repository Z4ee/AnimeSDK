#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_METHOD_7_838AE446725A340A_OFFSET UNITYSDK_OFFSET(0x1EE865A0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_METHOD_7_9D10CA9B3D99C1CE_OFFSET UNITYSDK_OFFSET(0x1EE86550)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastCloneConfig_TypeDefinitionIndex = 19539;

	class RogueActPersonaCurRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_9D10CA9B3D99C1CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_METHOD_7_9D10CA9B3D99C1CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_838AE446725A340A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_METHOD_7_838AE446725A340A_OFFSET))(a1, a2);
		}
	};
}
