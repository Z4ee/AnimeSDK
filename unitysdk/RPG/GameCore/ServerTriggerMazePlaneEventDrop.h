#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_METHOD_3_535FDF03A75F5476_OFFSET UNITYSDK_OFFSET(0x19C25BE0)
#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_METHOD_3_6234581BC9113B76_OFFSET UNITYSDK_OFFSET(0x19C25C70)
#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C25C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerTriggerMazePlaneEventDrop_TypeDefinitionIndex = 21090;

	class ServerTriggerMazePlaneEventDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_535FDF03A75F5476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_METHOD_3_535FDF03A75F5476_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6234581BC9113B76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_METHOD_3_6234581BC9113B76_OFFSET))(a1, a2);
		}
	};
}
