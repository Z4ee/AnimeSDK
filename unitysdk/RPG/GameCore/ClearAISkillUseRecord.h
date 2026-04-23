#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_7EA3EC41D038F2DD_OFFSET UNITYSDK_OFFSET(0x18810870)
#define RPG_GAMECORE_CLEARAISKILLUSERECORD_METHOD_3_A57FBCA5344AACE9_OFFSET UNITYSDK_OFFSET(0x18810760)
#define RPG_GAMECORE_CLEARAISKILLUSERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x18810840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearAISkillUseRecord_TypeDefinitionIndex = 21316;

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
