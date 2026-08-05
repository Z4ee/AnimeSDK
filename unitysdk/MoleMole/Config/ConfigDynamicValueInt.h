#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_85A37873CC9A51B0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4AA2B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4AA2A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4AA740)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4AA3C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A4AA140)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4AA3B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4AA7A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4AA440)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A4AA180)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4AA9D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4AA5E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A4AA090)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AA250)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A4AAB80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueInt_TypeDefinitionIndex = 88209;

	class ConfigDynamicValueInt : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Int32 Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* op_Implicit(::System::Int32 value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
