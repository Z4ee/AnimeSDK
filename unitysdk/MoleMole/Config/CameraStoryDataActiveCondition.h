#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION_GETENTITYBODYSIZE_OFFSET UNITYSDK_OFFSET(0xED0E360)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xED0E4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveCondition_TypeDefinitionIndex = 65451;

	class CameraStoryDataActiveCondition : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Battle::EntityBodySize GetEntityBodySize(::Nap::NapECS::EcsWorld* world, ::System::UInt32 entityId)
		{
			return ((::MoleMole::Battle::EntityBodySize(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION_GETENTITYBODYSIZE_OFFSET))(world, entityId);
		}
	};
}
