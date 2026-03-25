#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TarotBookDeleteInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xA54EAB0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTPARAM_OFFSET UNITYSDK_OFFSET(0xA54EAE0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FADEINTIME_OFFSET UNITYSDK_OFFSET(0xA54EC10)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FINALPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0xA54EBB0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_GAPTIME_OFFSET UNITYSDK_OFFSET(0xA54EC30)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_PROGRESSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA54EB80)
#define RPG_CLIENT_TAROTBOOKDELETEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA54EC50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookDeleteData_TypeDefinitionIndex = 55549;

	class TarotBookDeleteData : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookDeleteInfoRow* _Meta; // 0x10
		::System::String* _ContentTextParam; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookDeleteInfoRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookDeleteInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA__CTOR_OFFSET))(this, meta);
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
