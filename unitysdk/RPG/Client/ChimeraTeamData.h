#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_607;
namespace System { class String; }

#define RPG_CLIENT_CHIMERATEAMDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x93D5A00)
#define RPG_CLIENT_CHIMERATEAMDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93D5AF0)
#define RPG_CLIENT_CHIMERATEAMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x93D5940)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMAVATARICON_OFFSET UNITYSDK_OFFSET(0x93D5C00)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMICON_OFFSET UNITYSDK_OFFSET(0x93D5BC0)
#define RPG_CLIENT_CHIMERATEAMDATA_GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0x93D5B60)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0x93D5C60)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x93D5C40)
#define RPG_CLIENT_CHIMERATEAMDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x93D5C80)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0x93D5C70)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x93D5C50)
#define RPG_CLIENT_CHIMERATEAMDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x93D5C90)
#define RPG_CLIENT_CHIMERATEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93D59F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamData_TypeDefinitionIndex = 51506;

	class ChimeraTeamData : public ::System::Object
	{
	public:
		::System::String* _TeamAvatarIcon; // 0x10
		::System::String* _TeamIcon; // 0x18
		::RPG::Client::TextID _TeamName; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::UInt32 _FinishWorkCnt_k__BackingField; // 0x34
		::System::UInt32 _Rank_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamData* Create(::RPG::Client::TextID teamName, ::System::String* teamIcon, ::System::String* teamAvatarIcon, ::System::UInt32 id, ::System::UInt32 finishWorkCnt, ::System::UInt32 rank)
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::RPG::Client::TextID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_CREATE_OFFSET))(teamName, teamIcon, teamAvatarIcon, id, finishWorkCnt, rank);
		}

		::RPG::Client::ChimeraTeamData* Clone()
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_CLONE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_607* other)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_607*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_COMPARETO_OFFSET))(this, other);
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

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GET_FINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinishWorkCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_FINISHWORKCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMDATA_SET_RANK_OFFSET))(this, value);
		}
	};
}
