#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_749;
namespace System { class String; }

#define RPG_CLIENT_CHIMERATEAMDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB6C29C0)
#define RPG_CLIENT_CHIMERATEAMDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB6C2AB0)
#define RPG_CLIENT_CHIMERATEAMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB6C2900)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMAVATARICON_OFFSET UNITYSDK_OFFSET(0xB6C2BC0)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMICON_OFFSET UNITYSDK_OFFSET(0xB6C2B80)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0xB6C2B20)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xB6C2C20)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB6C2C00)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB6C2C40)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xB6C2C30)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB6C2C10)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xB6C2C50)
#define RPG_CLIENT_CHIMERATEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C29B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamData_TypeDefinitionIndex = 59374;

	class ChimeraTeamData : public ::System::Object
	{
	public:
		::System::String* _TeamIcon; // 0x10
		::System::String* _TeamAvatarIcon; // 0x18
		::RPG::Client::TextID _TeamName; // 0x20
		::System::UInt32 _FinishWorkCnt_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _Rank_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamData* Create(::RPG::Client::TextID a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::RPG::Client::TextID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ChimeraTeamData* Clone()
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_CLONE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_749* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_749*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetTeamName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GETTEAMNAME_OFFSET))(this);
		}

		::System::String* GetTeamIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GETTEAMICON_OFFSET))(this);
		}

		::System::String* GetTeamAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GETTEAMAVATARICON_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GET_FINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinishWorkCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_FINISHWORKCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_RANK_OFFSET))(this, a1);
		}
	};
}
