#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_4_91BA9E94CCBF8229_OFFSET UNITYSDK_OFFSET(0x1D69ABA0)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_4_C38FC5FA5ACFC86C_OFFSET UNITYSDK_OFFSET(0x1D69AC80)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroySelfAction_TypeDefinitionIndex = 18744;

	class FiveDimMinionDestroySelfAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean WithDither; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_91BA9E94CCBF8229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_4_91BA9E94CCBF8229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C38FC5FA5ACFC86C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_4_C38FC5FA5ACFC86C_OFFSET))(a1, a2);
		}
	};
}
