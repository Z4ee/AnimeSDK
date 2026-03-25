#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IslandStateSavedValueCondition; }

#define RPG_GAMECORE_ISLANDSTATECONDITIONSET_METHOD_2_8AED93D86E92DD70_OFFSET UNITYSDK_OFFSET(0x172C18F0)
#define RPG_GAMECORE_ISLANDSTATECONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x172C1A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IslandStateConditionSet_TypeDefinitionIndex = 17545;

	class IslandStateConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::IslandStateSavedValueCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AED93D86E92DD70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IslandStateConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IslandStateConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONDITIONSET_METHOD_2_8AED93D86E92DD70_OFFSET))(a1, a2);
		}
	};
}
