#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_AF4D3A3041939147.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_CLONE_OFFSET UNITYSDK_OFFSET(0x1271AE20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1271AD90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1271BD20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1271AF90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1271AF20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1271BD80)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1271B010)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1271C1B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1271BBC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1271A670)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x12719F60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12719F30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1271C360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementCurve_TypeDefinitionIndex = 66563;

	class ConfigMovementCurve : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::UnityEngine::AnimationCurve* VelocityCurveZ; // 0x38
		::UnityEngine::AnimationCurve* VelocityCurveY; // 0x40
		::MoleMole::Config::ConfigPosRot* CoordinatePosRot; // 0x48
		::UnityEngine::AnimationCurve* VelocityCurveX; // 0x50
		::Enum_3_AF4D3A3041939147 CoordinateType; // 0x58
		::Enum_3_32134AA19ED34F5D DirectionUpdateMode; // 0x5C
		::System::Single ScaleRatio; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementCurve* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementCurve*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementCurve* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementCurve*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
