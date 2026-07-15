#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_7580DB8B4A4B40DE_OFFSET UNITYSDK_OFFSET(0x1D0CA8B0)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_EB054EE9DAD10D7E_OFFSET UNITYSDK_OFFSET(0x1D0CA910)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_F1D3434D68917F85_OFFSET UNITYSDK_OFFSET(0x1D0CAA80)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_F91A1490DDD7AEE1_OFFSET UNITYSDK_OFFSET(0x1D0CAA30)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CA900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByWeaknessMatch_TypeDefinitionIndex = 23138;

	class TargetSortByWeaknessMatch : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* Defenders; // 0x10
		::System::Boolean MatchFirst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7580DB8B4A4B40DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_7580DB8B4A4B40DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB054EE9DAD10D7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_EB054EE9DAD10D7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F91A1490DDD7AEE1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_F91A1490DDD7AEE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F1D3434D68917F85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_F1D3434D68917F85_OFFSET))(a1, a2);
		}
	};
}
