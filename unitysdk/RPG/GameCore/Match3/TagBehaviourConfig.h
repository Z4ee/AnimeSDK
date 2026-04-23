#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_METHOD_2_53C2EC3A8565C073_OFFSET UNITYSDK_OFFSET(0x18AB7EF0)
#define RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABB700)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TagBehaviourConfig_TypeDefinitionIndex = 23758;

	class TagBehaviourConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* DisableMoveGridTags; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* BreakWithNeighborGridTags; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* DisableMovePieceTags; // 0x20
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* BreakWithNeighborPieceTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_53C2EC3A8565C073(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TagBehaviourConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TagBehaviourConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_METHOD_2_53C2EC3A8565C073_OFFSET))(a1, a2);
		}
	};
}
