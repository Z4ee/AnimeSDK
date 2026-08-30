#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMiracleRow; }

#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_CREATE_OFFSET UNITYSDK_OFFSET(0xDEF3A40)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xDEF6950)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0xDEF6A50)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDEF69F0)
#define RPG_CLIENT_ROGUEMIRACLEROWWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0xDEF6940)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleRowWrap_TypeDefinitionIndex = 67288;

	class RogueMiracleRowWrap : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueMiracleRowWrap* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEROWWRAP_CREATE_OFFSET))(a1);
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
