#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_328837E934E4088A;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_AVERAGERANK_OFFSET UNITYSDK_OFFSET(0xB9B0190)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_DROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0xB9B00D0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_KEYTRAITID_OFFSET UNITYSDK_OFFSET(0xB9B0170)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOPCOUNT_OFFSET UNITYSDK_OFFSET(0xB9B0150)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB9B0130)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_AVERAGERANK_OFFSET UNITYSDK_OFFSET(0xB9B01A0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_KEYTRAITID_OFFSET UNITYSDK_OFFSET(0xB9B0180)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOPCOUNT_OFFSET UNITYSDK_OFFSET(0xB9B0160)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB9B0140)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB9AFB60)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCAVERAGERANK_OFFSET UNITYSDK_OFFSET(0xB9AFBD0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCKEYTRAIT_OFFSET UNITYSDK_OFFSET(0xB9AFD70)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AFB50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsDifficultyDataItem_TypeDefinitionIndex = 59924;

	class FateStatisticsDifficultyDataItem : public ::System::Object
	{
	public:
		::System::Func_1<::System::String*>* _GetDropDownTitle; // 0x10
		::System::UInt32 _KeyTraitID_k__BackingField; // 0x18
		::System::UInt32 _TotalCount_k__BackingField; // 0x1C
		::System::UInt32 _TopCount_k__BackingField; // 0x20
		::System::Single _AverageRank_k__BackingField; // 0x24

		::System::Void _ctor(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_328837E934E4088A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328837E934E4088A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void _CalcAverageRank(::Class_1_328837E934E4088A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328837E934E4088A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCAVERAGERANK_OFFSET))(this, a1);
		}

		::System::Void _CalcKeyTrait(::Class_1_328837E934E4088A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328837E934E4088A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCKEYTRAIT_OFFSET))(this, a1);
		}

		::System::String* get_DropDownTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_DROPDOWNTITLE_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TopCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOPCOUNT_OFFSET))(this);
		}

		::System::Void set_TopCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOPCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_KeyTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_KEYTRAITID_OFFSET))(this);
		}

		::System::Void set_KeyTraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_KEYTRAITID_OFFSET))(this, a1);
		}

		::System::Single get_AverageRank()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_AVERAGERANK_OFFSET))(this);
		}

		::System::Void set_AverageRank(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_AVERAGERANK_OFFSET))(this, a1);
		}
	};
}
