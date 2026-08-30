#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x190D08F0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETAPPLYINFODESC_OFFSET UNITYSDK_OFFSET(0x190D11D0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETCONFLICTTIPSDESC_OFFSET UNITYSDK_OFFSET(0x190D0E70)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETSETTINGCONFLICTDESC_OFFSET UNITYSDK_OFFSET(0x190D0A20)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x190D0990)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET_CONFLICTACTIONNAME_OFFSET UNITYSDK_OFFSET(0x190D09B0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET__GROUPID_OFFSET UNITYSDK_OFFSET(0x190D09D0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_SET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x190D09A0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_SET_CONFLICTACTIONNAME_OFFSET UNITYSDK_OFFSET(0x190D09C0)
#define RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x190D0980)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimSettingConflictShowInfo_TypeDefinitionIndex = 64276;

	class FiveDimSettingConflictShowInfo : public ::System::Object
	{
	public:
		::System::String* _ConflictActionName_k__BackingField; // 0x10
		::System::String* _ActionName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimSettingConflictShowInfo* Create(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::FiveDimSettingConflictShowInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::String* get_ActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET_ACTIONNAME_OFFSET))(this);
		}

		::System::Void set_ActionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_SET_ACTIONNAME_OFFSET))(this, a1);
		}

		::System::String* get_ConflictActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET_CONFLICTACTIONNAME_OFFSET))(this);
		}

		::System::Void set_ConflictActionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_SET_CONFLICTACTIONNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get__GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GET__GROUPID_OFFSET))(this);
		}

		::System::String* GetSettingConflictDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETSETTINGCONFLICTDESC_OFFSET))(this);
		}

		::System::String* GetConflictTipsDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETCONFLICTTIPSDESC_OFFSET))(this);
		}

		::System::String* GetApplyInfoDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSETTINGCONFLICTSHOWINFO_GETAPPLYINFODESC_OFFSET))(this);
		}
	};
}
