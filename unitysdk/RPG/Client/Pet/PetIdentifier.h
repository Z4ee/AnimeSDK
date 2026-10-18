#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBoxPetIdentifierExtra.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOXDEFAULTAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAAC750)
#define RPG_CLIENT_PET_PETIDENTIFIER_BLINDBOX_OFFSET UNITYSDK_OFFSET(0xDAA4F50)
#define RPG_CLIENT_PET_PETIDENTIFIER_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13AA0)
#define RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEDF40)
#define RPG_CLIENT_PET_PETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEDEE0)
#define RPG_CLIENT_PET_PETIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEDED0)
#define RPG_CLIENT_PET_PETIDENTIFIER_GET_BLINDBOXEXTRA_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define RPG_CLIENT_PET_PETIDENTIFIER_GET_PETID_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_PET_PETIDENTIFIER_NORMAL_OFFSET UNITYSDK_OFFSET(0xDAAB2D0)
#define RPG_CLIENT_PET_PETIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDAACA40)
#define RPG_CLIENT_PET_PETIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDAACA20)
#define RPG_CLIENT_PET_PETIDENTIFIER_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEDEB0)
#define RPG_CLIENT_PET_PETIDENTIFIER_SET_BLINDBOXEXTRA_OFFSET UNITYSDK_OFFSET(0xFE00)
#define RPG_CLIENT_PET_PETIDENTIFIER_SET_PETID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_PET_PETIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEDEA0)
#define RPG_CLIENT_PET_PETIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x11150)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetIdentifier_TypeDefinitionIndex = 75678;

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
