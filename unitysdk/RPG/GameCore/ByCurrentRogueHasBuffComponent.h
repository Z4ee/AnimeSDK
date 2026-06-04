#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_METHOD_4_52DFD9D78B4F76CA_OFFSET UNITYSDK_OFFSET(0x195428F0)
#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_METHOD_4_A361F41A90BD138A_OFFSET UNITYSDK_OFFSET(0x19542830)
#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x195428A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueHasBuffComponent_TypeDefinitionIndex = 19892;

	class ByCurrentRogueHasBuffComponent : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A361F41A90BD138A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasBuffComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasBuffComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_METHOD_4_A361F41A90BD138A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_52DFD9D78B4F76CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasBuffComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasBuffComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_METHOD_4_52DFD9D78B4F76CA_OFFSET))(a1, a2);
		}
	};
}
