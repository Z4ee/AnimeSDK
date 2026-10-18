#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_4_24800804E42D8C44_OFFSET UNITYSDK_OFFSET(0x1D6BB3F0)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_4_B9DE23B801CA807A_OFFSET UNITYSDK_OFFSET(0x1D6BB470)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnergyBlockChargeAction_TypeDefinitionIndex = 18715;

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

		static ::System::Void Method_4_24800804E42D8C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_4_24800804E42D8C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9DE23B801CA807A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_METHOD_4_B9DE23B801CA807A_OFFSET))(a1, a2);
		}
	};
}
