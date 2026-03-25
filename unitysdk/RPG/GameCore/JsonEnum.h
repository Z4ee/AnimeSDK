#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x17329A70)
#define RPG_GAMECORE_JSONENUM_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x17328F10)
#define RPG_GAMECORE_JSONENUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17329AD0)
#define RPG_GAMECORE_JSONENUM_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x17329840)
#define RPG_GAMECORE_JSONENUM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17329B60)
#define RPG_GAMECORE_JSONENUM_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17329C80)
#define RPG_GAMECORE_JSONENUM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17329C60)
#define RPG_GAMECORE_JSONENUM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17329BD0)
#define RPG_GAMECORE_JSONENUM_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173290E0)
#define RPG_GAMECORE_JSONENUM_PARSEFROMJSON_OFFSET UNITYSDK_OFFSET(0x17329740)
#define RPG_GAMECORE_JSONENUM_TOBINARY_OFFSET UNITYSDK_OFFSET(0x17329440)
#define RPG_GAMECORE_JSONENUM_TOJSON_JSONENUM_OFFSET UNITYSDK_OFFSET(0x17329800)
#define RPG_GAMECORE_JSONENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17329A30)
#define RPG_GAMECORE_JSONENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17329CC0)
#define RPG_GAMECORE_JSONENUM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17328F00)
#define RPG_GAMECORE_JSONENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x17328EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnum_TypeDefinitionIndex = 22613;

	class JsonEnum : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_Empty()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnum_TypeDefinitionIndex)->GetStaticField(0x24F30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonEnum*>** StaticGet_UniqueJsonEnumTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(JsonEnum_TypeDefinitionIndex)->GetStaticField(0x24F38);
		}
		::System::String* JsonValueStr; // 0x10

		::System::Void _ctor(::System::String* bindKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CTOR_OFFSET))(this, bindKey);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::JsonEnum* FromString(::System::String* str)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_FROMSTRING_OFFSET))(str);
		}

		static ::RPG::GameCore::JsonEnum* ParseFromBinary(::Class_1_7A22A3DBEEDD1F80* array)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_PARSEFROMBINARY_OFFSET))(array);
		}

		::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* pArray)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOBINARY_OFFSET))(this, pArray);
		}

		static ::RPG::GameCore::JsonEnum* ParseFromJson(::SimpleJSON::JSONNode* node)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_PARSEFROMJSON_OFFSET))(node);
		}

		::SimpleJSON::JSONNode* ToJson_JsonEnum()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOJSON_JSONENUM_OFFSET))(this);
		}

		::System::Int32 GetJsonEnumValue(::RPG::GameCore::JsonEnumCategory category)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_GETJSONENUMVALUE_OFFSET))(this, category);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::JsonEnum* left, ::RPG::GameCore::JsonEnum* right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::JsonEnum* left, ::RPG::GameCore::JsonEnum* right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::String* op_Implicit(::RPG::GameCore::JsonEnum* jsonEnum)
		{
			return ((::System::String*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_IMPLICIT_OFFSET))(jsonEnum);
		}

		static ::UnityEngine::AnyType op_Implicit_1(::RPG::GameCore::JsonEnum* jsonEnum)
		{
			return ((::UnityEngine::AnyType(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_IMPLICIT_1_OFFSET))(jsonEnum);
		}
	};
}
