#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FiveDimDynamicVar; }

#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_3_26E69886A72E7622_OFFSET UNITYSDK_OFFSET(0x19754A30)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_3_360B6D301C0FDB9B_OFFSET UNITYSDK_OFFSET(0x19754AA0)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19754A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetLevelVarShortAction_TypeDefinitionIndex = 17750;

	class FiveDimSetLevelVarShortAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimDynamicVar* Name; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Boolean IsSetOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26E69886A72E7622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_3_26E69886A72E7622_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_360B6D301C0FDB9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_3_360B6D301C0FDB9B_OFFSET))(a1, a2);
		}
	};
}
