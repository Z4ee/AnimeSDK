#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A948000)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A948100)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A947F80)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A949210)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A9486F0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A9499B0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A9480F0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A949270)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A948770)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A949820)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A9490D0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A949A70)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A949A80)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A949A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TriggerMissionTipsTrait_TypeDefinitionIndex = 52020;

	class TriggerMissionTipsTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 QuestId; // 0x18
		::System::Int32 CheckTipType; // 0x1C
		::System::Int32 PartnerDateTagTextId; // 0x20
		::System::String* CheckTriggerName; // 0x28
		::System::String* replaceTipsSoundEventName; // 0x30
		::System::String* OverrideText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::TriggerMissionTipsTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::TriggerMissionTipsTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::TriggerMissionTipsTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::TriggerMissionTipsTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
