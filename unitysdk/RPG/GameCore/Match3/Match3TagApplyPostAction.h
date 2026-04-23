#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_724D14B01CA23F91_OFFSET UNITYSDK_OFFSET(0x18AB2260)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_DA37B262E6D35495_OFFSET UNITYSDK_OFFSET(0x18AB8EE0)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB21F0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyPostAction_TypeDefinitionIndex = 23744;

	class Match3TagApplyPostAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* RemovePieceTags; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* RemoveGridTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DA37B262E6D35495(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_DA37B262E6D35495_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_724D14B01CA23F91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_724D14B01CA23F91_OFFSET))(a1, a2);
		}
	};
}
