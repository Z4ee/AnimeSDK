#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_AF4D3A3041939147.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1242ACB0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1242ACA0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1242BF90)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1242AE20)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1242ADB0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1242BFF0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1242AEA0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1242C420)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1242BE30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1242A410)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_SETUP_OFFSET UNITYSDK_OFFSET(0x1242A380)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1242A320)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1242C5D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationSimple_TypeDefinitionIndex = 55511;

	class ConfigRotationSimple : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* AngleAccelerationCurveX; // 0x28
		::UnityEngine::AnimationCurve* AngleAccelerationCurveY; // 0x30
		::UnityEngine::AnimationCurve* AngleAccelerationCurveZ; // 0x38
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveZ; // 0x40
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveX; // 0x48
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveY; // 0x50
		::System::Single ScaleRatio; // 0x58
		::UnityEngine::Vector3 InitAngleVelocity; // 0x5C
		::UnityEngine::Vector3 AngleAcceleration; // 0x68
		::System::Boolean UseCurve; // 0x74
		::Enum_3_AF4D3A3041939147 CoordinateType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationSimple* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationSimple*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationSimple* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationSimple*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_167BB37617B940E3* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
