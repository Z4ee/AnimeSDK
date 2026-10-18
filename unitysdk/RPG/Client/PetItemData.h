#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { class String; }

#define RPG_CLIENT_PETITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xDAD0580)
#define RPG_CLIENT_PETITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xDAD0350)
#define RPG_CLIENT_PETITEMDATA_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xDAD02E0)
#define RPG_CLIENT_PETITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAD0190)
#define RPG_CLIENT_PETITEMDATA_GET_PETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAD07B0)
#define RPG_CLIENT_PETITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD0130)

namespace RPG::Client
{
	inline static constexpr unsigned int PetItemData_TypeDefinitionIndex = 66457;

	class PetItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::Client::Pet::IPet* _Pet; // 0x58

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA_GET_ITEMNAME_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::RPG::Client::Pet::PetIdentifier get_PetIdentifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETITEMDATA_GET_PETIDENTIFIER_OFFSET))(this);
		}
	};
}
