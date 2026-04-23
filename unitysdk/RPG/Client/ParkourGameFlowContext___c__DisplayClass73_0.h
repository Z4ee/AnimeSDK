#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourGameCharacterInfo; }

#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC31030)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___C__DISPLAYCLASS73_0__GETCHARACTERINFOBYID_B__0_OFFSET UNITYSDK_OFFSET(0xAC32680)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlowContext___c__DisplayClass73_0_TypeDefinitionIndex = 57045;

	class ParkourGameFlowContext___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCharacterInfoByID_b__0(::RPG::Client::ParkourGameCharacterInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGameCharacterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___C__DISPLAYCLASS73_0__GETCHARACTERINFOBYID_B__0_OFFSET))(this, info);
		}
	};
}
