#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDisplayRow; }

#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0xCB12170)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCB121E0)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY1CONTENT_OFFSET UNITYSDK_OFFSET(0xCB12360)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY1TITLE_OFFSET UNITYSDK_OFFSET(0xCB122A0)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY2CONTENT_OFFSET UNITYSDK_OFFSET(0xCB124E0)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY2TITLE_OFFSET UNITYSDK_OFFSET(0xCB12420)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY3CONTENT_OFFSET UNITYSDK_OFFSET(0xCB12660)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY3TITLE_OFFSET UNITYSDK_OFFSET(0xCB125A0)
#define RPG_CLIENT_CHIMERADISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCB12180)
#define RPG_CLIENT_CHIMERADISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB10D20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDisplayData_TypeDefinitionIndex = 63410;

	class ChimeraDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 _DisplayID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_DISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDisplayRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story1Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY1TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story1Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY1CONTENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story2Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY2TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story2Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY2CONTENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story3Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY3TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Story3Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADISPLAYDATA_GET_STORY3CONTENT_OFFSET))(this);
		}
	};
}
