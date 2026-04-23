#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_B45B661BC6CD68FF_OFFSET UNITYSDK_OFFSET(0x18CE5BC0)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BE89E5CB00455A2A_OFFSET UNITYSDK_OFFSET(0x18CE5BB0)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionExecInQueueConfigBase_TypeDefinitionIndex = 18585;

	class RogueActionExecInQueueConfigBase : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B45B661BC6CD68FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_B45B661BC6CD68FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BE89E5CB00455A2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_6_BE89E5CB00455A2A_OFFSET))(a1, a2);
		}
	};
}
