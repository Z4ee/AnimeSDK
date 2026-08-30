#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3647CDEF13483562;
namespace RPG::Client { class FateStatisticsGameSettleDataItem; }

#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_LEVELAFTER_OFFSET UNITYSDK_OFFSET(0xCF3F010)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_LEVELBEFORE_OFFSET UNITYSDK_OFFSET(0xCF3EFD0)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SETTLEDATAITEM_OFFSET UNITYSDK_OFFSET(0xCF3F050)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTOBTAINED_OFFSET UNITYSDK_OFFSET(0xCF3EF10)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTREMAINDERAFTER_OFFSET UNITYSDK_OFFSET(0xCF3EF90)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTREMAINDERBEFORE_OFFSET UNITYSDK_OFFSET(0xCF3EF50)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCF3DC30)
#define RPG_CLIENT_FATEGAMEGAMESETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCF3ADE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameGameSettleInfo_TypeDefinitionIndex = 64094;

	class FateGameGameSettleInfo : public ::System::Object
	{
	public:
		::RPG::Client::FateStatisticsGameSettleDataItem* _SettleDataItem; // 0x10
		::System::UInt32 _SkillPointRemainderBefore; // 0x18
		::System::UInt32 _LevelAfter; // 0x1C
		::System::UInt32 _SkillPointObtained; // 0x20
		::System::UInt32 _LevelBefore; // 0x24
		::System::UInt32 _SkillPointRemainderAfter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_3647CDEF13483562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3647CDEF13483562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillPointObtained()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTOBTAINED_OFFSET))(this);
		}

		::System::UInt32 get_SkillPointRemainderBefore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTREMAINDERBEFORE_OFFSET))(this);
		}

		::System::UInt32 get_SkillPointRemainderAfter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SKILLPOINTREMAINDERAFTER_OFFSET))(this);
		}

		::System::UInt32 get_LevelBefore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_LEVELBEFORE_OFFSET))(this);
		}

		::System::UInt32 get_LevelAfter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_LEVELAFTER_OFFSET))(this);
		}

		::RPG::Client::FateStatisticsGameSettleDataItem* get_SettleDataItem()
		{
			return ((::RPG::Client::FateStatisticsGameSettleDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEGAMESETTLEINFO_GET_SETTLEDATAITEM_OFFSET))(this);
		}
	};
}
