#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7BAD70)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7BACB0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BAC70)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7BABA0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7BAAF0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7BAB40)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C7BAAA0)
#define RPG_CLIENT_ROGUETOURNROOMATTRIBUTEUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BADF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRoomAttributeUnderlineParam_TypeDefinitionIndex = 67872;

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
