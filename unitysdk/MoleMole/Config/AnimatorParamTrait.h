#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorBoolParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorFloatParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorIntParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorTriggerParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x116E49B0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x116E34C0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E35C0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E3430)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E4460)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116E3A00)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x116E35B0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E44C0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x116E3A80)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x116E4A30)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E4820)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x116E4320)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x116E4F80)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E4F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorParamTrait_TypeDefinitionIndex = 41327;

	class AnimatorParamTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorTriggerParam>* AnimatorTriggerParams; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorBoolParam>* AnimatorBoolParams; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorIntParam>* AnimatorIntParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorFloatParam>* AnimatorFloatParams; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AnimatorParamTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AnimatorParamTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
