#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1AF0FFA0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF0FF00)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF0FE60)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AF0FDD0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AF0FD20)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0x1AF0FEA0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF0FD70)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AF0FCD0)
#define RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF10000)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCompositionTypeUnderlineParam_TypeDefinitionIndex = 67871;

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

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournCompositionTypeUnderlineParam* Create(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1)
		{
			return ((::RPG::Client::RogueTournCompositionTypeUnderlineParam*(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOMPOSITIONTYPEUNDERLINEPARAM_CREATE_OFFSET))(a1);
		}
	};
}
