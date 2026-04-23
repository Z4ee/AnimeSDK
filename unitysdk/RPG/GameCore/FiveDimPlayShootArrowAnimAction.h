#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_3_99BA49F0C0DAA4F2_OFFSET UNITYSDK_OFFSET(0x18912BB0)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_3_B406C91775448CFF_OFFSET UNITYSDK_OFFSET(0x18912C70)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18912C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayShootArrowAnimAction_TypeDefinitionIndex = 17791;

	class FiveDimPlayShootArrowAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99BA49F0C0DAA4F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_3_99BA49F0C0DAA4F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B406C91775448CFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_3_B406C91775448CFF_OFFSET))(a1, a2);
		}
	};
}
