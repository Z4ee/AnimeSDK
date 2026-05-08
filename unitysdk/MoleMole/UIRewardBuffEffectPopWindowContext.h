#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_6535CE33BDD95E74;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREWARDBUFFEFFECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardBuffEffectPopWindowContext_TypeDefinitionIndex = 78057;

	class UIRewardBuffEffectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_6535CE33BDD95E74*>* RewardBuffs; // 0x28
		::Enum_3_A3F38457E644339A RewardBuffGameTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDBUFFEFFECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
