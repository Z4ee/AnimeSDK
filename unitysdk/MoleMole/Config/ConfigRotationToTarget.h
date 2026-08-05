#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_DBE85A55BA66609E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_4;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x14872320)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x148722B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14873A50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14872430)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x14872420)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x148704E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x14870DC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET UNITYSDK_OFFSET(0x14870730)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x14872010)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14873AB0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x148724B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14874080)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x14873960)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET UNITYSDK_OFFSET(0x14870FC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x14870330)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET UNITYSDK_OFFSET(0x148707D0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x148702E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x14874200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTarget_TypeDefinitionIndex = 48662;

	class ConfigRotationToTarget : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::Class_1_D0D2B3C2533F6DF2_4* SpeedRatioCurvebyDistance; // 0x28
		::UnityEngine::AnimationCurve* RotationCurve; // 0x30
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x38
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x40
		::System::Single RotationAngleLimit; // 0x48
		::Enum_3_DBE85A55BA66609E RotateType; // 0x4C
		::System::Single RotateSpeed; // 0x50
		::System::Single ScaleRatio; // 0x54
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x58
		::System::Boolean ReachTargetStop; // 0x5C
		::System::Boolean DirectlyApplyRotation; // 0x5D
		::System::Boolean DisableTargetCacheForBullet; // 0x5E
		::System::Boolean ReachLimitStop; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::Class_3_248DACE3BB3053DD* movementComponent, ::Struct_2_FC595D1A561D8C6F_1 posRot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Struct_2_FC595D1A561D8C6F_1))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::UnityEngine::Vector3 GetRotationUp(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::Class_3_C93CC3D2C2AC4067* characterModelComp, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
		}

		::UnityEngine::Vector3 HandleFinalForward(::UnityEngine::Vector3 forward, ::System::Boolean& reachLimitAngle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET))(this, forward, reachLimitAngle);
		}

		::MoleMole::Battle::Entity* GetRotationEntity(::System::UInt32 entityId)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET))(this, entityId);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_14986121AA61AD99* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
