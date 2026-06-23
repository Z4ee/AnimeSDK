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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x12710A10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x127109C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12711090)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12710B80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x12710970)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12710B10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x127110F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12710C00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12711300)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12710F30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x12710650)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x127114B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x12711500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueList_TypeDefinitionIndex = 63325;

	class ConfigDynamicValueList : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* Elements; // 0x10
		::Enum_3_85A37873CC9A51B0 ElementType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueList* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueList*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueList* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueList*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
