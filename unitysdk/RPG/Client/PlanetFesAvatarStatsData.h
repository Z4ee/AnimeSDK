#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_70D5AA87C5BBA20B_4;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_CREATEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A95DBE0)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A95D9F0)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_AVATARICON_OFFSET UNITYSDK_OFFSET(0x1A95DC80)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A95DC60)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_OUTPUTINCOME_OFFSET UNITYSDK_OFFSET(0x1A95DD00)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_PAMEVENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A95DD40)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_TALKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A95DD60)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_WORKTIME_OFFSET UNITYSDK_OFFSET(0x1A95DD20)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A95DC70)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_OUTPUTINCOME_OFFSET UNITYSDK_OFFSET(0x1A95DD10)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_PAMEVENTFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A95DD50)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_WORKTIME_OFFSET UNITYSDK_OFFSET(0x1A95DD30)
#define RPG_CLIENT_PLANETFESAVATARSTATSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A95DB50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarStatsData_TypeDefinitionIndex = 63608;

	class PlanetFesAvatarStatsData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _OutputIncome_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x20
		::System::UInt32 _PamEventFinishCount_k__BackingField; // 0x24
		::System::UInt32 _WorkTime_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesAvatarStatsData* Create(::Class_1_70D5AA87C5BBA20B_4* a1)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::Class_1_70D5AA87C5BBA20B_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesAvatarStatsData* CreateDisplay(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_CREATEDISPLAY_OFFSET))(a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_AVATARICON_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_OutputIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_OUTPUTINCOME_OFFSET))(this);
		}

		::System::Void set_OutputIncome(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_OUTPUTINCOME_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_WORKTIME_OFFSET))(this);
		}

		::System::Void set_WorkTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_WORKTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PamEventFinishCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_PAMEVENTFINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_PamEventFinishCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_SET_PAMEVENTFINISHCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTATSDATA_GET_TALKCOUNT_OFFSET))(this);
		}
	};
}
