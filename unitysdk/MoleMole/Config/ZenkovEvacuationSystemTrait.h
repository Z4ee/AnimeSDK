#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x161A2590)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x161A26F0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x161A2540)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x161A36B0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x161A28C0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x161A2680)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x161A3710)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x161A2940)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x161A3F20)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x161A3570)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x161A40C0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x161A40D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovEvacuationSystemTrait_TypeDefinitionIndex = 63885;

	class ZenkovEvacuationSystemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 EvacuationType; // 0x18
		::System::Int32 UntriggerableDuration; // 0x1C
		::System::Int32 LinkedGroupID; // 0x20
		::System::String* LinkedGroupState; // 0x28
		::System::Int32 LinkedGroupStateValue; // 0x30
		::System::Int32 EvacuableCountdown; // 0x34
		::System::Int32 SubmitID; // 0x38
		::System::Int32 ZenkovQuestID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovEvacuationSystemTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovEvacuationSystemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovEvacuationSystemTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovEvacuationSystemTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
