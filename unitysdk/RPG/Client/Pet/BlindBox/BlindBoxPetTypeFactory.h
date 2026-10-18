#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

class Class_1_979433F5EFDD1C03;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0xDAB1850)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xDAB1650)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__QUERYTYPEROW_OFFSET UNITYSDK_OFFSET(0xDAB1700)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetTypeFactory_TypeDefinitionIndex = 75738;

	class BlindBoxPetTypeFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::BlindBox::BlindBoxPetType Create(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>* CreateAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATEALL_OFFSET))();
		}

		static ::Class_1_979433F5EFDD1C03* _QueryTypeRow(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
		{
			return ((::Class_1_979433F5EFDD1C03*(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__QUERYTYPEROW_OFFSET))(a1);
		}
	};
}
