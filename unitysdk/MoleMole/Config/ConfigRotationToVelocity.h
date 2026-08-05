#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_DBE85A55BA66609E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_CLONE_OFFSET UNITYSDK_OFFSET(0x1B7F5910)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7F5900)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7F6920)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7F5A20)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B7F5A10)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x1B7F4D70)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x1B7F5660)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7F6980)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7F5AA0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7F6D30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7F67C0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B7F4F00)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_SETUP_OFFSET UNITYSDK_OFFSET(0x1B7F4DF0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F4D20)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B7F6EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToVelocity_TypeDefinitionIndex = 67599;

	class ConfigRotationToVelocity : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x28
		::UnityEngine::AnimationCurve* RotationCurve; // 0x30
		::System::Single ScaleRatio; // 0x38
		::System::Boolean ReachTargetStop; // 0x3C
		::System::Boolean ReachLimitStop; // 0x3D
		::Enum_3_DBE85A55BA66609E RotateType; // 0x40
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x44
		::System::Single RotationAngleLimit; // 0x48
		::UnityEngine::Vector3 TargetDir; // 0x4C
		::System::Single RotateSpeed; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRotationDir(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::UnityEngine::Vector3 HandleFinalForward(::UnityEngine::Vector3 forward, ::System::Boolean& reachLimitAngle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_HANDLEFINALFORWARD_OFFSET))(this, forward, reachLimitAngle);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToVelocity* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToVelocity*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToVelocity* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToVelocity*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_14986121AA61AD99* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
