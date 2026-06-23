#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_CLONE_OFFSET UNITYSDK_OFFSET(0x17D50000)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D4FFB0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D50550)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D50170)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D50100)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D505B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D501F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D50740)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D503F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x17D4FE60)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D508F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListGameplayTag_TypeDefinitionIndex = 57772;

	class ConfigDynmaicValueListGameplayTag : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListGameplayTag* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListGameplayTag*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListGameplayTag* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListGameplayTag*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTGAMEPLAYTAG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
