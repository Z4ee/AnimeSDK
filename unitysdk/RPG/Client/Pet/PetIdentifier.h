#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBoxPetIdentifierExtra.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOXDEFAULTAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAB5FC0)
#define RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOX_OFFSET UNITYSDK_OFFSET(0xDAAE7E0)
#define RPG_CLIENT_PET_PETIDENTIFIER_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEDFF0)
#define RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEDF90)
#define RPG_CLIENT_PET_PETIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEDF80)
#define RPG_CLIENT_PET_PETIDENTIFIER_GET_BLINDBOXEXTRA_OFFSET UNITYSDK_OFFSET(0xFE70)
#define RPG_CLIENT_PET_PETIDENTIFIER_GET_PETID_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_PET_PETIDENTIFIER_NORMAL_OFFSET UNITYSDK_OFFSET(0xDAB4B40)
#define RPG_CLIENT_PET_PETIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDAB62B0)
#define RPG_CLIENT_PET_PETIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDAB6290)
#define RPG_CLIENT_PET_PETIDENTIFIER_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEDF60)
#define RPG_CLIENT_PET_PETIDENTIFIER_SET_BLINDBOXEXTRA_OFFSET UNITYSDK_OFFSET(0xFE80)
#define RPG_CLIENT_PET_PETIDENTIFIER_SET_PETID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_PET_PETIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEDF50)
#define RPG_CLIENT_PET_PETIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetIdentifier_TypeDefinitionIndex = 75679;

	struct alignas(4) PetIdentifier
	{
		::System::UInt32 _PetId_k__BackingField; // 0x10
		::RPG::Client::Pet::BlindBoxPetIdentifierExtra _BlindBoxExtra_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_GET_PETID_OFFSET))(this);
		}

		::System::Void set_PetId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_SET_PETID_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBoxPetIdentifierExtra get_BlindBoxExtra()
		{
			return ((::RPG::Client::Pet::BlindBoxPetIdentifierExtra(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_GET_BLINDBOXEXTRA_OFFSET))(this);
		}

		::System::Void set_BlindBoxExtra(::RPG::Client::Pet::BlindBoxPetIdentifierExtra a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_SET_BLINDBOXEXTRA_OFFSET))(this, a1);
		}

		static ::RPG::Client::Pet::PetIdentifier Normal(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_NORMAL_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetIdentifier BlindBox(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOX_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Pet::PetIdentifier BlindBoxDefaultAppearance(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOXDEFAULTAPPEARANCE_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Pet::PetIdentifier a1, ::RPG::Client::Pet::PetIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetIdentifier, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Pet::PetIdentifier a1, ::RPG::Client::Pet::PetIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetIdentifier, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::UInt32& a1, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETIDENTIFIER_DECONSTRUCT_OFFSET))(this, a1, a2);
		}
	};
}
