#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackData.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_02589044B8050211_OFFSET UNITYSDK_OFFSET(0x1779A8E0)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_4335EF26734328AD_OFFSET UNITYSDK_OFFSET(0x1779A890)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1779A8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingAttackData_TypeDefinitionIndex = 20778;

	class SwordTrainingAttackData : public ::RPG::GameCore::AttackData
	{
	public:
		::RPG::GameCore::SwordTrainingProperty UseSwordTrainingProperty; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4335EF26734328AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingAttackData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingAttackData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_4335EF26734328AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02589044B8050211(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingAttackData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingAttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_METHOD_3_02589044B8050211_OFFSET))(a1, a2);
		}
	};
}
