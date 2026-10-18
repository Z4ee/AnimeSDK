#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDB35A10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDB3D3A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0xDB3D380)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xDB3D3B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_SET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0xDB3D390)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB3D370)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipTagDisplayData_TypeDefinitionIndex = 79305;

	class PixAirEquipTagDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::RPG::GameCore::PixAirEquipTag _TagType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipTagDisplayData* Create(::RPG::GameCore::PixAirEquipTag a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipTagDisplayData*(*)(::RPG::GameCore::PixAirEquipTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::PixAirEquipTag get_TagType()
		{
			return ((::RPG::GameCore::PixAirEquipTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_GET_TAGTYPE_OFFSET))(this);
		}

		::System::Void set_TagType(::RPG::GameCore::PixAirEquipTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirEquipTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_SET_TAGTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPTAGDISPLAYDATA_SET_NAME_OFFSET))(this, a1);
		}
	};
}
