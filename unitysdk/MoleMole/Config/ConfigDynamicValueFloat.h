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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_CLONE_OFFSET UNITYSDK_OFFSET(0xFB02A60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFB02A50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB02F70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB02BD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFB028D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFB02B60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB02FD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFB02C50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFB02920)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB03130)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFB02E10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFB02810)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB02A00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFB032E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueFloat_TypeDefinitionIndex = 45424;

	class ConfigDynamicValueFloat : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Single Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* op_Implicit(::System::Single value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
