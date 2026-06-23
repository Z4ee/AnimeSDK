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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_CLONE_OFFSET UNITYSDK_OFFSET(0x17D4DEC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D4DEB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4E3D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4E030)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17D4DD30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D4DFC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4E430)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4E0B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17D4DD80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D4E590)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D4E270)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x17D4DC70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4DE60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17D4E740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueDouble_TypeDefinitionIndex = 47497;

	class ConfigDynamicValueDouble : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Double Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* op_Implicit(::System::Double value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
