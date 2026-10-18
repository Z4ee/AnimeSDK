#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_4_75595F4AEA462001_OFFSET UNITYSDK_OFFSET(0x1D689210)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_4_FA91183115CB8DFA_OFFSET UNITYSDK_OFFSET(0x1D689250)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D689240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCrystalChangeHPAction_TypeDefinitionIndex = 18780;

	class FiveDimCrystalChangeHPAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 Value; // 0x10
		::System::Boolean DelayDisableCollider; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_75595F4AEA462001(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_4_75595F4AEA462001_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA91183115CB8DFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_4_FA91183115CB8DFA_OFFSET))(a1, a2);
		}
	};
}
