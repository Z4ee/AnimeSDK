#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEDC70)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0xEDBF0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEDC80)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEC9A0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0xEDCE0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDAA7A90)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDAA7B70)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEDCD0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAA7C80)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xEDBD0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetType_TypeDefinitionIndex = 75735;

	struct alignas(8) BlindBoxPetType
	{
		static ::RPG::Client::Pet::BlindBox::BlindBoxPetType* StaticGet_None()
		{
			return (::RPG::Client::Pet::BlindBox::BlindBoxPetType*)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPetType_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		::RPG::Client::Pet::BlindBox::BlindBoxPetKind _Value_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::Int32 _SortOrder_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1, ::RPG::Client::TextID a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetKind, ::RPG::Client::TextID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetKind get_Value()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_VALUE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_SortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE_GET_SORTORDER_OFFSET))(this);
		}
	};
}
