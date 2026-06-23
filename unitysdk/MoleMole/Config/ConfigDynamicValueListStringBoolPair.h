#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/StringBoolPair.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_CLONE_OFFSET UNITYSDK_OFFSET(0x12B37860)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12B37810)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B37E40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12B379D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12B37960)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B37EA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12B37A50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B38040)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12B37CE0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x12B376C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x12B381F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListStringBoolPair_TypeDefinitionIndex = 60912;

	class ConfigDynamicValueListStringBoolPair : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::StringBoolPair>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListStringBoolPair* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListStringBoolPair*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListStringBoolPair* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListStringBoolPair*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSTRINGBOOLPAIR_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
