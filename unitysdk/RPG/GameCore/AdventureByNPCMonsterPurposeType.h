#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_28048AB518F2CC5E_OFFSET UNITYSDK_OFFSET(0x19447E00)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_43E23BDDD5C83000_OFFSET UNITYSDK_OFFSET(0x19447FD0)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_C395A2EC34A035F7_OFFSET UNITYSDK_OFFSET(0x19448050)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_E0913CDA9CD9579E_OFFSET UNITYSDK_OFFSET(0x19447D30)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19447DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNPCMonsterPurposeType_TypeDefinitionIndex = 19088;

	class AdventureByNPCMonsterPurposeType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCMonsterPurposeType PurposeType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0913CDA9CD9579E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_E0913CDA9CD9579E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28048AB518F2CC5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_28048AB518F2CC5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43E23BDDD5C83000(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_43E23BDDD5C83000_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C395A2EC34A035F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_C395A2EC34A035F7_OFFSET))(a1, a2);
		}
	};
}
