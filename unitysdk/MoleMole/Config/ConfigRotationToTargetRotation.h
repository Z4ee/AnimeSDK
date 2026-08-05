#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotationToTarget.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x14874620)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x148745B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14874940)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14874730)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x14874720)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x14874520)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x148749D0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x148747B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14874A30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x148747E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x14874260)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x14874210)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x14874C10)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x14874C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTargetRotation_TypeDefinitionIndex = 79522;

	class ConfigRotationToTargetRotation : public ::MoleMole::Config::ConfigRotationToTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::Class_3_248DACE3BB3053DD* movementComponent, ::Struct_2_FC595D1A561D8C6F_1 posRot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Struct_2_FC595D1A561D8C6F_1))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToTargetRotation* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToTargetRotation*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToTargetRotation* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToTargetRotation*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::UnityEngine::Vector3 __base_GetRotationDir(::Class_3_C93CC3D2C2AC4067* P0, ::Class_3_248DACE3BB3053DD* P1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_GETROTATIONDIR_OFFSET))(this, P0, P1);
		}

		::System::Void __base_RecordPosRotParam(::Class_3_248DACE3BB3053DD* P0, ::Struct_2_FC595D1A561D8C6F_1 P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Struct_2_FC595D1A561D8C6F_1))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_RECORDPOSROTPARAM_OFFSET))(this, P0, P1);
		}
	};
}
