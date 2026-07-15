#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_050CA87CD8D77AFE_OFFSET UNITYSDK_OFFSET(0x1AE4F9A0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_244930E141B0B0B5_OFFSET UNITYSDK_OFFSET(0x1AE4FB60)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_5DBF8D15370ECCB2_OFFSET UNITYSDK_OFFSET(0x1AE4FB90)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_A5D82A43A570235F_OFFSET UNITYSDK_OFFSET(0x1AE4F9E0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsBattlePostureType_TypeDefinitionIndex = 21014;

	class AdventureByIsBattlePostureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_050CA87CD8D77AFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_050CA87CD8D77AFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5D82A43A570235F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_A5D82A43A570235F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_244930E141B0B0B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_244930E141B0B0B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DBF8D15370ECCB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_5DBF8D15370ECCB2_OFFSET))(a1, a2);
		}
	};
}
