#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_0A5A703EC0A0E311_OFFSET UNITYSDK_OFFSET(0x19C5FCE0)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_2B8661889E20143E_OFFSET UNITYSDK_OFFSET(0x19C5FD60)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStepperDecisionGroupIndex_TypeDefinitionIndex = 21502;

	class SetStepperDecisionGroupIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x18
		::RPG::GameCore::DynamicFloat* NextIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A5A703EC0A0E311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStepperDecisionGroupIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_0A5A703EC0A0E311_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B8661889E20143E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_METHOD_3_2B8661889E20143E_OFFSET))(a1, a2);
		}
	};
}
