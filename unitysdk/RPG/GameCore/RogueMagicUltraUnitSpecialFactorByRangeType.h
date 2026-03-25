#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseRogueMagicUltraUnitSpecialFactor.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_METHOD_3_81E7DA00F924207B_OFFSET UNITYSDK_OFFSET(0x17616F80)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_METHOD_3_C0C05FA85F18690B_OFFSET UNITYSDK_OFFSET(0x17616FE0)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17616FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUltraUnitSpecialFactorByRangeType_TypeDefinitionIndex = 16469;

	class RogueMagicUltraUnitSpecialFactorByRangeType : public ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor
	{
	public:
		::RPG::GameCore::RogueMagicRangeType ScpterRangeType; // 0x10
		::Il2CppArray<::System::Single>* MatchFactors; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81E7DA00F924207B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_METHOD_3_81E7DA00F924207B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0C05FA85F18690B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_METHOD_3_C0C05FA85F18690B_OFFSET))(a1, a2);
		}
	};
}
