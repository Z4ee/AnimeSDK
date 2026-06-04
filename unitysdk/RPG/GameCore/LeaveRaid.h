#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEAVERAID_METHOD_3_80B023C55B789638_OFFSET UNITYSDK_OFFSET(0x1986B6E0)
#define RPG_GAMECORE_LEAVERAID_METHOD_3_F68A15C082FE5DAC_OFFSET UNITYSDK_OFFSET(0x1986B5D0)
#define RPG_GAMECORE_LEAVERAID__CTOR_OFFSET UNITYSDK_OFFSET(0x1986B6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LeaveRaid_TypeDefinitionIndex = 20398;

	class LeaveRaid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F68A15C082FE5DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveRaid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveRaid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID_METHOD_3_F68A15C082FE5DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80B023C55B789638(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveRaid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID_METHOD_3_80B023C55B789638_OFFSET))(a1, a2);
		}
	};
}
