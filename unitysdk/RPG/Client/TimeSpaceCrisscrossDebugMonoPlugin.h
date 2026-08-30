#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TimeSpaceCrisscrossDebugBehavior; }

#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19798520)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossDebugMonoPlugin_TypeDefinitionIndex = 70164;

	class TimeSpaceCrisscrossDebugMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TimeSpaceCrisscrossDebugBehavior*>
	{
	public:
		::UnityEngine::Vector3 ConePotisionA; // 0x30
		::UnityEngine::Vector3 ConeDirectionA; // 0x3C
		::System::Single ConeAngleA; // 0x48
		::System::Single ConeDistanceA; // 0x4C
		::System::Boolean EnableConeA; // 0x50
		::UnityEngine::Vector3 ConePotisionB; // 0x54
		::UnityEngine::Vector3 ConeDirectionB; // 0x60
		::System::Single ConeAngleB; // 0x6C
		::System::Single ConeDistanceB; // 0x70
		::System::Boolean EnableConeB; // 0x74
		::UnityEngine::Vector3 ConePotisionC; // 0x78
		::UnityEngine::Vector3 ConeDirectionC; // 0x84
		::System::Single ConeAngleC; // 0x90
		::System::Single ConeDistanceC; // 0x94
		::System::Boolean EnableConeC; // 0x98
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState TSCState; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
