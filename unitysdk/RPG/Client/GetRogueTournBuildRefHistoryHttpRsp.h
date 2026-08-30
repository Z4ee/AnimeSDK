#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GetRogueTournBuildRefHistoryHttpRsp_HistoryData; }

#define RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99E00)

namespace RPG::Client
{
	inline static constexpr unsigned int GetRogueTournBuildRefHistoryHttpRsp_TypeDefinitionIndex = 67790;

	class GetRogueTournBuildRefHistoryHttpRsp : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp_HistoryData*>* HistoryList; // 0x10
		::System::UInt32 Version; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP__CTOR_OFFSET))(this);
		}
	};
}
