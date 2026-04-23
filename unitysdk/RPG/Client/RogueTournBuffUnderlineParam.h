#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB0A48F0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0A4820)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0A47A0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0A46A0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0A4700)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB0A4690)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A4970)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuffUnderlineParam_TypeDefinitionIndex = 62562;

	class RogueTournBuffUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* _Buff; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournBuffUnderlineParam* Create(::RPG::Client::RogueBuffData* buff)
		{
			return ((::RPG::Client::RogueTournBuffUnderlineParam*(*)(::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_CREATE_OFFSET))(buff);
		}
	};
}
