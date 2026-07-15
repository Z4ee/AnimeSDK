#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_METHOD_3_2BCEDC3E2122E032_OFFSET UNITYSDK_OFFSET(0x1AAE3910)
#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_METHOD_3_9B8C3CBEBB3680AF_OFFSET UNITYSDK_OFFSET(0x1AAE39E0)
#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE39D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationHideCutIn_TypeDefinitionIndex = 22396;

	class ActivityElationHideCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BCEDC3E2122E032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationHideCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationHideCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_METHOD_3_2BCEDC3E2122E032_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B8C3CBEBB3680AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationHideCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationHideCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_METHOD_3_9B8C3CBEBB3680AF_OFFSET))(a1, a2);
		}
	};
}
