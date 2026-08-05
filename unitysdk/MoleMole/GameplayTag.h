#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_GAMEPLAYTAG_EMPTY_OFFSET UNITYSDK_OFFSET(0x129A65B0)
#define MOLEMOLE_GAMEPLAYTAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B83D0)
#define MOLEMOLE_GAMEPLAYTAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B83C0)
#define MOLEMOLE_GAMEPLAYTAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B82D0)
#define MOLEMOLE_GAMEPLAYTAG_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define MOLEMOLE_GAMEPLAYTAG_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define MOLEMOLE_GAMEPLAYTAG_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B83B0)
#define MOLEMOLE_GAMEPLAYTAG_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x7B8110)
#define MOLEMOLE_GAMEPLAYTAG_MATCH_OFFSET UNITYSDK_OFFSET(0x7B81D0)
#define MOLEMOLE_GAMEPLAYTAG_NAMEMATCH_OFFSET UNITYSDK_OFFSET(0x7B81F0)
#define MOLEMOLE_GAMEPLAYTAG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x129A6D10)
#define MOLEMOLE_GAMEPLAYTAG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x129A68B0)
#define MOLEMOLE_GAMEPLAYTAG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x129A6DF0)
#define MOLEMOLE_GAMEPLAYTAG_PURETAG_OFFSET UNITYSDK_OFFSET(0x7B8170)
#define MOLEMOLE_GAMEPLAYTAG_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define MOLEMOLE_GAMEPLAYTAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B8280)
#define MOLEMOLE_GAMEPLAYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)
#define MOLEMOLE_GAMEPLAYTAG___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B84F0)
#define MOLEMOLE_GAMEPLAYTAG___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B8560)
#define MOLEMOLE_GAMEPLAYTAG___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B8470)

namespace MoleMole
{
	inline static constexpr unsigned int GameplayTag_TypeDefinitionIndex = 44718;

	struct alignas(8) GameplayTag
	{
		// static const ::System::Char SplitChar; // 0x0
		// static const ::System::Int32 DEFAULT_INSTANCE_ID = 0x0; // 0x0
		// static const ::System::Int32 SHOW_IN_FC = 0x1; // 0x0
		::System::String* tagName; // 0x10
		::System::UInt32 _instanceId_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG__CTOR_OFFSET))(this, name, id);
		}

		::System::UInt32 get_instanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_instanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::String* get_TagName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_GET_TAGNAME_OFFSET))(this);
		}

		static ::MoleMole::GameplayTag Empty()
		{
			return ((::MoleMole::GameplayTag(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_EMPTY_OFFSET))();
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_ISEMPTY_OFFSET))(this);
		}

		::MoleMole::GameplayTag PureTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_PURETAG_OFFSET))(this);
		}

		::System::Boolean Match(::MoleMole::GameplayTag target, ::System::Boolean onlyMatchName)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_MATCH_OFFSET))(this, target, onlyMatchName);
		}

		::System::Boolean NameMatch(::MoleMole::GameplayTag target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_NAMEMATCH_OFFSET))(this, target);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_TOSTRING_OFFSET))(this);
		}

		static ::MoleMole::GameplayTag op_Implicit(::System::String* name)
		{
			return ((::MoleMole::GameplayTag(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_OP_IMPLICIT_OFFSET))(name);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 InternalGetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_INTERNALGETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::MoleMole::GameplayTag other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::MoleMole::GameplayTag a, ::MoleMole::GameplayTag b)
		{
			return ((::System::Boolean(*)(::MoleMole::GameplayTag, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MoleMole::GameplayTag a, ::MoleMole::GameplayTag b)
		{
			return ((::System::Boolean(*)(::MoleMole::GameplayTag, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG___BASE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
