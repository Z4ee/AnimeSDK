#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_5B7E90E1871FE6E6_OFFSET UNITYSDK_OFFSET(0x19AEA0B0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_EFA3EC90865ACD43_OFFSET UNITYSDK_OFFSET(0x19AE9E90)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE9FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig_TypeDefinitionIndex = 18710;

	class RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_EFA3EC90865ACD43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_EFA3EC90865ACD43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_5B7E90E1871FE6E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_5B7E90E1871FE6E6_OFFSET))(a1, a2);
		}
	};
}
