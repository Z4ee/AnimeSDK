#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_2BD129A5BA042A9A_OFFSET UNITYSDK_OFFSET(0x19427160)
#define RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_6B6473CDF47A4A0C_OFFSET UNITYSDK_OFFSET(0x194271E0)
#define RPG_GAMECORE_ADVHIDEMAZEBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x194271B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvHideMazeBtn_TypeDefinitionIndex = 22537;

	class AdvHideMazeBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x18
		::System::Boolean IsHide; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BD129A5BA042A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideMazeBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideMazeBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_2BD129A5BA042A9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B6473CDF47A4A0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_6B6473CDF47A4A0C_OFFSET))(a1, a2);
		}
	};
}
