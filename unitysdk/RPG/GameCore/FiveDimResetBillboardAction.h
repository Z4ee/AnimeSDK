#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_A5E2B26F327E8FA3_OFFSET UNITYSDK_OFFSET(0x172077F0)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_E9973F2BE0F02CD7_OFFSET UNITYSDK_OFFSET(0x17207700)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172077D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimResetBillboardAction_TypeDefinitionIndex = 17236;

	class FiveDimResetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 MapIconID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9973F2BE0F02CD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_E9973F2BE0F02CD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5E2B26F327E8FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_3_A5E2B26F327E8FA3_OFFSET))(a1, a2);
		}
	};
}
