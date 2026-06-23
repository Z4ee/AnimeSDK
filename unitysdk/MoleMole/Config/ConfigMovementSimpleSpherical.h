#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_CLONE_OFFSET UNITYSDK_OFFSET(0x17D5C900)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D5C870)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D5D460)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D5CA70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D5CA00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D5D4C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D5CAF0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D5D980)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D5D300)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x17D5C760)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x17D5C510)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5DB30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x17D5DB40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementSimpleSpherical_TypeDefinitionIndex = 48549;

	class ConfigMovementSimpleSpherical : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* Coords; // 0x38
		::UnityEngine::Vector3 Acceleration; // 0x40
		::UnityEngine::Vector3 InitVelocity; // 0x4C
		::System::Boolean KeepRelativePosition; // 0x58
		::System::Boolean KeepCoordOnStart; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementSimpleSpherical* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleSpherical*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementSimpleSpherical* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleSpherical*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
