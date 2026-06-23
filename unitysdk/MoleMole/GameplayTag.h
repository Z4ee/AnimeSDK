#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_GAMEPLAYTAG_EMPTY_OFFSET UNITYSDK_OFFSET(0x15825C80)
#define MOLEMOLE_GAMEPLAYTAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x800540)
#define MOLEMOLE_GAMEPLAYTAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x800530)
#define MOLEMOLE_GAMEPLAYTAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x800450)
#define MOLEMOLE_GAMEPLAYTAG_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define MOLEMOLE_GAMEPLAYTAG_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x246290)
#define MOLEMOLE_GAMEPLAYTAG_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x800520)
#define MOLEMOLE_GAMEPLAYTAG_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x800290)
#define MOLEMOLE_GAMEPLAYTAG_MATCH_OFFSET UNITYSDK_OFFSET(0x800350)
#define MOLEMOLE_GAMEPLAYTAG_NAMEMATCH_OFFSET UNITYSDK_OFFSET(0x800370)
#define MOLEMOLE_GAMEPLAYTAG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15826390)
#define MOLEMOLE_GAMEPLAYTAG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15825F80)
#define MOLEMOLE_GAMEPLAYTAG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15826470)
#define MOLEMOLE_GAMEPLAYTAG_PURETAG_OFFSET UNITYSDK_OFFSET(0x8002F0)
#define MOLEMOLE_GAMEPLAYTAG_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define MOLEMOLE_GAMEPLAYTAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x800400)
#define MOLEMOLE_GAMEPLAYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)
#define MOLEMOLE_GAMEPLAYTAG___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x800660)
#define MOLEMOLE_GAMEPLAYTAG___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8006D0)
#define MOLEMOLE_GAMEPLAYTAG___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8005E0)

namespace MoleMole
{
	inline static constexpr unsigned int GameplayTag_TypeDefinitionIndex = 60700;

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
