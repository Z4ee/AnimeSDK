#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceCatDataItem; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB4A0AA0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET UNITYSDK_OFFSET(0xB4A0C60)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0xB4A0C80)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET UNITYSDK_OFFSET(0xB4A0C70)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0xB4A0C90)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0B30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDTopToastMsgData_TypeDefinitionIndex = 59010;

	class CakeRaceHUDTopToastMsgData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceCatDataItem* _CatData_k__BackingField; // 0x10
		::System::String* _TextStr_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceHUDTopToastMsgData* Create(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::RPG::Client::CakeRaceHUDTopToastMsgData*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET))(this);
		}

		::System::Void set_CatData(::RPG::Client::CakeRaceCatDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET))(this, a1);
		}

		::System::String* get_TextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET))(this);
		}

		::System::Void set_TextStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET))(this, a1);
		}
	};
}
