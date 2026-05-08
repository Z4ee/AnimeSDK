#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ReadonlyDynamicInt; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B45140)
#define MOLEMOLE_CONFIG_DYNAMICINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B44CB0)
#define MOLEMOLE_CONFIG_DYNAMICINT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x16B44E00)
#define MOLEMOLE_CONFIG_DYNAMICINT_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x16B44C70)
#define MOLEMOLE_CONFIG_DYNAMICINT_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x16B44C90)
#define MOLEMOLE_CONFIG_DYNAMICINT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x16B44C50)
#define MOLEMOLE_CONFIG_DYNAMICINT_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x16B44C80)
#define MOLEMOLE_CONFIG_DYNAMICINT_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x16B44CA0)
#define MOLEMOLE_CONFIG_DYNAMICINT_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x16B44C60)
#define MOLEMOLE_CONFIG_DYNAMICINT_TOJSON_OFFSET UNITYSDK_OFFSET(0x16B44F90)
#define MOLEMOLE_CONFIG_DYNAMICINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B45470)
#define MOLEMOLE_CONFIG_DYNAMICINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B45460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicInt_TypeDefinitionIndex = 47431;

	class DynamicInt : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ReadonlyDynamicInt** StaticGet_MINUSONE()
		{
			return (::MoleMole::Config::ReadonlyDynamicInt**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_TypeDefinitionIndex)->GetStaticField(0x2DC20);
		}
		static ::MoleMole::Config::ReadonlyDynamicInt** StaticGet_ONE()
		{
			return (::MoleMole::Config::ReadonlyDynamicInt**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_TypeDefinitionIndex)->GetStaticField(0x2DC28);
		}
		static ::MoleMole::Config::ReadonlyDynamicInt** StaticGet_SIX()
		{
			return (::MoleMole::Config::ReadonlyDynamicInt**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_TypeDefinitionIndex)->GetStaticField(0x2DC30);
		}
		static ::MoleMole::Config::ReadonlyDynamicInt** StaticGet_ZERO()
		{
			return (::MoleMole::Config::ReadonlyDynamicInt**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_TypeDefinitionIndex)->GetStaticField(0x2DC38);
		}
		::System::String* _dynamicKey_k__BackingField; // 0x10
		::System::Int32 _fixedValue_k__BackingField; // 0x18
		::System::Boolean _isDynamic_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::Int32 get_fixedValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_SET_FIXEDVALUE_OFFSET))(this, value);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromJson(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_FROMJSON_OFFSET))(this, node);
		}

		::SimpleJSON::JSONNode* ToJson()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_TOJSON_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
