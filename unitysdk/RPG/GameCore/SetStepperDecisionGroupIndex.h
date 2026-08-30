#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_2B8661889E20143E_OFFSET UNITYSDK_OFFSET(0x1E08ED60)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_C3FE2BB9DA789EE7_OFFSET UNITYSDK_OFFSET(0x1E08ED20)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08ED50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStepperDecisionGroupIndex_TypeDefinitionIndex = 22487;

	class SetStepperDecisionGroupIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x18
		::RPG::GameCore::DynamicFloat* NextIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3FE2BB9DA789EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStepperDecisionGroupIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_C3FE2BB9DA789EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B8661889E20143E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_2B8661889E20143E_OFFSET))(a1, a2);
		}
	};
}
