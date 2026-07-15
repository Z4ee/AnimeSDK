#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_3B5D491E69CC98E1_OFFSET UNITYSDK_OFFSET(0x1D1C3F00)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_57BE46D63138ACAA_OFFSET UNITYSDK_OFFSET(0x1D1C3F50)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C3F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroTeleportTiming_TypeDefinitionIndex = 21185;

	class WolfBroTeleportTiming : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B5D491E69CC98E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroTeleportTiming*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroTeleportTiming*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_3B5D491E69CC98E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57BE46D63138ACAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_57BE46D63138ACAA_OFFSET))(a1, a2);
		}
	};
}
