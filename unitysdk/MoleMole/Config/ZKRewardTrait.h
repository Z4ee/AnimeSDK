#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D862098692CC1FC.h"
#include "unitysdk/Enum_3_B25F7485F42A041A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ZKRewardStateEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x18ADDF60)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x18ADE0C0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x18ADDF10)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADEC70)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18ADE260)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x18ADE050)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADECD0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x18ADE2E0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADF210)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x18ADEB30)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADF3B0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x18ADF3C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKRewardTrait_TypeDefinitionIndex = 53805;

	class ZKRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::Enum_3_6D862098692CC1FC ZKRewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Collections::Generic::List_1<::MoleMole::Config::ZKRewardStateEntry*>* StateRewards; // 0x20
		::System::Boolean IsMemberDrop; // 0x28
		::Enum_3_B25F7485F42A041A DropTimeType; // 0x2C
		::System::Int32 DropVOID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
