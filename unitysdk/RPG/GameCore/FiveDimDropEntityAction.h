#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_3_ADA1F9EE3C404D1E_OFFSET UNITYSDK_OFFSET(0x1973A410)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_3_CFBDFA9FA639A785_OFFSET UNITYSDK_OFFSET(0x1972DA80)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDropEntityAction_TypeDefinitionIndex = 17805;

	class FiveDimDropEntityAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::MVector3 InitDropVelocity; // 0x10
		::System::Single DropGravity; // 0x1C
		::System::Single StunTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ADA1F9EE3C404D1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDropEntityAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDropEntityAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_3_ADA1F9EE3C404D1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFBDFA9FA639A785(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_METHOD_3_CFBDFA9FA639A785_OFFSET))(a1, a2);
		}
	};
}
