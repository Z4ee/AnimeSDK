#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BA3DBDDF52E83A6E_OFFSET UNITYSDK_OFFSET(0x1EE89E90)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BE89E5CB00455A2A_OFFSET UNITYSDK_OFFSET(0x1EE89EE0)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionExecInQueueConfigBase_TypeDefinitionIndex = 19353;

	class RogueActionExecInQueueConfigBase : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BA3DBDDF52E83A6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BA3DBDDF52E83A6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BE89E5CB00455A2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BE89E5CB00455A2A_OFFSET))(a1, a2);
		}
	};
}
