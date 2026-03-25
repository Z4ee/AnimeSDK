#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHASEVALUEACTIONPAIRSERIALIZATION_METHOD_2_104C5DCA44A4D120_OFFSET UNITYSDK_OFFSET(0x174A41D0)
#define RPG_GAMECORE_PHASEVALUEACTIONPAIRSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x174A4290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhaseValueActionPairSerialization_TypeDefinitionIndex = 17613;

	class PhaseValueActionPairSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 PhaseValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASEVALUEACTIONPAIRSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_104C5DCA44A4D120(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhaseValueActionPairSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhaseValueActionPairSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASEVALUEACTIONPAIRSERIALIZATION_METHOD_2_104C5DCA44A4D120_OFFSET))(a1, a2);
		}
	};
}
