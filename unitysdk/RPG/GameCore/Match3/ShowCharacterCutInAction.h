#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_5_A51AA0365B67598E_OFFSET UNITYSDK_OFFSET(0x1BD2BA50)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_5_CB6239775721C9ED_OFFSET UNITYSDK_OFFSET(0x1BD2BAB0)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2BAA0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowCharacterCutInAction_TypeDefinitionIndex = 24043;

	class ShowCharacterCutInAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CutInID; // 0x18
		::RPG::GameCore::Match3::ActionRole Role; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A51AA0365B67598E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_5_A51AA0365B67598E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CB6239775721C9ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_5_CB6239775721C9ED_OFFSET))(a1, a2);
		}
	};
}
