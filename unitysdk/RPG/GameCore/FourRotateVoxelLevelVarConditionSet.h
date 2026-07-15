#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_METHOD_2_3CC111F9E2E5C325_OFFSET UNITYSDK_OFFSET(0x1B97BC80)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97C8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelVarConditionSet_TypeDefinitionIndex = 16119;

	class FourRotateVoxelLevelVarConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelLevelVarCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CC111F9E2E5C325(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelVarConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelVarConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_METHOD_2_3CC111F9E2E5C325_OFFSET))(a1, a2);
		}
	};
}
