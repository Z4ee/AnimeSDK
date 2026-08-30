#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C1080F0)
#define RPG_GAMECORE_JSONENUM_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1C107560)
#define RPG_GAMECORE_JSONENUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C108150)
#define RPG_GAMECORE_JSONENUM_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1C107EA0)
#define RPG_GAMECORE_JSONENUM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1081E0)
#define RPG_GAMECORE_JSONENUM_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C108310)
#define RPG_GAMECORE_JSONENUM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C1082F0)
#define RPG_GAMECORE_JSONENUM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C108250)
#define RPG_GAMECORE_JSONENUM_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C107720)
#define RPG_GAMECORE_JSONENUM_PARSEFROMJSON_OFFSET UNITYSDK_OFFSET(0x1C107D30)
#define RPG_GAMECORE_JSONENUM_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1C107A80)
#define RPG_GAMECORE_JSONENUM_TOJSON_JSONENUM_OFFSET UNITYSDK_OFFSET(0x1C107E60)
#define RPG_GAMECORE_JSONENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1080B0)
#define RPG_GAMECORE_JSONENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C108350)
#define RPG_GAMECORE_JSONENUM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C107540)
#define RPG_GAMECORE_JSONENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C107530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnum_TypeDefinitionIndex = 10853;

	class JsonEnum : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_Empty()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnum_TypeDefinitionIndex)->GetStaticField(0x1D8F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonEnum*>** StaticGet_UniqueJsonEnumTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(JsonEnum_TypeDefinitionIndex)->GetStaticField(0x1D8F8);
		}
		::System::String* JsonValueStr; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::JsonEnum* FromString(::System::String* a1)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_FROMSTRING_OFFSET))(a1);
		}

		static ::RPG::GameCore::JsonEnum* ParseFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_PARSEFROMBINARY_OFFSET))(a1);
		}

		::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOBINARY_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::JsonEnum* ParseFromJson(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_PARSEFROMJSON_OFFSET))(a1);
		}

		::SimpleJSON::JSONNode* ToJson_JsonEnum()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOJSON_JSONENUM_OFFSET))(this);
		}

		::System::Int32 GetJsonEnumValue(::RPG::GameCore::JsonEnumCategory a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_GETJSONENUMVALUE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::String* op_Implicit(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit_1(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::UnityEngine::AnyType(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUM_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
