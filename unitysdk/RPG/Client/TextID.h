#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x22C8DF0)
#define RPG_CLIENT_TEXTID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x22C8DE0)
#define RPG_CLIENT_TEXTID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22C8E10)
#define RPG_CLIENT_TEXTID_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x22C8E20)
#define RPG_CLIENT_TEXTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x22C8D90)
#define RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_TEXTID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x22C8D40)
#define RPG_CLIENT_TEXTID_ISVALID_OFFSET UNITYSDK_OFFSET(0x19223B20)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x19223EC0)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19223E70)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19223EA0)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19223E80)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x19223F00)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19223EB0)
#define RPG_CLIENT_TEXTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22C8DA0)
#define RPG_CLIENT_TEXTID__CCTOR_OFFSET UNITYSDK_OFFSET(0x19223F40)
#define RPG_CLIENT_TEXTID__CTOR_OFFSET UNITYSDK_OFFSET(0x22C8D30)

namespace RPG::Client
{
	inline static constexpr unsigned int TextID_TypeDefinitionIndex = 9073;

	struct alignas(8) TextID
	{
		static ::System::Int32* StaticGet__emptyHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextID_TypeDefinitionIndex)->GetStaticField(0x760);
		}
		static ::RPG::Client::TextID* StaticGet_empty()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextID_TypeDefinitionIndex)->GetStaticField(0x768);
		}
		::System::Int32 hash; // 0x10
		::System::UInt64 hash64; // 0x18

		::System::Void _ctor(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID__CTOR_OFFSET))(this, s);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsValid(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISVALID_OFFSET))(s);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo_1(::RPG::Client::TextID other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::TextID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_2_OFFSET))(this, s);
		}

		static ::RPG::Client::TextID op_Implicit(::System::String* s)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::Int32 op_Implicit_1(::RPG::Client::TextID id)
		{
			return ((::System::Int32(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET))(id);
		}

		static ::System::Boolean op_Equality(::RPG::Client::TextID id1, ::RPG::Client::TextID id2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET))(id1, id2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::TextID id1, ::RPG::Client::TextID id2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET))(id1, id2);
		}

		static ::System::Boolean op_Equality_1(::RPG::Client::TextID id, ::System::String* s)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET))(id, s);
		}

		static ::System::Boolean op_Inequality_1(::RPG::Client::TextID id, ::System::String* s)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET))(id, s);
		}
	};
}
