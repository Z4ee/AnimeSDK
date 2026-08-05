#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveCondition.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveConditionByBodySize_BodySizePair.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12A4CB20)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE_PASS_OFFSET UNITYSDK_OFFSET(0x12A4CA20)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4CB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySize_TypeDefinitionIndex = 43818;

	class CameraStoryDataActiveConditionByBodySize : public ::MoleMole::Config::CameraStoryDataActiveCondition
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataActiveConditionByBodySize_BodySizePair>* activeConditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE__CTOR_OFFSET))(this);
		}

		::System::Boolean Pass(::Nap::NapECS::EcsWorld* world, ::System::UInt32 playerId, ::System::UInt32 npcId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE_PASS_OFFSET))(this, world, playerId, npcId);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
