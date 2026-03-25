#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_667811B649B61FAE;
namespace RPG::GameCore { class TimeScaleStack; }

#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA4992E0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA499070)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET UNITYSDK_OFFSET(0xA4994B0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xA499450)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA499490)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA499430)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xA499470)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA499130)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA499330)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xA4993E0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA499380)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xA499460)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA4994A0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA499440)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xA499480)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA498FA0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xA4990D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulateSpeedController_TypeDefinitionIndex = 60109;

	class SimulateSpeedController : public ::System::Object
	{
	public:
		::Class_1_667811B649B61FAE* _SimulationSpeed; // 0x10
		::RPG::GameCore::TimeScaleStack* SimulationTimeScaleStack; // 0x18
		::System::Single _SimulationSpeed_k__BackingField; // 0x20
		::System::Single _SimulationSpeedInternal_k__BackingField; // 0x24
		::System::Boolean _SimulationSpeedEnable_k__BackingField; // 0x28
		::System::Int32 _s_SimulationPauseCount_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Single GetSimulationSpeed(::System::Boolean refresh)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET))(this, refresh);
		}

		::System::Void _OnSimulationUpdate(::System::Single param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET))(this, param);
		}

		::System::Void AddSimulationPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET))(this);
		}

		::System::Void RemoveSimulationPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET))(this);
		}

		::System::Void SetSimulationSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET))(this, speed);
		}

		::System::Void SetSimulationSpeedEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET))(this, enable);
		}

		::System::Void RefreshSimulationSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET))(this);
		}

		::System::Single get_SimulationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET))(this);
		}

		::System::Void set_SimulationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_SimulationSpeedEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET))(this);
		}

		::System::Void set_SimulationSpeedEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET))(this, value);
		}

		::System::Int32 get_s_SimulationPauseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET))(this);
		}

		::System::Void set_s_SimulationPauseCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET))(this, value);
		}

		::System::Single get_SimulationSpeedInternal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET))(this);
		}

		::System::Void set_SimulationSpeedInternal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET))(this);
		}
	};
}
