#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ReadonlyDynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICSTRING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x153CA230)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17457FF0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_FROMJSON_OFFSET UNITYSDK_OFFSET(0x17458130)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x17457FB0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x17457FD0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x17457F90)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x17457FC0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x17457FE0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x17457FA0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_TOJSON_OFFSET UNITYSDK_OFFSET(0x153CA0B0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x153CA4B0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x153CA4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicString_TypeDefinitionIndex = 74155;

	class DynamicString : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ReadonlyDynamicString** StaticGet_EMPTY()
		{
			return (::MoleMole::Config::ReadonlyDynamicString**)Il2CppClass::FromTypeDefinitionIndex(DynamicString_TypeDefinitionIndex)->GetStaticField(0x34890);
		}
		::System::String* _fixedValue_k__BackingField; // 0x10
		::System::String* _dynamicKey_k__BackingField; // 0x18
		::System::Boolean _isDynamic_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING__CCTOR_OFFSET))();
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::String* get_fixedValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_SET_FIXEDVALUE_OFFSET))(this, value);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromJson(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_FROMJSON_OFFSET))(this, node);
		}

		::SimpleJSON::JSONNode* ToJson()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_TOJSON_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
