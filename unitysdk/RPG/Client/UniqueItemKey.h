#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/UniqueItemKind.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_UNIQUEITEMKEY_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF3770)
#define RPG_CLIENT_UNIQUEITEMKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF3740)
#define RPG_CLIENT_UNIQUEITEMKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xF36F0)
#define RPG_CLIENT_UNIQUEITEMKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF36E0)
#define RPG_CLIENT_UNIQUEITEMKEY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xF3650)
#define RPG_CLIENT_UNIQUEITEMKEY_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_UNIQUEITEMKEY_GET_PETINSTANCE_OFFSET UNITYSDK_OFFSET(0xEC9A0)
#define RPG_CLIENT_UNIQUEITEMKEY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xF36A0)
#define RPG_CLIENT_UNIQUEITEMKEY_GET_UID_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define RPG_CLIENT_UNIQUEITEMKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE408860)
#define RPG_CLIENT_UNIQUEITEMKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE4087D0)
#define RPG_CLIENT_UNIQUEITEMKEY_PET_OFFSET UNITYSDK_OFFSET(0xE408320)
#define RPG_CLIENT_UNIQUEITEMKEY_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF36C0)
#define RPG_CLIENT_UNIQUEITEMKEY_SERVERUNIQUE_OFFSET UNITYSDK_OFFSET(0xE408290)
#define RPG_CLIENT_UNIQUEITEMKEY_SET_KIND_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_UNIQUEITEMKEY_SET_PETINSTANCE_OFFSET UNITYSDK_OFFSET(0xF3640)
#define RPG_CLIENT_UNIQUEITEMKEY_SET_UID_OFFSET UNITYSDK_OFFSET(0xFE00)
#define RPG_CLIENT_UNIQUEITEMKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF36B0)
#define RPG_CLIENT_UNIQUEITEMKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0xE408F10)
#define RPG_CLIENT_UNIQUEITEMKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xF3620)

namespace RPG::Client
{
	inline static constexpr unsigned int UniqueItemKey_TypeDefinitionIndex = 65746;

	struct alignas(8) UniqueItemKey
	{
		static ::RPG::Client::UniqueItemKey* StaticGet_Invalid()
		{
			return (::RPG::Client::UniqueItemKey*)Il2CppClass::FromTypeDefinitionIndex(UniqueItemKey_TypeDefinitionIndex)->GetStaticField(0x51F0);
		}
		::RPG::Client::UniqueItemKind _Kind_k__BackingField; // 0x10
		::System::UInt32 _Uid_k__BackingField; // 0x14
		::RPG::Client::Pet::PetInstanceIdentifier _PetInstance_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::UniqueItemKind a1, ::System::UInt32 a2, ::RPG::Client::Pet::PetInstanceIdentifier a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UniqueItemKind, ::System::UInt32, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY__CCTOR_OFFSET))();
		}

		::RPG::Client::UniqueItemKind get_Kind()
		{
			return ((::RPG::Client::UniqueItemKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::RPG::Client::UniqueItemKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UniqueItemKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_SET_KIND_OFFSET))(this, a1);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_SET_UID_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_PetInstance()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GET_PETINSTANCE_OFFSET))(this);
		}

		::System::Void set_PetInstance(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_SET_PETINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GET_ISVALID_OFFSET))(this);
		}

		::System::String* get_RedDotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GET_REDDOTKEY_OFFSET))(this);
		}

		static ::RPG::Client::UniqueItemKey ServerUnique(::System::UInt32 a1)
		{
			return ((::RPG::Client::UniqueItemKey(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_SERVERUNIQUE_OFFSET))(a1);
		}

		static ::RPG::Client::UniqueItemKey Pet(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::RPG::Client::UniqueItemKey(*)(::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_PET_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::UniqueItemKey a1, ::RPG::Client::UniqueItemKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UniqueItemKey, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::UniqueItemKey a1, ::RPG::Client::UniqueItemKey a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UniqueItemKey, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::UniqueItemKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::RPG::Client::UniqueItemKind& a1, ::System::UInt32& a2, ::RPG::Client::Pet::PetInstanceIdentifier& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UniqueItemKind&, ::System::UInt32&, ::RPG::Client::Pet::PetInstanceIdentifier&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNIQUEITEMKEY_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}
	};
}
