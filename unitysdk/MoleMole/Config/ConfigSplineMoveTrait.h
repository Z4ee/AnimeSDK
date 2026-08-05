#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09F02986DA8A94B8.h"
#include "unitysdk/Enum_3_527B06155233FF65.h"
#include "unitysdk/Enum_3_57AE0CBA3633C46D.h"
#include "unitysdk/Enum_3_5DA9605B47485C09.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5_2.h"
#include "unitysdk/Enum_3_A1F38F7381E026F5.h"
#include "unitysdk/Enum_3_C98676A27FDCAE9F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimationCurve.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_7.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B55FBB0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B55A650)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATECONFIG_OFFSET UNITYSDK_OFFSET(0x1B560500)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATEDYNAMICTRIGGERCONFIG_OFFSET UNITYSDK_OFFSET(0x1B5606B0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B55A750)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B55A510)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B55EDB0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B55BCC0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B55FB10)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B55A740)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B55EE10)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B55BD40)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B55F980)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B55EC70)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B560730)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B560740)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B560750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineMoveTrait_TypeDefinitionIndex = 51180;

	class ConfigSplineMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DefaultSplineName; // 0x18
		::Enum_3_527B06155233FF65 SplineSpace; // 0x20
		::Enum_3_57AE0CBA3633C46D SplineMoveMode; // 0x24
		::Enum_3_A1F38F7381E026F5 SplineMoveSpeedMode; // 0x28
		::Enum_3_09F02986DA8A94B8 SplineRotateMode; // 0x2C
		::System::Single Speed; // 0x30
		::System::Single SpeedUpAcc; // 0x34
		::System::Single SpeedDownAcc; // 0x38
		::MoleMole::Config::ConfigAnimationCurve SpeedCurve; // 0x40
		::System::Single SpeedCurveTime; // 0x50
		::Enum_3_C98676A27FDCAE9F OrientationMode; // 0x54
		::Enum_3_5DA9605B47485C09 OrientationAxis; // 0x58
		::System::Boolean enableCurvyRotationPitchRange; // 0x5C
		::UnityEngine::Vector2 curvyRotationPitchRange; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* AutoAttachMarkNode; // 0x68
		::System::Boolean UseLogicMove; // 0x70
		::System::Boolean UseCache; // 0x71
		::System::Boolean NeedPauseWhenWipeOut; // 0x72
		::Enum_3_99176E6BE04C36F5_2 MoveDirection; // 0x74
		::UnityEngine::Vector3 PositionOffset; // 0x78
		::System::Boolean EnableAttachRotationMotion; // 0x84
		::System::Boolean AdjustMassCenter; // 0x85
		::System::Boolean SetRotationInst; // 0x86
		::System::String* CustomPivotPoint; // 0x88
		::System::String* startMoveSoundEvent; // 0x90
		::System::String* stopMoveSoundEvent; // 0x98
		::System::Boolean setMoveBackSound; // 0xA0
		::System::String* startMoveBackSoundEvent; // 0xA8
		::System::String* stopMoveBackSoundEvent; // 0xB0
		::System::Boolean muteSound; // 0xB8
		::System::String* EntityAttachCollider; // 0xC0
		::System::String* OutCollider; // 0xC8
		::System::String* MidCollider; // 0xD0
		::System::String* InCollider; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::Struct_2_7734F33592BF49F6_7 CreateDynamicTriggerConfig()
		{
			return ((::Struct_2_7734F33592BF49F6_7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATEDYNAMICTRIGGERCONFIG_OFFSET))(this);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* CreateConfig()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATECONFIG_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
