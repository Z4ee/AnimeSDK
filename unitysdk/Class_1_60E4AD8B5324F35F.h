#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_73AF133E04B93524;
class Class_1_8887056F53F3B090;
class Class_1_B623150238B3CF94;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_60E4AD8B5324F35F_GET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x163A2B10)
#define CLASS_1_60E4AD8B5324F35F_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x163A2B30)
#define CLASS_1_60E4AD8B5324F35F_GET_CYCLE_OFFSET UNITYSDK_OFFSET(0x163A2AD0)
#define CLASS_1_60E4AD8B5324F35F_GET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x163A2AB0)
#define CLASS_1_60E4AD8B5324F35F_GET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x163A2AF0)
#define CLASS_1_60E4AD8B5324F35F_SET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x163A2B20)
#define CLASS_1_60E4AD8B5324F35F_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x163A2B40)
#define CLASS_1_60E4AD8B5324F35F_SET_CYCLE_OFFSET UNITYSDK_OFFSET(0x163A2AE0)
#define CLASS_1_60E4AD8B5324F35F_SET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x163A2AC0)
#define CLASS_1_60E4AD8B5324F35F_SET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x163A2B00)
#define CLASS_1_60E4AD8B5324F35F__CTOR_OFFSET UNITYSDK_OFFSET(0x163A2B50)

inline static constexpr unsigned int Class_1_60E4AD8B5324F35F_TypeDefinitionIndex = 80332;

class Class_1_60E4AD8B5324F35F : public ::System::Object
{
public:
	::Class_1_B623150238B3CF94* _CarDisplay_k__BackingField; // 0x10
	::Class_1_8887056F53F3B090* _Challenge_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedDriverIDs_k__BackingField; // 0x20
	::Class_1_73AF133E04B93524* _Cycle_k__BackingField; // 0x28
	::System::UInt32 _LastCycleID_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LastCycleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_GET_LASTCYCLEID_OFFSET))(this);
	}

	::System::Void set_LastCycleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_SET_LASTCYCLEID_OFFSET))(this, a1);
	}

	::Class_1_73AF133E04B93524* get_Cycle()
	{
		return ((::Class_1_73AF133E04B93524*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_GET_CYCLE_OFFSET))(this);
	}

	::System::Void set_Cycle(::Class_1_73AF133E04B93524* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73AF133E04B93524*))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_SET_CYCLE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedDriverIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_GET_UNLOCKEDDRIVERIDS_OFFSET))(this);
	}

	::System::Void set_UnlockedDriverIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_SET_UNLOCKEDDRIVERIDS_OFFSET))(this, a1);
	}

	::Class_1_B623150238B3CF94* get_CarDisplay()
	{
		return ((::Class_1_B623150238B3CF94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_GET_CARDISPLAY_OFFSET))(this);
	}

	::System::Void set_CarDisplay(::Class_1_B623150238B3CF94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B623150238B3CF94*))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_SET_CARDISPLAY_OFFSET))(this, a1);
	}

	::Class_1_8887056F53F3B090* get_Challenge()
	{
		return ((::Class_1_8887056F53F3B090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_GET_CHALLENGE_OFFSET))(this);
	}

	::System::Void set_Challenge(::Class_1_8887056F53F3B090* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8887056F53F3B090*))((::PBYTE)hIl2Cpp + CLASS_1_60E4AD8B5324F35F_SET_CHALLENGE_OFFSET))(this, a1);
	}
};
