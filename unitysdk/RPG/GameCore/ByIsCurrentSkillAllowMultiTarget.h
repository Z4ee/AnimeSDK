#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_191C2F1F7FBAA480_OFFSET UNITYSDK_OFFSET(0x1A8DCF50)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_6FEE44EB054529B0_OFFSET UNITYSDK_OFFSET(0x1A8DD0F0)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_A09DD7744D8E2347_OFFSET UNITYSDK_OFFSET(0x1A8DD120)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_E7BAEE75BBC3A315_OFFSET UNITYSDK_OFFSET(0x1A8DCF10)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DCF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentSkillAllowMultiTarget_TypeDefinitionIndex = 22663;

	class ByIsCurrentSkillAllowMultiTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AccessClientActiveSkill; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E7BAEE75BBC3A315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_E7BAEE75BBC3A315_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_191C2F1F7FBAA480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_191C2F1F7FBAA480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FEE44EB054529B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_6FEE44EB054529B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A09DD7744D8E2347(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_A09DD7744D8E2347_OFFSET))(a1, a2);
		}
	};
}
