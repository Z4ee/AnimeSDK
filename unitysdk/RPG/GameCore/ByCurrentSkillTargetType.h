#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_58F7ED50A6F5D029_OFFSET UNITYSDK_OFFSET(0x18743CF0)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_C3D92E64A73FB331_OFFSET UNITYSDK_OFFSET(0x18743DC0)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18743D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillTargetType_TypeDefinitionIndex = 22473;

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

		static ::System::Void Method_4_58F7ED50A6F5D029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_58F7ED50A6F5D029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C3D92E64A73FB331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_METHOD_4_C3D92E64A73FB331_OFFSET))(a1, a2);
		}
	};
}
