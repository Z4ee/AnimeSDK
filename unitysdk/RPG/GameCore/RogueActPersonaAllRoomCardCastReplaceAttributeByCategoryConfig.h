#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_1641980B26348D1F_OFFSET UNITYSDK_OFFSET(0x1D02EDA0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_D2EFAB12C9AF4B23_OFFSET UNITYSDK_OFFSET(0x1D02ECC0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02ECB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig_TypeDefinitionIndex = 18989;

	class RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_1641980B26348D1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_1641980B26348D1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_D2EFAB12C9AF4B23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_METHOD_7_D2EFAB12C9AF4B23_OFFSET))(a1, a2);
		}
	};
}
