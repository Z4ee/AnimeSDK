#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }

#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_METHOD_2_8D68B5BF7675D3CA_OFFSET UNITYSDK_OFFSET(0x1B070E10)
#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B070F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSavedValueConditionSet_TypeDefinitionIndex = 16523;

	class LevelGroupSavedValueConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupSavedValueCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D68B5BF7675D3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSavedValueConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSavedValueConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_METHOD_2_8D68B5BF7675D3CA_OFFSET))(a1, a2);
		}
	};
}
