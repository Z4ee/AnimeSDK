#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_44169F7855CD8E92_OFFSET UNITYSDK_OFFSET(0x1A8C7CB0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_58686370E18431AD_OFFSET UNITYSDK_OFFSET(0x1A8C7E20)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_8EB75FAA4B1E4D2C_OFFSET UNITYSDK_OFFSET(0x1A8C7DF0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_F350ED1D1C094A09_OFFSET UNITYSDK_OFFSET(0x1A8C7C70)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C7CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertBattlePerform_TypeDefinitionIndex = 22537;

	class ByHasInsertBattlePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F350ED1D1C094A09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_F350ED1D1C094A09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_44169F7855CD8E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_44169F7855CD8E92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8EB75FAA4B1E4D2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_8EB75FAA4B1E4D2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58686370E18431AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_METHOD_4_58686370E18431AD_OFFSET))(a1, a2);
		}
	};
}
