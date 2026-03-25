#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_AD9635D8A21330A3_OFFSET UNITYSDK_OFFSET(0x1701FA10)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_F5CA553289003AA7_OFFSET UNITYSDK_OFFSET(0x1701FAE0)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1701FA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillType_TypeDefinitionIndex = 21734;

	class ByCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Boolean AccessClientActiveSkill; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD9635D8A21330A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_AD9635D8A21330A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5CA553289003AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_METHOD_4_F5CA553289003AA7_OFFSET))(a1, a2);
		}
	};
}
