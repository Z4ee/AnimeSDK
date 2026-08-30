#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TarotBookDeleteInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x1B4186A0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x1B418710)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FADEINTIME_OFFSET UNITYSDK_OFFSET(0x1B418880)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FINALPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x1B418820)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_GAPTIME_OFFSET UNITYSDK_OFFSET(0x1B4188D0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_PROGRESSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B4187B0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B418920)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookDeleteData_TypeDefinitionIndex = 68053;

	class TarotBookDeleteData : public ::System::Object
	{
	public:
		::System::String* _ContentTextParam; // 0x10
		::RPG::GameCore::TarotBookDeleteInfoRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookDeleteInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookDeleteInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTID_OFFSET))(this);
		}

		::System::String* get_ContentTextParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTPARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_PROGRESSDESCRIPTION_OFFSET))(this);
		}

		::System::Single get_FinalProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FINALPROGRESSRATIO_OFFSET))(this);
		}

		::System::Single get_FadeInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FADEINTIME_OFFSET))(this);
		}

		::System::Single get_GapTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_GAPTIME_OFFSET))(this);
		}
	};
}
