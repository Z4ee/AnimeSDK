#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ReadonlyDynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB0E570)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB0E090)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMJSON_OFFSET UNITYSDK_OFFSET(0xFB0E1E0)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xFB0E050)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0xFB0E070)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0xFB0E030)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_RESET_OFFSET UNITYSDK_OFFSET(0xFB0E350)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xFB0E060)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0xFB0E080)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0xFB0E040)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_TOJSON_OFFSET UNITYSDK_OFFSET(0xFB0E3F0)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB0E770)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0E760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicFloat_TypeDefinitionIndex = 57834;

	class DynamicFloat : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ReadonlyDynamicFloat** StaticGet_ZERO()
		{
			return (::MoleMole::Config::ReadonlyDynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x2F8B0);
		}
		static ::MoleMole::Config::ReadonlyDynamicFloat** StaticGet_ONEHUNDRED()
		{
			return (::MoleMole::Config::ReadonlyDynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x2F8B8);
		}
		static ::MoleMole::Config::ReadonlyDynamicFloat** StaticGet_THREESIXZERO()
		{
			return (::MoleMole::Config::ReadonlyDynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x2F8C0);
		}
		static ::MoleMole::Config::ReadonlyDynamicFloat** StaticGet_ONE()
		{
			return (::MoleMole::Config::ReadonlyDynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x2F8C8);
		}
		static ::MoleMole::Config::ReadonlyDynamicFloat** StaticGet_MINUS_ONE()
		{
			return (::MoleMole::Config::ReadonlyDynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
		}
		::System::String* _dynamicKey_k__BackingField; // 0x10
		::System::Boolean _isDynamic_k__BackingField; // 0x18
		::System::Single _fixedValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::Single get_fixedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_SET_FIXEDVALUE_OFFSET))(this, value);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromJson(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMJSON_OFFSET))(this, node);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_RESET_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* ToJson()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_TOJSON_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
