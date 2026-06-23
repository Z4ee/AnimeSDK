#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_85A37873CC9A51B0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_CLONE_OFFSET UNITYSDK_OFFSET(0x1589F610)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1589F5C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1589FB60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1589F780)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1589F450)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1589F710)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1589FBC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1589F800)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1589F4A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1589FD50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1589FA00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1589F3A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1589F570)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1589FF00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueString_TypeDefinitionIndex = 61640;

	class ConfigDynamicValueString : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::String* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* op_Implicit(::System::String* value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
