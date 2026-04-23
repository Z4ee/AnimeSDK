#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMiracleRow; }

#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_CREATE_OFFSET UNITYSDK_OFFSET(0xB06F3C0)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xB072260)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0xB072330)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB0722D0)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0xB072250)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleRowWrap_TypeDefinitionIndex = 61993;

	class RogueMiracleRowWrap : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleID; // 0x10

		::System::Void _ctor(::System::UInt32 miracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP__CTOR_OFFSET))(this, miracleID);
		}

		static ::RPG::Client::RogueMiracleRowWrap* Create(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP_CREATE_OFFSET))(miracleID);
		}

		::System::UInt32 get_MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_MiracleEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET__ROW_OFFSET))(this);
		}
	};
}
