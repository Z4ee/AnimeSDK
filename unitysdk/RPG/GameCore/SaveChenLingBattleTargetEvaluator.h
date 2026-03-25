#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR_METHOD_3_29FE4DBB8E709AD3_OFFSET UNITYSDK_OFFSET(0x1769A690)
#define RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR_METHOD_3_5CFD35E935E43011_OFFSET UNITYSDK_OFFSET(0x1769A630)
#define RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1769A680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveChenLingBattleTargetEvaluator_TypeDefinitionIndex = 14469;

	class SaveChenLingBattleTargetEvaluator : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::System::String* SaveName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CFD35E935E43011(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR_METHOD_3_5CFD35E935E43011_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29FE4DBB8E709AD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHENLINGBATTLETARGETEVALUATOR_METHOD_3_29FE4DBB8E709AD3_OFFSET))(a1, a2);
		}
	};
}
