#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACETITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C84BD20)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x1C84BFC0)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x1C84BF00)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLEID_OFFSET UNITYSDK_OFFSET(0x1C84C060)
#define RPG_CLIENT_CAKERACETITLEDATA_GET_TITLENAME_OFFSET UNITYSDK_OFFSET(0x1C84BE40)
#define RPG_CLIENT_CAKERACETITLEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C84BDE0)
#define RPG_CLIENT_CAKERACETITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C84BDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceTitleData_TypeDefinitionIndex = 63133;

	class CakeRaceTitleData : public ::System::Object
	{
	public:
		::System::UInt32 _TitleID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceTitleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceTitleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEDATA_CREATE_OFFSET))(a1);
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
