#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_3_6909F82A25CAE20F_OFFSET UNITYSDK_OFFSET(0x1BA932A0)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_3_909A57890507ED8D_OFFSET UNITYSDK_OFFSET(0x1BA93320)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA932F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnergyBlockChargeAction_TypeDefinitionIndex = 17982;

	class FiveDimEnergyBlockChargeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::MVector3 EndPosition; // 0x10
		::System::Single Duration; // 0x1C
		::RPG::GameCore::FloatCurve* YOffsetCurve; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6909F82A25CAE20F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_3_6909F82A25CAE20F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_909A57890507ED8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_3_909A57890507ED8D_OFFSET))(a1, a2);
		}
	};
}
