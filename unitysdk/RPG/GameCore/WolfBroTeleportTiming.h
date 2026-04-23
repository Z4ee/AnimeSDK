#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_19C5603254BC6D73_OFFSET UNITYSDK_OFFSET(0x19110F70)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_57BE46D63138ACAA_OFFSET UNITYSDK_OFFSET(0x19110FF0)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING__CTOR_OFFSET UNITYSDK_OFFSET(0x19110FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroTeleportTiming_TypeDefinitionIndex = 20850;

	class WolfBroTeleportTiming : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19C5603254BC6D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroTeleportTiming*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroTeleportTiming*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_19C5603254BC6D73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57BE46D63138ACAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_METHOD_3_57BE46D63138ACAA_OFFSET))(a1, a2);
		}
	};
}
