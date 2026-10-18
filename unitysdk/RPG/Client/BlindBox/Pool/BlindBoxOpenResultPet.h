#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC87FF30)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_GET_PETINSTANCE_OFFSET UNITYSDK_OFFSET(0xC87FF10)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC87FF40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_SET_PETINSTANCE_OFFSET UNITYSDK_OFFSET(0xC87FF20)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET__CTOR_OFFSET UNITYSDK_OFFSET(0xC87FF50)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxOpenResultPet_TypeDefinitionIndex = 74957;

	class BlindBoxOpenResultPet : public ::System::Object
	{
	public:
		::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* _PetInstance_k__BackingField; // 0x10
		::System::Boolean _IsNew_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET__CTOR_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* get_PetInstance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_GET_PETINSTANCE_OFFSET))(this);
		}

		::System::Void set_PetInstance(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_SET_PETINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENRESULTPET_SET_ISNEW_OFFSET))(this, a1);
		}
	};
}
