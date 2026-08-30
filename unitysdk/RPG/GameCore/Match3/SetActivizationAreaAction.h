#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_5_542B717E9ECCE43A_OFFSET UNITYSDK_OFFSET(0x1D245FA0)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_5_C7D5B3655E83417A_OFFSET UNITYSDK_OFFSET(0x1D246000)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D245FF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetActivizationAreaAction_TypeDefinitionIndex = 24630;

	class SetActivizationAreaAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Enduring; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_542B717E9ECCE43A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetActivizationAreaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_5_542B717E9ECCE43A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C7D5B3655E83417A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetActivizationAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_5_C7D5B3655E83417A_OFFSET))(a1, a2);
		}
	};
}
