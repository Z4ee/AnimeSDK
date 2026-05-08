#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_85A37873CC9A51B0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_CLONE_OFFSET UNITYSDK_OFFSET(0xF97B740)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xF97B730)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF97BC30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF97B8B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xF97B5A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xF97B840)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xF97BC90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xF97B930)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xF97B5F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xF97BDF0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xF97BAD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xF97B4D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF97B6E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xF97BFA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueVector_TypeDefinitionIndex = 81082;

	class ConfigDynamicValueVector : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::UnityEngine::Vector3 Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_TOUNIONVALUE_OFFSET))(this);
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* op_Implicit(::UnityEngine::Vector3 value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::Enum_3_85A37873CC9A51B0 __base_GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
