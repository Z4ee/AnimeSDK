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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x17D21520)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D21510)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D21A30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D21690)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17D213A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D21620)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D21A90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D21710)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17D213F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D21C80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D218D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x17D212F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D214C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17D21E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueBool_TypeDefinitionIndex = 64242;

	class ConfigDynamicValueBool : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Boolean Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* op_Implicit(::System::Boolean value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
