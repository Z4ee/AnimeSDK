#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_A46266F8FBFC23F2_OFFSET UNITYSDK_OFFSET(0x1BB42160)
#define RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_F6245AAE72492979_OFFSET UNITYSDK_OFFSET(0x1BB42190)
#define RPG_GAMECORE_ENDADVSKILLCOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04F7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndAdvSkillCombo_TypeDefinitionIndex = 19417;

	class EndAdvSkillCombo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillInputType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A46266F8FBFC23F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndAdvSkillCombo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndAdvSkillCombo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_A46266F8FBFC23F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6245AAE72492979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_F6245AAE72492979_OFFSET))(a1, a2);
		}
	};
}
