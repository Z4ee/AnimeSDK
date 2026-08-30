#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_AA747670675EF4E7_OFFSET UNITYSDK_OFFSET(0x1D261E20)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_D1797F908F8E8B60_OFFSET UNITYSDK_OFFSET(0x1D261C00)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D261E10)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyPostAction_TypeDefinitionIndex = 24657;

	class Match3TagApplyPostAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* RemovePieceTags; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* RemoveGridTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D1797F908F8E8B60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_D1797F908F8E8B60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AA747670675EF4E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_5_AA747670675EF4E7_OFFSET))(a1, a2);
		}
	};
}
