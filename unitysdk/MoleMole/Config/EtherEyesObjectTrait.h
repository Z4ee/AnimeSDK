#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x144EDD60)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x144EBF40)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x144EC0A0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x144EBEF0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x144ED570)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x144EC2B0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x144EDCC0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x144EC030)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x144ED5D0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x144EC330)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x144EDB20)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x144ED430)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x144EDDF0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x144EDE10)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x144EDE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectTrait_TypeDefinitionIndex = 56569;

	class EtherEyesObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::EtherEyesObjectConfig EtherEyesObjectConfig; // 0x18
		::System::Single HoldSuccessTime; // 0x30
		::System::Boolean UseInteractEffect; // 0x34
		::System::Single InteractDistanceOffset; // 0x38
		::System::Boolean UseFocusOutLine; // 0x3C
		::MoleMole::Config::EtherEyesObjectSize ObjectSize; // 0x40
		::System::String* OverrideHintKey; // 0x48
		::System::Boolean NeedOverride; // 0x50
		::System::Boolean ShowLockPointUI; // 0x51
		::MoleMole::Config::EtherEyesObjectOverrideConfig EtherEyesObjectOverrideConfig; // 0x52
		::MoleMole::Config::EtherEyesFixConfig EtherEyesFixConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
