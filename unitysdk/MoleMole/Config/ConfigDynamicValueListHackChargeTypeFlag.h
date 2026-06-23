#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5661FB5E3DE51048.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_CLONE_OFFSET UNITYSDK_OFFSET(0x17D4F450)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D4F400)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4F9A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4F5C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D4F550)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4FA00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4F640)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4FC60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4F840)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x17D4F2B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4FE10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListHackChargeTypeFlag_TypeDefinitionIndex = 44976;

	class ConfigDynamicValueListHackChargeTypeFlag : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_5661FB5E3DE51048>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
