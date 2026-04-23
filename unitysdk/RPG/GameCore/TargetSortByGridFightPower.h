#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_26DFAB84B777910B_OFFSET UNITYSDK_OFFSET(0x18EF9360)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E0586056D3A677C_OFFSET UNITYSDK_OFFSET(0x18EF7890)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF7870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightPower_TypeDefinitionIndex = 22986;

	class TargetSortByGridFightPower : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26DFAB84B777910B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_26DFAB84B777910B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E0586056D3A677C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E0586056D3A677C_OFFSET))(a1, a2);
		}
	};
}
