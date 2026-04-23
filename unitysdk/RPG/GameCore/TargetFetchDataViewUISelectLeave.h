#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET UNITYSDK_OFFSET(0x18EDCAE0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_B14E66FDC1D4AE06_OFFSET UNITYSDK_OFFSET(0x18EE3FC0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDCA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectLeave_TypeDefinitionIndex = 22952;

	class TargetFetchDataViewUISelectLeave : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B14E66FDC1D4AE06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_B14E66FDC1D4AE06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95F94F6E5A6202C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET))(a1, a2);
		}
	};
}
