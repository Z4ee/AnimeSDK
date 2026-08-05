#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4F2790)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4F1CA0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F1C50)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F22E0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F1DB0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B4F1DA0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F2340)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F1E30)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F25E0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F2180)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F2EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SimpleScriptConfigTrait_TypeDefinitionIndex = 62741;

	class SimpleScriptConfigTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* ScritptConfigPath; // 0x18
		::System::Boolean UseFighterData; // 0x20
		::Foundation::AssetPath ScriptConfigPathHashExternal; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
