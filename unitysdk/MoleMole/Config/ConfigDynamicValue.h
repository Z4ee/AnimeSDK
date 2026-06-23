#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_85A37873CC9A51B0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x10CFF280)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x10CFF270)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10CFF530)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10CFF3F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x10CFF220)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x10CFF380)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10CFF540)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x10CFF450)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10CFF550)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x10CFF460)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CFF6B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFF6A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValue_TypeDefinitionIndex = 70609;

	class ConfigDynamicValue : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigDynamicValue** StaticGet_Empty()
		{
			return (::MoleMole::Config::ConfigDynamicValue**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicValue_TypeDefinitionIndex)->GetStaticField(0x2EB00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CCTOR_OFFSET))();
		}

		::Enum_3_85A37873CC9A51B0 GetConfigDynamicValueType()
		{
			return ((::Enum_3_85A37873CC9A51B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValue* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValue* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
