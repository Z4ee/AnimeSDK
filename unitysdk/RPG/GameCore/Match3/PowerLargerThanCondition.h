#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_METHOD_5_54A7048630D2AF38_OFFSET UNITYSDK_OFFSET(0x1D2429A0)
#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_METHOD_5_75ED099241D561CA_OFFSET UNITYSDK_OFFSET(0x1D2454B0)
#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D242990)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PowerLargerThanCondition_TypeDefinitionIndex = 24607;

	class PowerLargerThanCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 Power; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_75ED099241D561CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerLargerThanCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerLargerThanCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_METHOD_5_75ED099241D561CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_54A7048630D2AF38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_METHOD_5_54A7048630D2AF38_OFFSET))(a1, a2);
		}
	};
}
