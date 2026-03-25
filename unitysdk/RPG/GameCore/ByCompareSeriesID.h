#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_12AE3D8EA59562D1_OFFSET UNITYSDK_OFFSET(0x170169B0)
#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_9DA5B2261FE062CB_OFFSET UNITYSDK_OFFSET(0x17016A80)
#define RPG_GAMECORE_BYCOMPARESERIESID__CTOR_OFFSET UNITYSDK_OFFSET(0x17016A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSeriesID_TypeDefinitionIndex = 19396;

	class ByCompareSeriesID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12AE3D8EA59562D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_12AE3D8EA59562D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DA5B2261FE062CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_9DA5B2261FE062CB_OFFSET))(a1, a2);
		}
	};
}
