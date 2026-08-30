#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_5C3783E02B34A793_OFFSET UNITYSDK_OFFSET(0x1CEE9880)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_8086B028EECABB3A_OFFSET UNITYSDK_OFFSET(0x1CEE9B40)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_95C19D6DFF8C12B4_OFFSET UNITYSDK_OFFSET(0x1CEE9960)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_EE76AACDCB45F0FF_OFFSET UNITYSDK_OFFSET(0x1CEE9BC0)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE9900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterTemplateID_TypeDefinitionIndex = 22743;

	class ByCompareMonsterTemplateID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterTemplateID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C3783E02B34A793(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_5C3783E02B34A793_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95C19D6DFF8C12B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_95C19D6DFF8C12B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8086B028EECABB3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_8086B028EECABB3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE76AACDCB45F0FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_METHOD_4_EE76AACDCB45F0FF_OFFSET))(a1, a2);
		}
	};
}
