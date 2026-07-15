#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_450730003F6DDAEB_OFFSET UNITYSDK_OFFSET(0x1BE1F270)
#define RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_6B6473CDF47A4A0C_OFFSET UNITYSDK_OFFSET(0x1BE1F2C0)
#define RPG_GAMECORE_ADVHIDEMAZEBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1F2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvHideMazeBtn_TypeDefinitionIndex = 22988;

	class AdvHideMazeBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x18
		::System::Boolean IsHide; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_450730003F6DDAEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideMazeBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideMazeBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_450730003F6DDAEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B6473CDF47A4A0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_METHOD_3_6B6473CDF47A4A0C_OFFSET))(a1, a2);
		}
	};
}
