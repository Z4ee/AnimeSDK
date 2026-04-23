#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_METHOD_2_4611ACB31B72FE5D_OFFSET UNITYSDK_OFFSET(0x18A47200)
#define RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18A47330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSystemUnlockConditionSet_TypeDefinitionIndex = 16330;

	class LevelGroupSystemUnlockConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4611ACB31B72FE5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSystemUnlockConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSystemUnlockConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_METHOD_2_4611ACB31B72FE5D_OFFSET))(a1, a2);
		}
	};
}
