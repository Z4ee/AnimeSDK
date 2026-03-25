#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REACTIONTASKCONFIG_METHOD_3_B6305489B169F566_OFFSET UNITYSDK_OFFSET(0x17583BD0)
#define RPG_GAMECORE_REACTIONTASKCONFIG_METHOD_3_C525E618F88C7463_OFFSET UNITYSDK_OFFSET(0x17583E60)
#define RPG_GAMECORE_REACTIONTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17579C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReactionTaskConfig_TypeDefinitionIndex = 18315;

	class ReactionTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6305489B169F566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReactionTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReactionTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG_METHOD_3_B6305489B169F566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C525E618F88C7463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReactionTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReactionTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG_METHOD_3_C525E618F88C7463_OFFSET))(a1, a2);
		}
	};
}
