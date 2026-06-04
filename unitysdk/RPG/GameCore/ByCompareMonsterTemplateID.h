#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_1FEB831F6C320835_OFFSET UNITYSDK_OFFSET(0x19522670)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_7636839B2939C002_OFFSET UNITYSDK_OFFSET(0x19522730)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_7F3BBE2F9765E469_OFFSET UNITYSDK_OFFSET(0x19522330)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_95C19D6DFF8C12B4_OFFSET UNITYSDK_OFFSET(0x19522490)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID__CTOR_OFFSET UNITYSDK_OFFSET(0x195223F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterTemplateID_TypeDefinitionIndex = 21748;

	class ByCompareMonsterTemplateID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterTemplateID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F3BBE2F9765E469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_7F3BBE2F9765E469_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95C19D6DFF8C12B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_95C19D6DFF8C12B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FEB831F6C320835(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_1FEB831F6C320835_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7636839B2939C002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_7636839B2939C002_OFFSET))(a1, a2);
		}
	};
}
