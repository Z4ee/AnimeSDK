#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::GameCore { class EquipmentRow; }

#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x997A450)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x997A830)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x997A730)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x997A8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveEntry_TypeDefinitionIndex = 50719;

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

		::System::Int32 __iFixBaseProxy_get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET))(this);
		}
	};
}
