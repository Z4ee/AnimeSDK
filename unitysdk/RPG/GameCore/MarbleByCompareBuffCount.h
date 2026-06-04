#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_82D672B772D56814_OFFSET UNITYSDK_OFFSET(0x198CAC30)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_EA13B3A73956112B_OFFSET UNITYSDK_OFFSET(0x198CAB50)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x198CABE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareBuffCount_TypeDefinitionIndex = 16026;

	class MarbleByCompareBuffCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::UInt32 BuffId; // 0x28
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA13B3A73956112B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareBuffCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareBuffCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_EA13B3A73956112B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82D672B772D56814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareBuffCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_82D672B772D56814_OFFSET))(a1, a2);
		}
	};
}
