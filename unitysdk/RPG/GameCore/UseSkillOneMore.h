#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USESKILLONEMORE_METHOD_3_A16611D992747916_OFFSET UNITYSDK_OFFSET(0x1D625310)
#define RPG_GAMECORE_USESKILLONEMORE_METHOD_3_B3E145BCBA7DDCA7_OFFSET UNITYSDK_OFFSET(0x1D625370)
#define RPG_GAMECORE_USESKILLONEMORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D625350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSkillOneMore_TypeDefinitionIndex = 22356;

	class UseSkillOneMore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ControlSkillType SkillType; // 0x18
		::System::Boolean ClearUltraSkillEffect; // 0x1C
		::System::Int32 ChildSkillIndex; // 0x20
		::System::Boolean RefreshActionType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A16611D992747916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillOneMore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_METHOD_3_A16611D992747916_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B3E145BCBA7DDCA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillOneMore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_METHOD_3_B3E145BCBA7DDCA7_OFFSET))(a1, a2);
		}
	};
}
