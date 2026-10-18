#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEDDA0)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_EQUALS_OFFSET UNITYSDK_OFFSET(0xEDD80)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEDD70)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_GET_APPEARANCEID_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDAA92A0)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDAA9260)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEDD00)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_SET_APPEARANCEID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEDCF0)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAA9540)
#define RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int BlindBoxPetIdentifierExtra_TypeDefinitionIndex = 75679;

	struct alignas(4) BlindBoxPetIdentifierExtra
	{
		static ::RPG::Client::Pet::BlindBoxPetIdentifierExtra* StaticGet_Invalid()
		{
			return (::RPG::Client::Pet::BlindBoxPetIdentifierExtra*)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPetIdentifierExtra_TypeDefinitionIndex)->GetStaticField(0x46E0);
		}
		::System::UInt32 _AppearanceId_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_AppearanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_GET_APPEARANCEID_OFFSET))(this);
		}

		::System::Void set_AppearanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_SET_APPEARANCEID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Pet::BlindBoxPetIdentifierExtra a1, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBoxPetIdentifierExtra, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Pet::BlindBoxPetIdentifierExtra a1, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBoxPetIdentifierExtra, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::Pet::BlindBoxPetIdentifierExtra a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBoxPetIdentifierExtra))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::UInt32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOXPETIDENTIFIEREXTRA_DECONSTRUCT_OFFSET))(this, a1);
		}
	};
}
