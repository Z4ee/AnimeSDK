#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_METHOD_3_A94B04E13530B673_OFFSET UNITYSDK_OFFSET(0x1C9F5D40)
#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_METHOD_3_DE0B16751B358A1E_OFFSET UNITYSDK_OFFSET(0x1C9F5D80)
#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F5D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationShowCutIn_TypeDefinitionIndex = 22965;

	class ActivityElationShowCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSpecialCutin; // 0x18
		::System::Single Duration; // 0x1C
		::System::UInt32 AvatarID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A94B04E13530B673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationShowCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationShowCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_METHOD_3_A94B04E13530B673_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE0B16751B358A1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationShowCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_METHOD_3_DE0B16751B358A1E_OFFSET))(a1, a2);
		}
	};
}
