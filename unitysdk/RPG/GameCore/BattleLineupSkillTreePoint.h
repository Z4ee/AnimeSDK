#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_METHOD_2_848EE3494CD469C0_OFFSET UNITYSDK_OFFSET(0x186FCF10)
#define RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x186FD060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupSkillTreePoint_TypeDefinitionIndex = 17222;

	class BattleLineupSkillTreePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Id; // 0x10
		::System::Int32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_848EE3494CD469C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleLineupSkillTreePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleLineupSkillTreePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_METHOD_2_848EE3494CD469C0_OFFSET))(a1, a2);
		}
	};
}
