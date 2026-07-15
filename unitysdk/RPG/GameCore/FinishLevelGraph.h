#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_77F525CACB6A5E3C_OFFSET UNITYSDK_OFFSET(0x1BA81CF0)
#define RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_FD9A36953EB5D277_OFFSET UNITYSDK_OFFSET(0x1BA81D30)
#define RPG_GAMECORE_FINISHLEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA81D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishLevelGraph_TypeDefinitionIndex = 19840;

	class FinishLevelGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MakeOwnerEntityDie; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77F525CACB6A5E3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishLevelGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishLevelGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_77F525CACB6A5E3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD9A36953EB5D277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishLevelGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_FD9A36953EB5D277_OFFSET))(a1, a2);
		}
	};
}
