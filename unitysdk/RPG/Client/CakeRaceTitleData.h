#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACETITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F125B0)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x9F127D0)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x9F12750)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEID_OFFSET UNITYSDK_OFFSET(0x9F12840)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLENAME_OFFSET UNITYSDK_OFFSET(0x9F126D0)
#define RPG_CLIENT_CAKERACETITLEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9F12670)
#define RPG_CLIENT_CAKERACETITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F12660)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceTitleData_TypeDefinitionIndex = 58098;

	class CakeRaceTitleData : public ::System::Object
	{
	public:
		::System::UInt32 _TitleID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 titleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA__CTOR_OFFSET))(this, titleID);
		}

		static ::RPG::Client::CakeRaceTitleData* Create(::System::UInt32 titleID)
		{
			return ((::RPG::Client::CakeRaceTitleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_CREATE_OFFSET))(titleID);
		}

		::RPG::Client::TextID get_TitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_GET_TITLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_TitleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEDESC_OFFSET))(this);
		}

		::System::String* get_BgColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_TitleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEID_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceTitleRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceTitleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
