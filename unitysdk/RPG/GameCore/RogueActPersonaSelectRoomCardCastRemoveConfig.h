#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG_METHOD_7_5AC4CB64761FDB85_OFFSET UNITYSDK_OFFSET(0x1D030740)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG_METHOD_7_F81AC84BC32B6509_OFFSET UNITYSDK_OFFSET(0x1D030520)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D030510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastRemoveConfig_TypeDefinitionIndex = 18962;

	class RogueActPersonaSelectRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_5AC4CB64761FDB85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG_METHOD_7_5AC4CB64761FDB85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_F81AC84BC32B6509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVECONFIG_METHOD_7_F81AC84BC32B6509_OFFSET))(a1, a2);
		}
	};
}
