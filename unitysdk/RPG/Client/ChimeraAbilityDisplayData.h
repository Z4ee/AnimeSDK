#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraAbilityDisplayRow; }

#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1B08F0)
#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C1B0800)
#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0x1C1B06B0)
#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C1B0720)
#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C1B06C0)
#define RPG_CLIENT_CHIMERAABILITYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B08E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraAbilityDisplayData_TypeDefinitionIndex = 63468;

	class ChimeraAbilityDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 _DisplayID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_DISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityDisplayRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraAbilityDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_GET_DESC_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraAbilityDisplayData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraAbilityDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAABILITYDISPLAYDATA_CREATE_OFFSET))(a1);
		}
	};
}
