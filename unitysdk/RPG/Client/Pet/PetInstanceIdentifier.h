#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_BLINDBOX_OFFSET UNITYSDK_OFFSET(0xDAA6690)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xEDFF0)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEDFD0)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEDF90)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEDF80)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D40)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GET_PETTYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_NORMAL_OFFSET UNITYSDK_OFFSET(0xDAAC0D0)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDAAD320)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDAAD2C0)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEDF60)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_SET_ID_OFFSET UNITYSDK_OFFSET(0x94C0)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_SET_PETTYPE_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEDF50)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAAD760)
#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetInstanceIdentifier_TypeDefinitionIndex = 75681;

	struct alignas(8) PetInstanceIdentifier
	{
		static ::RPG::Client::Pet::PetInstanceIdentifier* StaticGet_Invalid()
		{
			return (::RPG::Client::Pet::PetInstanceIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PetInstanceIdentifier_TypeDefinitionIndex)->GetStaticField(0x4770);
		}
		::RPG::Client::Pet::PetType _PetType_k__BackingField; // 0x10
		::System::UInt64 _Id_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::Pet::PetType a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetType, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER__CCTOR_OFFSET))();
		}

		::RPG::Client::Pet::PetType get_PetType()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GET_PETTYPE_OFFSET))(this);
		}

		::System::Void set_PetType(::RPG::Client::Pet::PetType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_SET_PETTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_Id()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_SET_ID_OFFSET))(this, a1);
		}

		static ::RPG::Client::Pet::PetInstanceIdentifier Normal(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_NORMAL_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetInstanceIdentifier BlindBox(::System::UInt64 a1)
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_BLINDBOX_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::PetInstanceIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::PetInstanceIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::RPG::Client::Pet::PetType& a1, ::System::UInt64& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetType&, ::System::UInt64&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIER_DECONSTRUCT_OFFSET))(this, a1, a2);
		}
	};
}
