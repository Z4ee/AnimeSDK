#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A952181C6CF1F2FF;

#define CLASS_1_B26E06FC40F846CD_2_GET_CHALLENGEBESTTIME_OFFSET UNITYSDK_OFFSET(0x15BF61B0)
#define CLASS_1_B26E06FC40F846CD_2_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x15BF6150)
#define CLASS_1_B26E06FC40F846CD_2_GET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x15BF6170)
#define CLASS_1_B26E06FC40F846CD_2_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x15BF6110)
#define CLASS_1_B26E06FC40F846CD_2_GET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x15BF6190)
#define CLASS_1_B26E06FC40F846CD_2_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x15BF6130)
#define CLASS_1_B26E06FC40F846CD_2_SET_CHALLENGEBESTTIME_OFFSET UNITYSDK_OFFSET(0x15BF61C0)
#define CLASS_1_B26E06FC40F846CD_2_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x15BF6160)
#define CLASS_1_B26E06FC40F846CD_2_SET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x15BF6180)
#define CLASS_1_B26E06FC40F846CD_2_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x15BF6120)
#define CLASS_1_B26E06FC40F846CD_2_SET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x15BF61A0)
#define CLASS_1_B26E06FC40F846CD_2_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x15BF6140)
#define CLASS_1_B26E06FC40F846CD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF61D0)

inline static constexpr unsigned int Class_1_B26E06FC40F846CD_2_TypeDefinitionIndex = 81935;

class Class_1_B26E06FC40F846CD_2 : public ::System::Object
{
public:
	::Class_1_A952181C6CF1F2FF* _NextAgendaDto_k__BackingField; // 0x10
	::System::Boolean _IsCycleFinished_k__BackingField; // 0x18
	::System::UInt32 _MatchId_k__BackingField; // 0x1C
	::System::UInt32 _TrackId_k__BackingField; // 0x20
	::System::UInt32 _ChallengeBestTime_k__BackingField; // 0x24
	::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MatchId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_MATCHID_OFFSET))(this);
	}

	::System::Void set_MatchId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_MATCHID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TrackId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_TRACKID_OFFSET))(this);
	}

	::System::Void set_TrackId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_TRACKID_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinishedMatchNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_FINISHEDMATCHNUM_OFFSET))(this);
	}

	::System::Void set_FinishedMatchNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCycleFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_ISCYCLEFINISHED_OFFSET))(this);
	}

	::System::Void set_IsCycleFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_ISCYCLEFINISHED_OFFSET))(this, a1);
	}

	::Class_1_A952181C6CF1F2FF* get_NextAgendaDto()
	{
		return ((::Class_1_A952181C6CF1F2FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_NEXTAGENDADTO_OFFSET))(this);
	}

	::System::Void set_NextAgendaDto(::Class_1_A952181C6CF1F2FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A952181C6CF1F2FF*))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_NEXTAGENDADTO_OFFSET))(this, a1);
	}

	::System::UInt32 get_ChallengeBestTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_GET_CHALLENGEBESTTIME_OFFSET))(this);
	}

	::System::Void set_ChallengeBestTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_2_SET_CHALLENGEBESTTIME_OFFSET))(this, a1);
	}
};
