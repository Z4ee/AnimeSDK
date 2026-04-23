#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB0D21E0)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0D2120)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0D2060)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0D2010)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0D2030)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB0D2000)
#define RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D2260)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexUnderlineParam_TypeDefinitionIndex = 62563;

	class RogueTournHexUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* _Hex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournHexUnderlineParam* Create(::RPG::Client::RogueTournHexData* hex)
		{
			return ((::RPG::Client::RogueTournHexUnderlineParam*(*)(::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXUNDERLINEPARAM_CREATE_OFFSET))(hex);
		}
	};
}
