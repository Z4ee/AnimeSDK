#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A93E3B04E85C3E99_OFFSET UNITYSDK_OFFSET(0x1700C4B0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_D6AFE0802CB586FF_OFFSET UNITYSDK_OFFSET(0x1700C3E0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700C460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsBookAvailable_TypeDefinitionIndex = 19210;

	class ByCompareIsBookAvailable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BookSeriesID; // 0x20
		::System::UInt32 BookID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6AFE0802CB586FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_D6AFE0802CB586FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A93E3B04E85C3E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A93E3B04E85C3E99_OFFSET))(a1, a2);
		}
	};
}
