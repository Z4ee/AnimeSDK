#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_039C31271B773F7E_OFFSET UNITYSDK_OFFSET(0x194489F0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_18A004C9AC821B63_OFFSET UNITYSDK_OFFSET(0x19448970)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_98CDFE7105C45880_OFFSET UNITYSDK_OFFSET(0x19448720)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET UNITYSDK_OFFSET(0x194487F0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194487A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPlayerCurrentSkillType_TypeDefinitionIndex = 20545;

	class AdventureByPlayerCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98CDFE7105C45880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_98CDFE7105C45880_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA0B0880329D30AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18A004C9AC821B63(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_18A004C9AC821B63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_039C31271B773F7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_039C31271B773F7E_OFFSET))(a1, a2);
		}
	};
}
