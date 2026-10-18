#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_D1EAB2E7744EC29F_OFFSET UNITYSDK_OFFSET(0x1D80B3D0)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_E9A9D41F0E9B65D5_OFFSET UNITYSDK_OFFSET(0x1D80B430)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80B420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareScore_TypeDefinitionIndex = 16895;

	class MarbleByCompareScore : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Boolean ActionScore; // 0x28
		::System::Boolean RoundScore; // 0x29
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30
		::System::String* ValueDynamic; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1EAB2E7744EC29F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_D1EAB2E7744EC29F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9A9D41F0E9B65D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_E9A9D41F0E9B65D5_OFFSET))(a1, a2);
		}
	};
}
