#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_D130B99AEC10F8F8_OFFSET UNITYSDK_OFFSET(0x1D0F0E80)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_E97EF847F4168D35_OFFSET UNITYSDK_OFFSET(0x1D0F0F60)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F0F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroySelfAction_TypeDefinitionIndex = 18534;

	class FiveDimMinionDestroySelfAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean WithDither; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D130B99AEC10F8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_D130B99AEC10F8F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E97EF847F4168D35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_E97EF847F4168D35_OFFSET))(a1, a2);
		}
	};
}
