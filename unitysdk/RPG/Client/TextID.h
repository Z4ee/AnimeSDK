#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3A53A40)
#define RPG_CLIENT_TEXTID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3A53A30)
#define RPG_CLIENT_TEXTID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A53A60)
#define RPG_CLIENT_TEXTID_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3A53A70)
#define RPG_CLIENT_TEXTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A53950)
#define RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_CLIENT_TEXTID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3A53900)
#define RPG_CLIENT_TEXTID_ISVALID_OFFSET UNITYSDK_OFFSET(0x163B99D0)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x163B9C90)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x163B9C40)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x163B9C70)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x163B9C50)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x163B9CD0)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x163B9C80)
#define RPG_CLIENT_TEXTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A539F0)
#define RPG_CLIENT_TEXTID__CCTOR_OFFSET UNITYSDK_OFFSET(0x163B9D10)
#define RPG_CLIENT_TEXTID__CTOR_OFFSET UNITYSDK_OFFSET(0x3A538F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextID_TypeDefinitionIndex = 6555;

	struct alignas(8) TextID
	{
		static ::RPG::Client::TextID* StaticGet_empty()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextID_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::Int32* StaticGet__emptyHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextID_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		::System::Int32 hash; // 0x10
		::System::UInt64 hash64; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISVALID_OFFSET))(a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::RPG::Client::TextID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_2_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID op_Implicit(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_1(::RPG::Client::TextID a1)
		{
			return ((::System::Int32(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}
	};
}
