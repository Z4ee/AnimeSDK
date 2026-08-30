#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1583652C74B6FEEC;

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A3AB830)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_INITIALHIDE_OFFSET UNITYSDK_OFFSET(0x1A3AB8F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A3AB940)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1A3AB8A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_STARID_OFFSET UNITYSDK_OFFSET(0x1A3AB7E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A3AB950)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AB7A0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameStageStarInfo_TypeDefinitionIndex = 78589;

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
