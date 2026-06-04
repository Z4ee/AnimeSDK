#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_1CD1DC13E3F9B528_OFFSET UNITYSDK_OFFSET(0x19E60630)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_EA6968976ADB00C1_OFFSET UNITYSDK_OFFSET(0x19E605B0)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E60600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionLoadingStateChange_TypeDefinitionIndex = 19769;

	class WaitRotatableRegionLoadingStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA6968976ADB00C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_EA6968976ADB00C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CD1DC13E3F9B528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_1CD1DC13E3F9B528_OFFSET))(a1, a2);
		}
	};
}
