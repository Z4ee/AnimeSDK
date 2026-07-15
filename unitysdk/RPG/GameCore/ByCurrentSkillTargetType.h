#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_477BB7EA09D4AB9D_OFFSET UNITYSDK_OFFSET(0x1A8BADC0)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_B0FF8007A54DD1E4_OFFSET UNITYSDK_OFFSET(0x1A8BAB20)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_C3D92E64A73FB331_OFFSET UNITYSDK_OFFSET(0x1A8BAB60)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_F3026231918882BA_OFFSET UNITYSDK_OFFSET(0x1A8BAD90)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillTargetType_TypeDefinitionIndex = 22662;

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

		static ::System::Void Method_4_B0FF8007A54DD1E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_B0FF8007A54DD1E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C3D92E64A73FB331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_C3D92E64A73FB331_OFFSET))(a1, a2);
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
