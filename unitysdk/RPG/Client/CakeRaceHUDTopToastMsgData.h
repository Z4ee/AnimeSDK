#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceCatDataItem; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F05050)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET UNITYSDK_OFFSET(0x9F05190)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0x9F051B0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET UNITYSDK_OFFSET(0x9F051A0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0x9F051C0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F050E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDTopToastMsgData_TypeDefinitionIndex = 58094;

	class CakeRaceHUDTopToastMsgData : public ::System::Object
	{
	public:
		::System::String* _TextStr_k__BackingField; // 0x10
		::RPG::Client::CakeRaceCatDataItem* _CatData_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 catID, ::System::String* textStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA__CTOR_OFFSET))(this, catID, textStr);
		}

		static ::RPG::Client::CakeRaceHUDTopToastMsgData* Create(::System::UInt32 catID, ::System::String* textStr)
		{
			return ((::RPG::Client::CakeRaceHUDTopToastMsgData*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET))(catID, textStr);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET))(this);
		}

		::System::Void set_CatData(::RPG::Client::CakeRaceCatDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET))(this, value);
		}

		::System::String* get_TextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET))(this);
		}

		::System::Void set_TextStr(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET))(this, value);
		}
	};
}
