#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/ReachIKConfig.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0xED16270)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xED16220)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xED16850)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xED163E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xED16370)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xED168B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xED16460)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xED16A50)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xED166F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xED160D0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xED16C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListReachIKConfig_TypeDefinitionIndex = 66106;

	class ConfigDynmaicValueListReachIKConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ReachIKConfig>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListReachIKConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListReachIKConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListReachIKConfig* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListReachIKConfig*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
