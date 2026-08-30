#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSKILLALLOWBEHIT_METHOD_3_82FFA4FBB28A09CC_OFFSET UNITYSDK_OFFSET(0x1CCED150)
#define RPG_GAMECORE_RTSKILLALLOWBEHIT_METHOD_3_A1B76331252C6F09_OFFSET UNITYSDK_OFFSET(0x1CCED220)
#define RPG_GAMECORE_RTSKILLALLOWBEHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCED210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillAllowBeHit_TypeDefinitionIndex = 23941;

	class RtSkillAllowBeHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82FFA4FBB28A09CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillAllowBeHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillAllowBeHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT_METHOD_3_82FFA4FBB28A09CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1B76331252C6F09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillAllowBeHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillAllowBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT_METHOD_3_A1B76331252C6F09_OFFSET))(a1, a2);
		}
	};
}
