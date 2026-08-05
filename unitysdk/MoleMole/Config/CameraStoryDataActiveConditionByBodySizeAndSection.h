#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveCondition.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveConditionByBodySizeAndSection_Condition.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x116F8600)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION_PASS_OFFSET UNITYSDK_OFFSET(0x116F8430)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x116F8610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySizeAndSection_TypeDefinitionIndex = 51862;

	class CameraStoryDataActiveConditionByBodySizeAndSection : public ::MoleMole::Config::CameraStoryDataActiveCondition
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* sections; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataActiveConditionByBodySizeAndSection_Condition>* conditions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean Pass(::Nap::NapECS::EcsWorld* world, ::System::UInt32 playerId, ::System::UInt32 npcId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION_PASS_OFFSET))(this, world, playerId, npcId);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION_GET_PRIORITY_OFFSET))(this);
		}
	};
}
