#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_8F36A98A6EDDCBEB_OFFSET UNITYSDK_OFFSET(0x1A8BB660)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_C471F13639AEE484_OFFSET UNITYSDK_OFFSET(0x1A8BB690)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_EA26E29EAE7B253E_OFFSET UNITYSDK_OFFSET(0x1A8BB430)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_F5CA553289003AA7_OFFSET UNITYSDK_OFFSET(0x1A8BB470)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BB460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillType_TypeDefinitionIndex = 22661;

	class ByCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Boolean AccessClientActiveSkill; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA26E29EAE7B253E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_EA26E29EAE7B253E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5CA553289003AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_F5CA553289003AA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F36A98A6EDDCBEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_8F36A98A6EDDCBEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C471F13639AEE484(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_C471F13639AEE484_OFFSET))(a1, a2);
		}
	};
}
