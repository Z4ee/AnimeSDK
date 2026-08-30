#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_1FC9FA85237BB708_OFFSET UNITYSDK_OFFSET(0x1CEFA760)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_650ADE9FE6828B3D_OFFSET UNITYSDK_OFFSET(0x1CEFA720)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_A2D80E6173A07338_OFFSET UNITYSDK_OFFSET(0x1CEFA8F0)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_B9E395ED2834AC5F_OFFSET UNITYSDK_OFFSET(0x1CEFA920)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFA750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect_TypeDefinitionIndex = 22763;

	class ByCompareSelectSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_650ADE9FE6828B3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_650ADE9FE6828B3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FC9FA85237BB708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_1FC9FA85237BB708_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2D80E6173A07338(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_A2D80E6173A07338_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9E395ED2834AC5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_B9E395ED2834AC5F_OFFSET))(a1, a2);
		}
	};
}
