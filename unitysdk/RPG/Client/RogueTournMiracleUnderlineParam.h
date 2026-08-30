#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueTournMiracle; }
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xDF64C70)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF649F0)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDF64830)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDF645B0)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xDF64960)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDF646E0)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDF64570)
#define RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xDF64CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleUnderlineParam_TypeDefinitionIndex = 67868;

	class RogueTournMiracleUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* _Miracle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::IRogueTournMiracle* get_Miracle()
		{
			return ((::RPG::Client::IRogueTournMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_GET_MIRACLE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournMiracleUnderlineParam* Create(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::RPG::Client::RogueTournMiracleUnderlineParam*(*)(::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEUNDERLINEPARAM_CREATE_OFFSET))(a1);
		}
	};
}
