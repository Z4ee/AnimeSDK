#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_1_GET_ENDLESSSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0x15083580)
#define CLASS_1_115297B50AB60A5D_1_GET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x15083590)
#define CLASS_1_115297B50AB60A5D_1_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x150835D0)
#define CLASS_1_115297B50AB60A5D_1_GET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0x15083560)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x150835B0)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0x15083540)
#define CLASS_1_115297B50AB60A5D_1_SET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x150835A0)
#define CLASS_1_115297B50AB60A5D_1_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x150835E0)
#define CLASS_1_115297B50AB60A5D_1_SET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0x15083570)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x150835C0)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0x15083550)
#define CLASS_1_115297B50AB60A5D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x150835F0)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_1_TypeDefinitionIndex = 75056;

class Class_1_115297B50AB60A5D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _EndlessStageIDList_k__BackingField; // 0x10
	::System::UInt32 _SurvivalStageID_k__BackingField; // 0x18
	::System::UInt32 _RaceStageID_k__BackingField; // 0x1C
	::System::UInt32 _SurvivalFirstPassRewardQuestID_k__BackingField; // 0x20
	::System::UInt32 _MaxEndlessWaveCount_k__BackingField; // 0x24
	::System::UInt32 _RaceFirstPassRewardQuestID_k__BackingField; // 0x28

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
