#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_173D943B90EBD9C6_OFFSET UNITYSDK_OFFSET(0x188E5190)
#define RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_FD9A36953EB5D277_OFFSET UNITYSDK_OFFSET(0x188E5210)
#define RPG_GAMECORE_FINISHLEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x188E51E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishLevelGraph_TypeDefinitionIndex = 19595;

	class FinishLevelGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MakeOwnerEntityDie; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_173D943B90EBD9C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishLevelGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishLevelGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_173D943B90EBD9C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD9A36953EB5D277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishLevelGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_METHOD_3_FD9A36953EB5D277_OFFSET))(a1, a2);
		}
	};
}
