#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_AF4D3A3041939147.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_BUILDAXES_OFFSET UNITYSDK_OFFSET(0x1B54FC50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_CLONE_OFFSET UNITYSDK_OFFSET(0x1B550620)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B550590)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B551A60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B550730)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B550720)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B551AC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5507B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B551F70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B551900)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B54FEA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_RESOLVETARGETPOS_OFFSET UNITYSDK_OFFSET(0x1B54F980)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B54F460)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54F410)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B552120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementCurveFollow_TypeDefinitionIndex = 72666;

	class ConfigMovementCurveFollow : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::UnityEngine::AnimationCurve* VelocityCurveY; // 0x40
		::UnityEngine::AnimationCurve* VelocityCurveZ; // 0x48
		::UnityEngine::AnimationCurve* VelocityCurveX; // 0x50
		::Enum_3_AF4D3A3041939147 UpAxisType; // 0x58
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x5C
		::UnityEngine::Vector3 DefaultOffset; // 0x60
		::System::Boolean ReachTargetStop; // 0x6C
		::UnityEngine::Vector3 Acceleration; // 0x70
		::UnityEngine::Vector3 InitVelocity; // 0x7C
		::System::Single ScaleRatio; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::UnityEngine::Vector3 ResolveTargetPos(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_RESOLVETARGETPOS_OFFSET))(this, modelComponent, movementComponent, caster, other, instancedAbility);
		}

		::System::Void BuildAxes(::Class_3_C93CC3D2C2AC4067* modelComponent, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3& up, ::UnityEngine::Vector3& right)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_BUILDAXES_OFFSET))(this, modelComponent, forward, up, right);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementCurveFollow* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementCurveFollow*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementCurveFollow* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementCurveFollow*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_14986121AA61AD99* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
