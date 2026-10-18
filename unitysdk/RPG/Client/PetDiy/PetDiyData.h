#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/PetDiy/PetDiyStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_955FEF8D691C8861;
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetInstance; }

#define RPG_CLIENT_PETDIY_PETDIYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xDACAA90)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDACA4E0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDACACE0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISCURPLACED_OFFSET UNITYSDK_OFFSET(0xDACABF0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xDACAC40)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISONTRADED_OFFSET UNITYSDK_OFFSET(0xDACAC90)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_PETINSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDACA5C0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_PET_OFFSET UNITYSDK_OFFSET(0xDACA580)
#define RPG_CLIENT_PETDIY_PETDIYDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xDACABD0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_SETSTATUS_OFFSET UNITYSDK_OFFSET(0xDACA490)
#define RPG_CLIENT_PETDIY_PETDIYDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xDACABE0)
#define RPG_CLIENT_PETDIY_PETDIYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDACA0A0)
#define RPG_CLIENT_PETDIY_PETDIYDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDACA480)
#define RPG_CLIENT_PETDIY_PETDIYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDACA090)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyData_TypeDefinitionIndex = 74484;

	class PetDiyData : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPet* _Pet; // 0x10
		::System::UInt64 _BlindBoxUniqueId; // 0x18
		::RPG::Client::PetDiy::PetDiyStatus _Status_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_955FEF8D691C8861* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_955FEF8D691C8861*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_955FEF8D691C8861* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_955FEF8D691C8861*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SetStatus(::RPG::Client::PetDiy::PetDiyStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_SETSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::PetDiyStatus get_Status()
		{
			return ((::RPG::Client::PetDiy::PetDiyStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PetDiy::PetDiyStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurPlaced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISCURPLACED_OFFSET))(this);
		}

		::System::Boolean get_IsOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISOCCUPIED_OFFSET))(this);
		}

		::System::Boolean get_IsOnTraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_ISONTRADED_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* get_Pet()
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_PET_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_PetInstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYDATA_GET_PETINSTANCEIDENTIFIER_OFFSET))(this);
		}
	};
}
