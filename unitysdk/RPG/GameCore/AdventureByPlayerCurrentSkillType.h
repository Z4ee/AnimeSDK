#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_03E28CA5EAEF6D1D_OFFSET UNITYSDK_OFFSET(0x1CDEBB90)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_3B90D46A0B72463F_OFFSET UNITYSDK_OFFSET(0x1CDEB9A0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_AF6936ED72A3443A_OFFSET UNITYSDK_OFFSET(0x1CDEBB60)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET UNITYSDK_OFFSET(0x1CDEB9E0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEB9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPlayerCurrentSkillType_TypeDefinitionIndex = 21518;

	class AdventureByPlayerCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3B90D46A0B72463F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_3B90D46A0B72463F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA0B0880329D30AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF6936ED72A3443A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_AF6936ED72A3443A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03E28CA5EAEF6D1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_03E28CA5EAEF6D1D_OFFSET))(a1, a2);
		}
	};
}
