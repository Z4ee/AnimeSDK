#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_CLONE_OFFSET UNITYSDK_OFFSET(0x16C3E220)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C3E1D0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C3E6E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3E330)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16C3E320)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C3E740)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3E3B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C3E9A0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3E580)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16C3E080)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3EB50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListStr_TypeDefinitionIndex = 43308;

	class ConfigDynmaicValueListStr : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListStr* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListStr*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListStr* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListStr*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTSTR_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
