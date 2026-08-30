#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_095FA946F03F313B_OFFSET UNITYSDK_OFFSET(0x1BBD3020)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_7BB793B4C54A63D2_OFFSET UNITYSDK_OFFSET(0x1BBD2FD0)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_8F36A98A6EDDCBEB_OFFSET UNITYSDK_OFFSET(0x1BBD3270)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_C471F13639AEE484_OFFSET UNITYSDK_OFFSET(0x1BBD32B0)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD3010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillType_TypeDefinitionIndex = 23238;

	class ByCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Boolean AccessClientActiveSkill; // 0x24
		::System::Boolean CheckRegardAsSkillType; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7BB793B4C54A63D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_7BB793B4C54A63D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_095FA946F03F313B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_095FA946F03F313B_OFFSET))(a1, a2);
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
