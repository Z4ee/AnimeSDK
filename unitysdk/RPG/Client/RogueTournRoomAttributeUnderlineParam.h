#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xC85CC70)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xC85CBB0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xC85CBA0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC85CAE0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC85CA90)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC85CAB0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC85CA80)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC85CCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRoomAttributeUnderlineParam_TypeDefinitionIndex = 63498;

	class RogueTournRoomAttributeUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomAttributeData* _Attribute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomAttribute* get_Attribute()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournRoomAttributeUnderlineParam* Create(::RPG::Client::RogueTournPersonaRoomAttributeData* a1)
		{
			return ((::RPG::Client::RogueTournRoomAttributeUnderlineParam*(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_CREATE_OFFSET))(a1);
		}
	};
}
