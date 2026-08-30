#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_5B567C8A01BAEDFE_245;
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISHSHOPSTAGE_OFFSET UNITYSDK_OFFSET(0xDB224E0)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xDB22750)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xDB22870)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDB228C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_ISCANREFRESH_OFFSET UNITYSDK_OFFSET(0xDB227C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xDB22480)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDB22470)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirShopSelectAction_TypeDefinitionIndex = 78815;

	class PixAirShopSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::Class_1_5B567C8A01BAEDFE_245* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5B567C8A01BAEDFE_245*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_START_OFFSET))(this);
		}

		::System::Void FinishShopStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISHSHOPSTAGE_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Boolean IsCanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_ISCANREFRESH_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
