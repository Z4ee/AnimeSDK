#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_CLONE_OFFSET UNITYSDK_OFFSET(0xE968D50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE968D00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE9692F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE968EC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE968E50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE969350)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE968F40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE969520)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE969190)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xE968BB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0xE9696D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValuePatrolPointSet_TypeDefinitionIndex = 40386;

	class ConfigDynamicValuePatrolPointSet : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::MoleMole::Config::ConfigPatrolPointSet* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValuePatrolPointSet* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValuePatrolPointSet*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValuePatrolPointSet* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValuePatrolPointSet*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEPATROLPOINTSET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
