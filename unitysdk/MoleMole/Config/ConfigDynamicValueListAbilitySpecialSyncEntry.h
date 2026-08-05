#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class AbilitySpecialSyncEntry; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x1B7E51E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7E5190)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E5690)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E52F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B7E52E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E56F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E5370)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7E58A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7E5530)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B7E5040)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E5A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListAbilitySpecialSyncEntry_TypeDefinitionIndex = 72912;

	class ConfigDynamicValueListAbilitySpecialSyncEntry : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AbilitySpecialSyncEntry*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAbilitySpecialSyncEntry* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAbilitySpecialSyncEntry*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAbilitySpecialSyncEntry* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAbilitySpecialSyncEntry*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYSPECIALSYNCENTRY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
