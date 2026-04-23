#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EB1F0EB26D816EA6;
namespace RPG::GameCore { class TimeScaleStack; }

#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xB1889B0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB188740)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET UNITYSDK_OFFSET(0xB188B80)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xB188B20)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xB188B60)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB188B00)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xB188B40)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB188800)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xB188A00)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xB188AB0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB188A50)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xB188B30)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xB188B70)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB188B10)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xB188B50)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1885F0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1887A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulateSpeedController_TypeDefinitionIndex = 67542;

	class SimulateSpeedController : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeScaleStack* SimulationTimeScaleStack; // 0x10
		::Class_1_EB1F0EB26D816EA6* _SimulationSpeed; // 0x18
		::System::Boolean _SimulationSpeedEnable_k__BackingField; // 0x20
		::System::Single _SimulationSpeed_k__BackingField; // 0x24
		::System::Int32 _s_SimulationPauseCount_k__BackingField; // 0x28
		::System::Single _SimulationSpeedInternal_k__BackingField; // 0x2C

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
