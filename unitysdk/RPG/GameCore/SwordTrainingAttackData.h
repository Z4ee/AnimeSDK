#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackData.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_9CDFBF4E14BA8804_OFFSET UNITYSDK_OFFSET(0x1DB19D00)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_D7EF3B241F774D17_OFFSET UNITYSDK_OFFSET(0x1DB19D50)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB19D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingAttackData_TypeDefinitionIndex = 22596;

	class SwordTrainingAttackData : public ::RPG::GameCore::AttackData
	{
	public:
		::RPG::GameCore::SwordTrainingProperty UseSwordTrainingProperty; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CDFBF4E14BA8804(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingAttackData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingAttackData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_9CDFBF4E14BA8804_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7EF3B241F774D17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingAttackData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingAttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_D7EF3B241F774D17_OFFSET))(a1, a2);
		}
	};
}
