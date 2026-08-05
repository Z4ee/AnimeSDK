#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14879870)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x148780E0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x148781E0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x14878090)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148792C0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148787D0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x148797C0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x148781D0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14879320)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x14878850)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x148798F0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14879630)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x14879180)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x14879B10)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x14879B20)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x14879B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerDroneTrait_TypeDefinitionIndex = 81553;

	class HackerDroneTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* BattleRegionKey; // 0x18
		::System::Single CeilingVerticalOffset; // 0x20
		::System::Single FloorVerticalOffset; // 0x24
		::System::Single WarningDistance; // 0x28
		::System::Single ClearWarningDistance; // 0x2C
		::System::Single OutOfRangeTimeoutDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerDroneTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerDroneTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerDroneTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerDroneTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
