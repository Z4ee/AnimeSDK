#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET UNITYSDK_OFFSET(0x18EE0950)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_CF2EB1595F9C95D2_OFFSET UNITYSDK_OFFSET(0x18EE5FD0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE0900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTrailblazer_TypeDefinitionIndex = 22959;

	class TargetFetchTrailblazer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF2EB1595F9C95D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_CF2EB1595F9C95D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77DAD0F287096B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET))(a1, a2);
		}
	};
}
