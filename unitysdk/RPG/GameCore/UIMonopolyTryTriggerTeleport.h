#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_METHOD_3_6597FEC5FA4B8FE8_OFFSET UNITYSDK_OFFSET(0x178E0560)
#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_METHOD_3_DF6B00BCCF488E9C_OFFSET UNITYSDK_OFFSET(0x178E0450)
#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x178E0530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyTryTriggerTeleport_TypeDefinitionIndex = 19894;

	class UIMonopolyTryTriggerTeleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF6B00BCCF488E9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_METHOD_3_DF6B00BCCF488E9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6597FEC5FA4B8FE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_METHOD_3_6597FEC5FA4B8FE8_OFFSET))(a1, a2);
		}
	};
}
