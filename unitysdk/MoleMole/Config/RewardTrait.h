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

#define MOLEMOLE_CONFIG_REWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19FFAA70)
#define MOLEMOLE_CONFIG_REWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FFABD0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FFAA60)
#define MOLEMOLE_CONFIG_REWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFB9B0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFAD60)
#define MOLEMOLE_CONFIG_REWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19FFAB60)
#define MOLEMOLE_CONFIG_REWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFBA10)
#define MOLEMOLE_CONFIG_REWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFADE0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFC210)
#define MOLEMOLE_CONFIG_REWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFB870)
#define MOLEMOLE_CONFIG_REWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFC3B0)
#define MOLEMOLE_CONFIG_REWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FFC3C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RewardTrait_TypeDefinitionIndex = 83137;

	class RewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Boolean IsRefreshAfterOnceReward; // 0x20
		::System::Int32 RewardShowType; // 0x24
		::System::Int32 RewardTimeType; // 0x28
		::System::Boolean IsShowModel; // 0x2C
		::System::Int32 CollectionType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::RewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::RewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::RewardTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::RewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
