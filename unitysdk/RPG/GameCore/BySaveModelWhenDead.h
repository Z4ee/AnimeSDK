#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_6043EA1614531414_OFFSET UNITYSDK_OFFSET(0x1CDC0AB0)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_716D9E5D8CCAAB25_OFFSET UNITYSDK_OFFSET(0x1CDC0B10)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_80FCEC40B7C5ED79_OFFSET UNITYSDK_OFFSET(0x1CDC0930)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_D06F551879B396C8_OFFSET UNITYSDK_OFFSET(0x1CDC0890)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC08F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySaveModelWhenDead_TypeDefinitionIndex = 22877;

	class BySaveModelWhenDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D06F551879B396C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_D06F551879B396C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80FCEC40B7C5ED79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_80FCEC40B7C5ED79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6043EA1614531414(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_6043EA1614531414_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_716D9E5D8CCAAB25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_716D9E5D8CCAAB25_OFFSET))(a1, a2);
		}
	};
}
