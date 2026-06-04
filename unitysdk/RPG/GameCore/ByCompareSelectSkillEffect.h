#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_17D7D2F4D8389415_OFFSET UNITYSDK_OFFSET(0x1952FCE0)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_1FC9FA85237BB708_OFFSET UNITYSDK_OFFSET(0x1952FB50)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_89E79654E2D29266_OFFSET UNITYSDK_OFFSET(0x1952FA80)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_F17581E87B5B5141_OFFSET UNITYSDK_OFFSET(0x1952FD60)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1952FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect_TypeDefinitionIndex = 21768;

	class ByCompareSelectSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_89E79654E2D29266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_89E79654E2D29266_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FC9FA85237BB708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_1FC9FA85237BB708_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17D7D2F4D8389415(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_17D7D2F4D8389415_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F17581E87B5B5141(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_F17581E87B5B5141_OFFSET))(a1, a2);
		}
	};
}
