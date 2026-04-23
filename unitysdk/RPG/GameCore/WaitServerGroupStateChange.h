#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_METHOD_3_A40EF486C07A2DB5_OFFSET UNITYSDK_OFFSET(0x191087B0)
#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_METHOD_3_E1B18BDDCB0E12A5_OFFSET UNITYSDK_OFFSET(0x19108720)
#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19108780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupStateChange_TypeDefinitionIndex = 20152;

	class WaitServerGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1B18BDDCB0E12A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_METHOD_3_E1B18BDDCB0E12A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A40EF486C07A2DB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_METHOD_3_A40EF486C07A2DB5_OFFSET))(a1, a2);
		}
	};
}
