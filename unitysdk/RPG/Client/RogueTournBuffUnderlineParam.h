#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA36D4A0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xA36D3D0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA36D350)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA36D250)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA36D2B0)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA36D240)
#define RPG_CLIENT_ROGUETOURNBUFFUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA36D520)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuffUnderlineParam_TypeDefinitionIndex = 55371;

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
