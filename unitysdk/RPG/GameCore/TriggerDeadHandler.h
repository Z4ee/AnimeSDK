#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERDEADHANDLER_METHOD_3_AC53DE00CBADDB4C_OFFSET UNITYSDK_OFFSET(0x1D54A340)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_METHOD_3_CB0B9C363E504089_OFFSET UNITYSDK_OFFSET(0x1D54A410)
#define RPG_GAMECORE_TRIGGERDEADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDeadHandler_TypeDefinitionIndex = 22169;

	class TriggerDeadHandler : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC53DE00CBADDB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDeadHandler*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDeadHandler*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER_METHOD_3_AC53DE00CBADDB4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB0B9C363E504089(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDeadHandler* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER_METHOD_3_CB0B9C363E504089_OFFSET))(a1, a2);
		}
	};
}
