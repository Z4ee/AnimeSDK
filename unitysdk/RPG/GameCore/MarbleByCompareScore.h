#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_435B1A3B3AF17565_OFFSET UNITYSDK_OFFSET(0x1D22F870)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_BACF0E3A50B902E2_OFFSET UNITYSDK_OFFSET(0x1D22F810)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22F860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareScore_TypeDefinitionIndex = 16704;

	class MarbleByCompareScore : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Boolean ActionScore; // 0x28
		::System::Boolean RoundScore; // 0x29
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BACF0E3A50B902E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_BACF0E3A50B902E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_435B1A3B3AF17565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_METHOD_4_435B1A3B3AF17565_OFFSET))(a1, a2);
		}
	};
}
