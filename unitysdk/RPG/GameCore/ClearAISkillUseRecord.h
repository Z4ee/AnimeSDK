#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_7EA3EC41D038F2DD_OFFSET UNITYSDK_OFFSET(0x19652000)
#define RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_A57FBCA5344AACE9_OFFSET UNITYSDK_OFFSET(0x19651EF0)
#define RPG_GAMECORE_CLEARAISKILLUSERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x19651FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearAISkillUseRecord_TypeDefinitionIndex = 21212;

	class ClearAISkillUseRecord : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARAISKILLUSERECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A57FBCA5344AACE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearAISkillUseRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearAISkillUseRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_A57FBCA5344AACE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EA3EC41D038F2DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearAISkillUseRecord* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearAISkillUseRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_7EA3EC41D038F2DD_OFFSET))(a1, a2);
		}
	};
}
