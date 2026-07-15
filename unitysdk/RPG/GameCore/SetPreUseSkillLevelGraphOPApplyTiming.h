#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_METHOD_3_F28493A99DC4DA64_OFFSET UNITYSDK_OFFSET(0x1C605720)
#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_METHOD_3_F782B92CD13BD9BF_OFFSET UNITYSDK_OFFSET(0x1C6056E0)
#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPreUseSkillLevelGraphOPApplyTiming_TypeDefinitionIndex = 22532;

	class SetPreUseSkillLevelGraphOPApplyTiming : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F782B92CD13BD9BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_METHOD_3_F782B92CD13BD9BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F28493A99DC4DA64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_METHOD_3_F28493A99DC4DA64_OFFSET))(a1, a2);
		}
	};
}
