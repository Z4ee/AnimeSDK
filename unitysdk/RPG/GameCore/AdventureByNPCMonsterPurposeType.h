#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_28048AB518F2CC5E_OFFSET UNITYSDK_OFFSET(0x1CBB1E40)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_389A7A266A491E86_OFFSET UNITYSDK_OFFSET(0x1CBB2040)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_45B8AE829E7FE648_OFFSET UNITYSDK_OFFSET(0x1CBB2010)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_99E0756F09907CFF_OFFSET UNITYSDK_OFFSET(0x1CBB1E00)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB1E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNPCMonsterPurposeType_TypeDefinitionIndex = 19986;

	class AdventureByNPCMonsterPurposeType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCMonsterPurposeType PurposeType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_99E0756F09907CFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_99E0756F09907CFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28048AB518F2CC5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_28048AB518F2CC5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45B8AE829E7FE648(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_45B8AE829E7FE648_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_389A7A266A491E86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_METHOD_4_389A7A266A491E86_OFFSET))(a1, a2);
		}
	};
}
