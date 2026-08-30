#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorQueryContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Visitor.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2COMPAREVISITORS_OFFSET UNITYSDK_OFFSET(0x1C2FF7D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2DESTROYSENSOR_OFFSET UNITYSDK_OFFSET(0x1C2B18F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2OVERLAPSENSORS_OFFSET UNITYSDK_OFFSET(0x1C300180)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2SENSORQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C2FF2A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2SENSORTASK_OFFSET UNITYSDK_OFFSET(0x1C2FF7E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Sensors_TypeDefinitionIndex = 36068;

	class B2Sensors : public ::System::Object
	{
	public:
		static ::System::Boolean b2SensorQueryCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorQueryContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorQueryContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2SENSORQUERYCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 b2CompareVisitors(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor& a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2COMPAREVISITORS_OFFSET))(a1, a2);
		}

		static ::System::Void b2SensorTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2SENSORTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2OverlapSensors(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2OVERLAPSENSORS_OFFSET))(a1);
		}

		static ::System::Void b2DestroySensor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORS_B2DESTROYSENSOR_OFFSET))(a1, a2);
		}
	};
}
