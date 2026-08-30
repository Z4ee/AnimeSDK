#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE412A40)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xE412B30)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURRANK_OFFSET UNITYSDK_OFFSET(0xE412B70)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xE412AF0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_MAXFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xE412B50)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xE412B90)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xE412B10)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xE412B40)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURRANK_OFFSET UNITYSDK_OFFSET(0xE412B80)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xE412B00)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_MAXFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xE412B60)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xE412BA0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xE412B20)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE412A10)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualRankChimeraTeam_TypeDefinitionIndex = 72403;

	class VirtualRankChimeraTeam : public ::System::Object
	{
	public:
		::System::UInt32 _MaxFinishWorkCnt_k__BackingField; // 0x10
		::System::UInt32 _TargetRank_k__BackingField; // 0x14
		::System::Int32 _ItemIndex_k__BackingField; // 0x18
		::System::UInt32 _TeamID_k__BackingField; // 0x1C
		::System::UInt32 _CurRank_k__BackingField; // 0x20
		::System::Single _CurFinishWorkCnt_k__BackingField; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 CompareTo(::RPG::Client::VirtualRankChimeraTeam* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TEAMID_OFFSET))(this, a1);
		}

		::System::Single get_CurFinishWorkCnt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_CurFinishWorkCnt(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURFINISHWORKCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxFinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_MAXFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_MaxFinishWorkCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_MAXFINISHWORKCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURRANK_OFFSET))(this);
		}

		::System::Void set_CurRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURRANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TARGETRANK_OFFSET))(this);
		}

		::System::Void set_TargetRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TARGETRANK_OFFSET))(this, a1);
		}
	};
}
