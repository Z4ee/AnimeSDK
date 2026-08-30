#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER_METHOD_3_6FDD38A47487EDD1_OFFSET UNITYSDK_OFFSET(0x1CFBE2A0)
#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER_METHOD_3_8AF9DA3E1FC9AF23_OFFSET UNITYSDK_OFFSET(0x1CFBD120)
#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBD110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowDither_TypeDefinitionIndex = 15703;

	class ChimeraBattleShowDither : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* DitherAttachPoint; // 0x20
		::System::Single DitherTime; // 0x28
		::System::Single DitherTargetAlpha; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FDD38A47487EDD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowDither*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowDither*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER_METHOD_3_6FDD38A47487EDD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AF9DA3E1FC9AF23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowDither* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER_METHOD_3_8AF9DA3E1FC9AF23_OFFSET))(a1, a2);
		}
	};
}
