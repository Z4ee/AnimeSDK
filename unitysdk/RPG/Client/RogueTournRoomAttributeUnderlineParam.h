#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA3D1B50)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3D1AB0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA3D1AA0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA3D1A80)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3D1A30)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3D1A50)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA3D1A20)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D1BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRoomAttributeUnderlineParam_TypeDefinitionIndex = 55374;

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

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournRoomAttributeUnderlineParam* Create(::RPG::Client::RogueTournPersonaRoomAttributeData* roomAttribute)
		{
			return ((::RPG::Client::RogueTournRoomAttributeUnderlineParam*(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_CREATE_OFFSET))(roomAttribute);
		}
	};
}
