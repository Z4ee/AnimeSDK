#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3F4FB6282B36F272.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
class Class_3_EC8E953182337EFE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4E0B50)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4DD950)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4DDA50)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4DD8C0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E00B0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4DE800)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4E09E0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B4DDA40)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E0110)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4DE880)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E0850)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4DFF70)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E0C00)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4E0C10)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4E0C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ControllableObjectTrait_TypeDefinitionIndex = 66470;

	class ControllableObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::Enum_3_3F4FB6282B36F272 ControllableObjectType; // 0x18
		::System::Boolean UseBlackFadeBackToAvatar; // 0x1C
		::System::Boolean DisableActiveExit; // 0x1D
		::System::String* ConfigKey; // 0x20
		::System::String* SubConfigKey; // 0x28
		::System::Boolean UseOverrideCameraData; // 0x30
		::System::String* OverridePointKey; // 0x38
		::System::Single OverrideMinPitch; // 0x40
		::System::Single OverrideMaxPitch; // 0x44
		::System::Single OverrideMinYaw; // 0x48
		::System::Single OverrideMaxYaw; // 0x4C
		::System::Single OverrideFOV; // 0x50
		::System::Boolean ExitSecoindSure; // 0x54
		::System::String* ExitSecoindSureText; // 0x58
		::System::Boolean EnableExitDistanceStreamingCheck; // 0x60
		::System::Single ExitBlackFadeDistance; // 0x64
		::Class_3_EC8E953182337EFE* voCameraHackObjectComponent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ControllableObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ControllableObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ControllableObjectTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ControllableObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
