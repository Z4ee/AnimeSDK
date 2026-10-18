#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetRepository; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_2E267C51DEA549D8_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0x15D20510)
#define CLASS_1_2E267C51DEA549D8_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15D20230)
#define CLASS_1_2E267C51DEA549D8_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15D200C0)
#define CLASS_1_2E267C51DEA549D8_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15D1FA60)
#define CLASS_1_2E267C51DEA549D8_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x15D1FCF0)
#define CLASS_1_2E267C51DEA549D8_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D1FF50)
#define CLASS_1_2E267C51DEA549D8_GET_PETID_OFFSET UNITYSDK_OFFSET(0x15D1FA70)
#define CLASS_1_2E267C51DEA549D8_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D203A0)
#define CLASS_1_2E267C51DEA549D8_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15D1FE20)
#define CLASS_1_2E267C51DEA549D8_METHOD_1_0DB56C4E0F0538A9_OFFSET UNITYSDK_OFFSET(0x15D1FBA0)
#define CLASS_1_2E267C51DEA549D8__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F9E0)

inline static constexpr unsigned int Class_1_2E267C51DEA549D8_TypeDefinitionIndex = 75716;

class Class_1_2E267C51DEA549D8 : public ::System::Object
{
public:
	::System::WeakReference_1<::RPG::Client::Pet::IPetRepository*>* NMPIJGKPFIK; // 0x10
	::RPG::Client::Pet::PetIdentifier _Identifier_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::Pet::PetIdentifier a1, ::RPG::Client::Pet::IPetRepository* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier, ::RPG::Client::Pet::IPetRepository*))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Pet::PetIdentifier get_Identifier()
	{
		return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_PetId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_PETID_OFFSET))(this);
	}

	::System::UInt32 get_ItemId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_ITEMID_OFFSET))(this);
	}

	::RPG::Client::Pet::PetType get_Type()
	{
		return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_TYPE_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_NAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Description()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_DESCRIPTION_OFFSET))(this);
	}

	::RPG::Client::TextID get_BackgroundDescription()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
	}

	::RPG::Client::Pet::PetRarity get_Rarity()
	{
		return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_RARITY_OFFSET))(this);
	}

	::RPG::Client::Pet::IPetAppearance* get_Appearance()
	{
		return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_GET_APPEARANCE_OFFSET))(this);
	}

	::RPG::Client::Pet::IPet* Method_1_0DB56C4E0F0538A9()
	{
		return ((::RPG::Client::Pet::IPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E267C51DEA549D8_METHOD_1_0DB56C4E0F0538A9_OFFSET))(this);
	}
};
