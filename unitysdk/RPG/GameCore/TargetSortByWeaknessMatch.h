#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_27FD06F3DCC54FB2_OFFSET UNITYSDK_OFFSET(0x18EF9870)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_EB054EE9DAD10D7E_OFFSET UNITYSDK_OFFSET(0x18EF8860)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF8840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByWeaknessMatch_TypeDefinitionIndex = 22984;

	class TargetSortByWeaknessMatch : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* Defenders; // 0x10
		::System::Boolean MatchFirst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27FD06F3DCC54FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_27FD06F3DCC54FB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB054EE9DAD10D7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_METHOD_3_EB054EE9DAD10D7E_OFFSET))(a1, a2);
		}
	};
}
