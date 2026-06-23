#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_DBE85A55BA66609E_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_1;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x192A5210)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192A51A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A69A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192A5380)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192A5310)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x192A32A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x192A3BA0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET UNITYSDK_OFFSET(0x192A3500)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x192A4F00)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A6A00)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192A5400)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A6FC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192A68A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET UNITYSDK_OFFSET(0x192A3E20)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x192A30E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET UNITYSDK_OFFSET(0x192A35A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x192A3090)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x192A7140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTarget_TypeDefinitionIndex = 52896;

	class ConfigRotationToTarget : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::Class_1_D0D2B3C2533F6DF2_1* SpeedRatioCurvebyDistance; // 0x28
		::UnityEngine::AnimationCurve* RotationCurve; // 0x30
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x38
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x40
		::System::Single RotationAngleLimit; // 0x48
		::System::Single ScaleRatio; // 0x4C
		::System::Boolean ReachLimitStop; // 0x50
		::System::Boolean DisableTargetCacheForBullet; // 0x51
		::System::Boolean DirectlyApplyRotation; // 0x52
		::System::Boolean ReachTargetStop; // 0x53
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x54
		::Enum_3_DBE85A55BA66609E_2 RotateType; // 0x58
		::System::Single RotateSpeed; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::Class_3_248DACE3BB3053DD* movementComponent, ::Struct_2_FC595D1A561D8C6F posRot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::UnityEngine::Vector3 GetRotationUp(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::Class_3_DFD5D1FDB9D2A4AC* characterModelComp, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
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

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_167BB37617B940E3* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
