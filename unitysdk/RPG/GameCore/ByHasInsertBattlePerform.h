#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_44169F7855CD8E92_OFFSET UNITYSDK_OFFSET(0x1954E4F0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_7021D5950C7F2BB8_OFFSET UNITYSDK_OFFSET(0x1954E420)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_B26FA1314D832E8D_OFFSET UNITYSDK_OFFSET(0x1954E630)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_E9F91486F8537041_OFFSET UNITYSDK_OFFSET(0x1954E6B0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1954E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertBattlePerform_TypeDefinitionIndex = 22101;

	class ByHasInsertBattlePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7021D5950C7F2BB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_7021D5950C7F2BB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_44169F7855CD8E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_44169F7855CD8E92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B26FA1314D832E8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_B26FA1314D832E8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9F91486F8537041(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_E9F91486F8537041_OFFSET))(a1, a2);
		}
	};
}
