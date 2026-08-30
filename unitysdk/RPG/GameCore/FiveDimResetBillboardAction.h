#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_A5E2B26F327E8FA3_OFFSET UNITYSDK_OFFSET(0x1D0FE2C0)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_E8548ED116E4F74E_OFFSET UNITYSDK_OFFSET(0x1D0FE210)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FE2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimResetBillboardAction_TypeDefinitionIndex = 18568;

	class FiveDimResetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 MapIconID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8548ED116E4F74E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_E8548ED116E4F74E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5E2B26F327E8FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_A5E2B26F327E8FA3_OFFSET))(a1, a2);
		}
	};
}
