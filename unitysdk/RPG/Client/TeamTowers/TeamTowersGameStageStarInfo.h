#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1583652C74B6FEEC;

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE1ADF40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_INITIALHIDE_OFFSET UNITYSDK_OFFSET(0xE1AE000)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE1AE050)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xE1ADFB0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_STARID_OFFSET UNITYSDK_OFFSET(0xE1ADEF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE1AE060)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE1ADEB0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameStageStarInfo_TypeDefinitionIndex = 78590;

	class TeamTowersGameStageStarInfo : public ::System::Object
	{
	public:
		::Class_1_1583652C74B6FEEC* _StarRow; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_STARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Boolean get_InitialHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_INITIALHIDE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_SET_ISACTIVE_OFFSET))(this, a1);
		}
	};
}
