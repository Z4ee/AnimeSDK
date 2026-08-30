#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

namespace RPG::GameCore { class EquipmentRow; }

#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xD43E610)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD43E1A0)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xD43E560)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xD43E540)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveEntry_TypeDefinitionIndex = 62511;

	class LightConeArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::GameCore::EquipmentRow* _Row; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EquipmentRow* get_Row()
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType GetAvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GETAVATARBASETYPE_OFFSET))(this);
		}
	};
}
