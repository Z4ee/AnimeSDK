#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2786121EC539E542_1;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_AVERAGERANK_OFFSET UNITYSDK_OFFSET(0xA35CCE0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_DROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0xA35CC30)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_KEYTRAITID_OFFSET UNITYSDK_OFFSET(0xA35CCC0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOPCOUNT_OFFSET UNITYSDK_OFFSET(0xA35CCA0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA35CC80)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_AVERAGERANK_OFFSET UNITYSDK_OFFSET(0xA35CCF0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_KEYTRAITID_OFFSET UNITYSDK_OFFSET(0xA35CCD0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOPCOUNT_OFFSET UNITYSDK_OFFSET(0xA35CCB0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA35CC90)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA35C640)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCAVERAGERANK_OFFSET UNITYSDK_OFFSET(0xA35C6B0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCKEYTRAIT_OFFSET UNITYSDK_OFFSET(0xA35C8D0)
#define RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA35C630)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsDifficultyDataItem_TypeDefinitionIndex = 58994;

	class FateStatisticsDifficultyDataItem : public ::System::Object
	{
	public:
		::System::Func_1<::System::String*>* _GetDropDownTitle; // 0x10
		::System::UInt32 _TopCount_k__BackingField; // 0x18
		::System::UInt32 _TotalCount_k__BackingField; // 0x1C
		::System::Single _AverageRank_k__BackingField; // 0x20
		::System::UInt32 _KeyTraitID_k__BackingField; // 0x24

		::System::Void _ctor(::System::Func_1<::System::String*>* dropDownTitleGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CTOR_OFFSET))(this, dropDownTitleGetter);
		}

		::System::Void Sync(::Class_1_2786121EC539E542_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Void _CalcAverageRank(::Class_1_2786121EC539E542_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCAVERAGERANK_OFFSET))(this, proto);
		}

		::System::Void _CalcKeyTrait(::Class_1_2786121EC539E542_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM__CALCKEYTRAIT_OFFSET))(this, proto);
		}

		::System::String* get_DropDownTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_DROPDOWNTITLE_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TopCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_TOPCOUNT_OFFSET))(this);
		}

		::System::Void set_TopCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_TOPCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_KeyTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_KEYTRAITID_OFFSET))(this);
		}

		::System::Void set_KeyTraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_KEYTRAITID_OFFSET))(this, value);
		}

		::System::Single get_AverageRank()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_GET_AVERAGERANK_OFFSET))(this);
		}

		::System::Void set_AverageRank(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSDIFFICULTYDATAITEM_SET_AVERAGERANK_OFFSET))(this, value);
		}
	};
}
