#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1170FEB0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1170FFB0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1170FEA0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x117104E0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11710150)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1170FFA0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11710540)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x117101D0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x117107B0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x117103A0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11710940)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11710950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopRewardTrait_TypeDefinitionIndex = 83564;

	class CoopRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::CoopRewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::CoopRewardTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
