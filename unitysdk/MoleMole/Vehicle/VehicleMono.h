#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/MoleMole/Vehicle/VehicleMono_AnimLayerInfo.h"
#include "unitysdk/Struct_2_07154FD31BC71493.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DFEB9A1A221CB8BE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleCollider; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace MoleMole::Vehicle { class VehicleInputHandle; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_VEHICLE_VEHICLEMONO_ENTERVOLUME_OFFSET UNITYSDK_OFFSET(0x1149FD10)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_EXCLUDESOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0x1149FE50)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_EXITVOLUME_OFFSET UNITYSDK_OFFSET(0x1149FDC0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GETHITCOUNT_OFFSET UNITYSDK_OFFSET(0x1149E8D0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x1149E870)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x1149E640)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_VEHICLEUNIT_OFFSET UNITYSDK_OFFSET(0x1149E930)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_INITENTITY_OFFSET UNITYSDK_OFFSET(0x1149F5F0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1149F330)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1149FA10)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1149E9A0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x1149E7C0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_ONTIMESCALECHANGED_OFFSET UNITYSDK_OFFSET(0x114A00A0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1149F5A0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_OVERRIDEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1149FF10)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_STARTRUN_OFFSET UNITYSDK_OFFSET(0x1149FC20)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_START_OFFSET UNITYSDK_OFFSET(0x1149E940)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_TRYGETVEHICLECOMPONENT_OFFSET UNITYSDK_OFFSET(0x114A0360)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1149EB70)
#define MOLEMOLE_VEHICLE_VEHICLEMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x114A0460)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleMono_TypeDefinitionIndex = 68047;

	class VehicleMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean drawSteer; // 0x18
		::System::Boolean drawRoad; // 0x19
		::System::Boolean drawAutomatic; // 0x1A
		::UnityEngine::Color trailColor; // 0x1C
		::System::Single trailDuration; // 0x2C
		::System::Boolean overrideInput; // 0x30
		::MoleMole::Vehicle::VehicleControlInput configInput; // 0x34
		::System::Boolean _isAutoDrive; // 0x40
		::MoleMole::Vehicle::VehicleInputHandle* inputHandle; // 0x48
		::UnityEngine::Animator* driverAnimator; // 0x50
		::UnityEngine::Animator* vehicleAnimator; // 0x58
		::MoleMole::Vehicle::VehicleCollisions collisions; // 0x60
		::MoleMole::Vehicle::VehicleModelNodes modelNodes; // 0x70
		::MoleMole::Vehicle::VehicleConfig* config; // 0x80
		::Il2CppArray<::MoleMole::Vehicle::VehicleMono_AnimLayerInfo>* AnimatorStateLength; // 0x88
		::Class_1_DFEB9A1A221CB8BE* Field_5_17; // 0x90
		::System::Boolean Field_5_16; // 0x98
		::UnityEngine::Vector3 Field_5_23; // 0x9C
		::System::Collections::Generic::HashSet_1<::MoleMole::Vehicle::VehicleCollider*>* Field_5_22; // 0xA8
		::Il2CppArray<::UnityEngine::Rigidbody*>* Field_5_21; // 0xB0
		::System::Boolean _isStarted; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO__CTOR_OFFSET))(this);
		}

		::Class_1_DFEB9A1A221CB8BE* get_Preview()
		{
			return ((::Class_1_DFEB9A1A221CB8BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_PREVIEW_OFFSET))(this);
		}

		::System::Int32 get_HitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_HITCOUNT_OFFSET))(this);
		}

		::Class_1_DFEB9A1A221CB8BE* get_VehicleUnit()
		{
			return ((::Class_1_DFEB9A1A221CB8BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_VEHICLEUNIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ONVALIDATE_OFFSET))(this);
		}

		::System::Void InitEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_INITENTITY_OFFSET))(this, a1);
		}

		::System::Void StartRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_STARTRUN_OFFSET))(this);
		}

		::System::Void EnterVolume(::MoleMole::Vehicle::VehicleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ENTERVOLUME_OFFSET))(this, a1);
		}

		::System::Void ExitVolume(::MoleMole::Vehicle::VehicleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_EXITVOLUME_OFFSET))(this, a1);
		}

		::System::Void ExcludeSoundObject(::MoleMole::Vehicle::VehicleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_EXCLUDESOUNDOBJECT_OFFSET))(this, a1);
		}

		::System::Void OverrideMaxSpeed(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_OVERRIDEMAXSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void OnTimeScaleChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ONTIMESCALECHANGED_OFFSET))(this, a1);
		}

		static ::MoleMole::Vehicle::VehicleMono* TryGetVehicleComponent(::MoleMole::Battle::Entity* a1)
		{
			return ((::MoleMole::Vehicle::VehicleMono*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_TRYGETVEHICLECOMPONENT_OFFSET))(a1);
		}

		::System::Int32 GetHitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GETHITCOUNT_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::Struct_2_07154FD31BC71493 Method_5_BA80D36BDA3B5115()
		{
			return ((::Struct_2_07154FD31BC71493(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_METHOD_5_BA80D36BDA3B5115_OFFSET))(this);
		}
	};
}
