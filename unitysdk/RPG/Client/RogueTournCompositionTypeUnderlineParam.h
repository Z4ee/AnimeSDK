#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB0C0070)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0BFFD0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB0BFF90)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0BFF00)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BFEB0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xB0BFFA0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0BFED0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB0BFEA0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C00D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCompositionTypeUnderlineParam_TypeDefinitionIndex = 62564;

	class RogueTournCompositionTypeUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournCompositionTypeUnderlineParam* Create(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* compositionType)
		{
			return ((::RPG::Client::RogueTournCompositionTypeUnderlineParam*(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_CREATE_OFFSET))(compositionType);
		}
	};
}
