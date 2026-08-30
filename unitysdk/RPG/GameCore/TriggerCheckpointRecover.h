#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_METHOD_3_81A2C82E3FF7A4FD_OFFSET UNITYSDK_OFFSET(0x1D5F14C0)
#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_METHOD_3_B6F510D1FE3EA278_OFFSET UNITYSDK_OFFSET(0x1D5F1480)
#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F14B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCheckpointRecover_TypeDefinitionIndex = 20217;

	class TriggerCheckpointRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* PropID; // 0x20
		::System::Boolean TargetIsOwner; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6F510D1FE3EA278(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCheckpointRecover*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCheckpointRecover*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_METHOD_3_B6F510D1FE3EA278_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81A2C82E3FF7A4FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_METHOD_3_81A2C82E3FF7A4FD_OFFSET))(a1, a2);
		}
	};
}
