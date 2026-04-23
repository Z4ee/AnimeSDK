#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USESKILLONEMORE_METHOD_3_69A4535FC7903EE0_OFFSET UNITYSDK_OFFSET(0x190E7250)
#define RPG_GAMECORE_USESKILLONEMORE_METHOD_3_BCAC65686D1DC595_OFFSET UNITYSDK_OFFSET(0x190E71B0)
#define RPG_GAMECORE_USESKILLONEMORE__CTOR_OFFSET UNITYSDK_OFFSET(0x190E7210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSkillOneMore_TypeDefinitionIndex = 21493;

	class UseSkillOneMore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ControlSkillType SkillType; // 0x18
		::System::Boolean ClearUltraSkillEffect; // 0x1C
		::System::Int32 ChildSkillIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCAC65686D1DC595(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillOneMore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_METHOD_3_BCAC65686D1DC595_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69A4535FC7903EE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillOneMore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_METHOD_3_69A4535FC7903EE0_OFFSET))(a1, a2);
		}
	};
}
