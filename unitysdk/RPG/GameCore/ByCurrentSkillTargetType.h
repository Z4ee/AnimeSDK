#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_477BB7EA09D4AB9D_OFFSET UNITYSDK_OFFSET(0x1BBD2960)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_6BA4FE0EC4D73008_OFFSET UNITYSDK_OFFSET(0x1BBD26D0)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_B2CF80ACCB123E6D_OFFSET UNITYSDK_OFFSET(0x1BBD2690)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_F3026231918882BA_OFFSET UNITYSDK_OFFSET(0x1BBD2930)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD26C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillTargetType_TypeDefinitionIndex = 23239;

	class ByCurrentSkillTargetType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillTargetType TargetType; // 0x20
		::RPG::GameCore::NullableBool IsDynamic; // 0x24
		::System::Boolean AccessClientActiveSkill; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2CF80ACCB123E6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_B2CF80ACCB123E6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BA4FE0EC4D73008(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_6BA4FE0EC4D73008_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3026231918882BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_F3026231918882BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_477BB7EA09D4AB9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_477BB7EA09D4AB9D_OFFSET))(a1, a2);
		}
	};
}
