#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET UNITYSDK_OFFSET(0x17012B60)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_C94FF5F5C7AFDBBE_OFFSET UNITYSDK_OFFSET(0x170129C0)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17012AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropAnimState_TypeDefinitionIndex = 20130;

	class ByComparePropAnimState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* State; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C94FF5F5C7AFDBBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_C94FF5F5C7AFDBBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DAC096B4DD86DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET))(a1, a2);
		}
	};
}
