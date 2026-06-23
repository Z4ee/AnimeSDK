#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x144E8520)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x144E6F00)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x144E7060)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x144E6E90)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x144E7F10)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x144E7210)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x144E8720)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x144E6FF0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x144E7F70)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x144E7290)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x144E8380)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x144E7DD0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x144E8770)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x144E8780)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x144E8790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelectionTrait_TypeDefinitionIndex = 71262;

	class ConfigTeleportSelectionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::TeleportSelectionType Type; // 0x18
		::System::Single PreInteractDistanceOffset; // 0x1C
		::System::Single InteractDistanceOffset; // 0x20
		::System::Single InteractAngle; // 0x24
		::System::Boolean NeedShowUI; // 0x28
		::System::String* MobileTextKey; // 0x30
		::System::String* PcOrConsoleTextKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
