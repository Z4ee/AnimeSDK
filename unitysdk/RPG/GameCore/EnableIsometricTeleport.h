#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEISOMETRICTELEPORT_METHOD_3_1D6B59F84E830D15_OFFSET UNITYSDK_OFFSET(0x1D7BDB80)
#define RPG_GAMECORE_ENABLEISOMETRICTELEPORT_METHOD_3_C20DF92A600CB0D6_OFFSET UNITYSDK_OFFSET(0x1D7BDB30)
#define RPG_GAMECORE_ENABLEISOMETRICTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableIsometricTeleport_TypeDefinitionIndex = 21960;

	class EnableIsometricTeleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEISOMETRICTELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C20DF92A600CB0D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableIsometricTeleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableIsometricTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEISOMETRICTELEPORT_METHOD_3_C20DF92A600CB0D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D6B59F84E830D15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableIsometricTeleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableIsometricTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEISOMETRICTELEPORT_METHOD_3_1D6B59F84E830D15_OFFSET))(a1, a2);
		}
	};
}
