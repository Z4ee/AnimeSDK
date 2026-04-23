#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_4D522038EE66A25D_OFFSET UNITYSDK_OFFSET(0x1875F160)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_E55F76F93549C733_OFFSET UNITYSDK_OFFSET(0x1875F230)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1875F1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySharedSummonUnitInUse_TypeDefinitionIndex = 20140;

	class BySharedSummonUnitInUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D522038EE66A25D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_4D522038EE66A25D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E55F76F93549C733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_E55F76F93549C733_OFFSET))(a1, a2);
		}
	};
}
