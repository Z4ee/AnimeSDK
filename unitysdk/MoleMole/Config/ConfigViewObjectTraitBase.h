#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_CLONE_OFFSET UNITYSDK_OFFSET(0x16267700)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16248110)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16247E60)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16248BA0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16267810)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16249570)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16267800)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16267960)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x162484F0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16267C10)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16267890)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16249500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectTraitBase_TypeDefinitionIndex = 68429;

	class ConfigViewObjectTraitBase : public ::System::Object
	{
	public:
		::System::Boolean Export2Server; // 0x10
		::System::Boolean isDisable; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigViewObjectTraitBase* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigViewObjectTraitBase* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
