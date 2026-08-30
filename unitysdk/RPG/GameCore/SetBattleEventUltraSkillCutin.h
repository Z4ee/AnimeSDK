#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_METHOD_3_2E4A7AF8A128C306_OFFSET UNITYSDK_OFFSET(0x1D4E2E60)
#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_METHOD_3_54A19EB125F9D331_OFFSET UNITYSDK_OFFSET(0x1D4E2E20)
#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E2E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleEventUltraSkillCutin_TypeDefinitionIndex = 22491;

	class SetBattleEventUltraSkillCutin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BETarget; // 0x18
		::System::Boolean IsCutin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54A19EB125F9D331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_METHOD_3_54A19EB125F9D331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E4A7AF8A128C306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_METHOD_3_2E4A7AF8A128C306_OFFSET))(a1, a2);
		}
	};
}
