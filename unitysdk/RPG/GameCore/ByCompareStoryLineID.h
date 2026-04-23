#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_5E6DBFA5633E856C_OFFSET UNITYSDK_OFFSET(0x1873D570)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_A125A719A05578AE_OFFSET UNITYSDK_OFFSET(0x1873D4A0)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1873D520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStoryLineID_TypeDefinitionIndex = 19746;

	class ByCompareStoryLineID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetStoryLineID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A125A719A05578AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_A125A719A05578AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E6DBFA5633E856C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_5E6DBFA5633E856C_OFFSET))(a1, a2);
		}
	};
}
