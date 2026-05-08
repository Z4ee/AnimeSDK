#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09F02986DA8A94B8.h"
#include "unitysdk/Enum_3_5DA9605B47485C09_1.h"
#include "unitysdk/Enum_3_99176E6BE04C36F5_2.h"
#include "unitysdk/Enum_3_A1F38F7381E026F5.h"
#include "unitysdk/Enum_3_C98676A27FDCAE9F.h"
#include "unitysdk/Enum_3_D40A9F581BB3C48E.h"
#include "unitysdk/Enum_3_E4E1F2E1FB2C8D2C.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimationCurve.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_6.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x183CDD80)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x183CD4F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x183CB270)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1A060A6D17E487E5_OFFSET UNITYSDK_OFFSET(0x183CB2F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x183CAEB0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x183CE4E0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7C2A9DC7FE3AAF34_OFFSET UNITYSDK_OFFSET(0x183CE3A0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7F730F01AB631330_OFFSET UNITYSDK_OFFSET(0x183CE1F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_888986A55A2D055C_OFFSET UNITYSDK_OFFSET(0x183CE4F0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x183CE320)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x183CADD0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x183CAFA0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_F9C3B6AD93C64107_OFFSET UNITYSDK_OFFSET(0x183CD550)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x183CB010)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x183CE390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineMoveTrait_TypeDefinitionIndex = 53093;

	class ConfigSplineMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DefaultSplineName; // 0x18
		::Enum_3_E4E1F2E1FB2C8D2C SplineSpace; // 0x20
		::Enum_3_D40A9F581BB3C48E SplineMoveMode; // 0x24
		::Enum_3_A1F38F7381E026F5 SplineMoveSpeedMode; // 0x28
		::Enum_3_09F02986DA8A94B8 SplineRotateMode; // 0x2C
		::System::Single Speed; // 0x30
		::System::Single SpeedUpAcc; // 0x34
		::System::Single SpeedDownAcc; // 0x38
		::MoleMole::Config::ConfigAnimationCurve SpeedCurve; // 0x40
		::System::Single SpeedCurveTime; // 0x50
		::Enum_3_C98676A27FDCAE9F OrientationMode; // 0x54
		::Enum_3_5DA9605B47485C09_1 OrientationAxis; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* AutoAttachMarkNode; // 0x60
		::System::Boolean UseLogicMove; // 0x68
		::System::Boolean UseCache; // 0x69
		::System::Boolean NeedPauseWhenWipeOut; // 0x6A
		::Enum_3_99176E6BE04C36F5_2 MoveDirection; // 0x6C
		::System::String* startMoveSoundEvent; // 0x70
		::System::String* stopMoveSoundEvent; // 0x78
		::System::Boolean setMoveBackSound; // 0x80
		::System::String* startMoveBackSoundEvent; // 0x88
		::System::String* stopMoveBackSoundEvent; // 0x90
		::System::Boolean muteSound; // 0x98
		::System::String* EntityAttachCollider; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_B1FCFA7C1C5829AA_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1A060A6D17E487E5(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_1A060A6D17E487E5_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* Method_2_7C2A9DC7FE3AAF34(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7C2A9DC7FE3AAF34_OFFSET))(a1);
		}

		::Struct_2_7734F33592BF49F6_6 Method_2_895E6BF2EDCD95D0()
		{
			return ((::Struct_2_7734F33592BF49F6_6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_895E6BF2EDCD95D0_OFFSET))(this);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* Method_2_888986A55A2D055C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_888986A55A2D055C_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F9C3B6AD93C64107(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_F9C3B6AD93C64107_OFFSET))(this, a1, a2);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* Method_2_7F730F01AB631330()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_METHOD_2_7F730F01AB631330_OFFSET))(this);
		}
	};
}
