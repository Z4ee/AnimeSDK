#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ZKItemConsumeUnlockState; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_CLONE_OFFSET UNITYSDK_OFFSET(0x1B7E71A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7E7150)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E7650)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E72B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B7E72A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E76B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E7330)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E7860)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E74F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B7E7000)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E7A10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListZKItemConsume_TypeDefinitionIndex = 82677;

	class ConfigDynamicValueListZKItemConsume : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ZKItemConsumeUnlockState*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListZKItemConsume* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListZKItemConsume*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListZKItemConsume* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListZKItemConsume*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKITEMCONSUME_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
