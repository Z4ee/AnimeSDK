#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_METHOD_6_79509067E3B8D684_OFFSET UNITYSDK_OFFSET(0x19AEF340)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_METHOD_6_BC3ABEC34FE34FFD_OFFSET UNITYSDK_OFFSET(0x19AF01E0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEF030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastConfig_TypeDefinitionIndex = 18684;

	class RogueActPersonaRandomRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_79509067E3B8D684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_METHOD_6_79509067E3B8D684_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BC3ABEC34FE34FFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_METHOD_6_BC3ABEC34FE34FFD_OFFSET))(a1, a2);
		}
	};
}
