#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_1_GET_ENDLESSSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0x18917A00)
#define CLASS_1_115297B50AB60A5D_1_GET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x18917A10)
#define CLASS_1_115297B50AB60A5D_1_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x18917A50)
#define CLASS_1_115297B50AB60A5D_1_GET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0x189179E0)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x18917A30)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0x189179C0)
#define CLASS_1_115297B50AB60A5D_1_SET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x18917A20)
#define CLASS_1_115297B50AB60A5D_1_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x18917A60)
#define CLASS_1_115297B50AB60A5D_1_SET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0x189179F0)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x18917A40)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0x189179D0)
#define CLASS_1_115297B50AB60A5D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18917A70)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_1_TypeDefinitionIndex = 78554;

class Class_1_115297B50AB60A5D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _EndlessStageIDList_k__BackingField; // 0x10
	::System::UInt32 _RaceFirstPassRewardQuestID_k__BackingField; // 0x18
	::System::UInt32 _MaxEndlessWaveCount_k__BackingField; // 0x1C
	::System::UInt32 _RaceStageID_k__BackingField; // 0x20
	::System::UInt32 _SurvivalFirstPassRewardQuestID_k__BackingField; // 0x24
	::System::UInt32 _SurvivalStageID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_SurvivalStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_SURVIVALSTAGEID_OFFSET))(this);
	}

	::System::Void set_SurvivalStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_SURVIVALSTAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RaceStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_RACESTAGEID_OFFSET))(this);
	}

	::System::Void set_RaceStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_RACESTAGEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessStageIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_ENDLESSSTAGEIDLIST_OFFSET))(this);
	}

	::System::UInt32 get_MaxEndlessWaveCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_MAXENDLESSWAVECOUNT_OFFSET))(this);
	}

	::System::Void set_MaxEndlessWaveCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_MAXENDLESSWAVECOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SurvivalFirstPassRewardQuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this);
	}

	::System::Void set_SurvivalFirstPassRewardQuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RaceFirstPassRewardQuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this);
	}

	::System::Void set_RaceFirstPassRewardQuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
	}
};
