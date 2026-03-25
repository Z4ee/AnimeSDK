#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_METHOD_3_647E6CAC983EB203_OFFSET UNITYSDK_OFFSET(0x1704BC40)
#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_METHOD_3_72F143E60539301E_OFFSET UNITYSDK_OFFSET(0x17047CC0)
#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17047CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFrontCatNumPredicateConfig_TypeDefinitionIndex = 16881;

	class CakeRaceFrontCatNumPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::System::UInt32 Num; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_647E6CAC983EB203(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_METHOD_3_647E6CAC983EB203_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72F143E60539301E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_METHOD_3_72F143E60539301E_OFFSET))(a1, a2);
		}
	};
}
