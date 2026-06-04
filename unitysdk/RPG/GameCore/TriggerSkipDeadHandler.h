#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_METHOD_3_146D805F58D71A08_OFFSET UNITYSDK_OFFSET(0x19E1DE50)
#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_METHOD_3_32B5E7BFC8A5743C_OFFSET UNITYSDK_OFFSET(0x19E1DD40)
#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1DE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSkipDeadHandler_TypeDefinitionIndex = 21273;

	class TriggerSkipDeadHandler : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32B5E7BFC8A5743C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSkipDeadHandler*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSkipDeadHandler*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_METHOD_3_32B5E7BFC8A5743C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_146D805F58D71A08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSkipDeadHandler* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSkipDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_METHOD_3_146D805F58D71A08_OFFSET))(a1, a2);
		}
	};
}
