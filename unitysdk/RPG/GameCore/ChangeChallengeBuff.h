#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGECHALLENGEBUFF_METHOD_3_97473529E64CAAAB_OFFSET UNITYSDK_OFFSET(0x170605E0)
#define RPG_GAMECORE_CHANGECHALLENGEBUFF_METHOD_3_FB3D1D35FF43B982_OFFSET UNITYSDK_OFFSET(0x17060660)
#define RPG_GAMECORE_CHANGECHALLENGEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17060630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeChallengeBuff_TypeDefinitionIndex = 18774;

	class ChangeChallengeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97473529E64CAAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeChallengeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeChallengeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF_METHOD_3_97473529E64CAAAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB3D1D35FF43B982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeChallengeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeChallengeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF_METHOD_3_FB3D1D35FF43B982_OFFSET))(a1, a2);
		}
	};
}
