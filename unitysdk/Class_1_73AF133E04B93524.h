#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_25;
class Class_1_A952181C6CF1F2FF;
class Class_1_B623150238B3CF94;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_73AF133E04B93524_GET_AGENDA_OFFSET UNITYSDK_OFFSET(0x1925B250)
#define CLASS_1_73AF133E04B93524_GET_CARID_OFFSET UNITYSDK_OFFSET(0x1925B290)
#define CLASS_1_73AF133E04B93524_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1925B210)
#define CLASS_1_73AF133E04B93524_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x1925B2B0)
#define CLASS_1_73AF133E04B93524_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x1925B230)
#define CLASS_1_73AF133E04B93524_GET_PLAYERCAR_OFFSET UNITYSDK_OFFSET(0x1925B2F0)
#define CLASS_1_73AF133E04B93524_GET_PREMATCHTRACKINFOLIST_OFFSET UNITYSDK_OFFSET(0x1925B270)
#define CLASS_1_73AF133E04B93524_GET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x1925B2D0)
#define CLASS_1_73AF133E04B93524_SET_AGENDA_OFFSET UNITYSDK_OFFSET(0x1925B260)
#define CLASS_1_73AF133E04B93524_SET_CARID_OFFSET UNITYSDK_OFFSET(0x1925B2A0)
#define CLASS_1_73AF133E04B93524_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1925B220)
#define CLASS_1_73AF133E04B93524_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x1925B2C0)
#define CLASS_1_73AF133E04B93524_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x1925B240)
#define CLASS_1_73AF133E04B93524_SET_PLAYERCAR_OFFSET UNITYSDK_OFFSET(0x1925B300)
#define CLASS_1_73AF133E04B93524_SET_PREMATCHTRACKINFOLIST_OFFSET UNITYSDK_OFFSET(0x1925B280)
#define CLASS_1_73AF133E04B93524_SET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x1925B2E0)
#define CLASS_1_73AF133E04B93524__CTOR_OFFSET UNITYSDK_OFFSET(0x1925B310)

inline static constexpr unsigned int Class_1_73AF133E04B93524_TypeDefinitionIndex = 80379;

class Class_1_73AF133E04B93524 : public ::System::Object
{
public:
	::Class_1_A952181C6CF1F2FF* _Agenda_k__BackingField; // 0x10
	::Class_1_B623150238B3CF94* _PlayerCar_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_25*>* _PreMatchTrackInfoList_k__BackingField; // 0x20
	::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x28
	::System::UInt32 _CarID_k__BackingField; // 0x2C
	::System::UInt32 _TargetPartID_k__BackingField; // 0x30
	::System::UInt32 _DriverID_k__BackingField; // 0x34
	::System::UInt32 _CycleID_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CycleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_CYCLEID_OFFSET))(this);
	}

	::System::Void set_CycleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_CYCLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinishedMatchNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_FINISHEDMATCHNUM_OFFSET))(this);
	}

	::System::Void set_FinishedMatchNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
	}

	::Class_1_A952181C6CF1F2FF* get_Agenda()
	{
		return ((::Class_1_A952181C6CF1F2FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_AGENDA_OFFSET))(this);
	}

	::System::Void set_Agenda(::Class_1_A952181C6CF1F2FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A952181C6CF1F2FF*))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_AGENDA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_25*>* get_PreMatchTrackInfoList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_PREMATCHTRACKINFOLIST_OFFSET))(this);
	}

	::System::Void set_PreMatchTrackInfoList(::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_25*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_25*>*))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_PREMATCHTRACKINFOLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_CarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_CARID_OFFSET))(this);
	}

	::System::Void set_CarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_CARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_DriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_DRIVERID_OFFSET))(this);
	}

	::System::Void set_DriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_DRIVERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TargetPartID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_TARGETPARTID_OFFSET))(this);
	}

	::System::Void set_TargetPartID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_TARGETPARTID_OFFSET))(this, a1);
	}

	::Class_1_B623150238B3CF94* get_PlayerCar()
	{
		return ((::Class_1_B623150238B3CF94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_GET_PLAYERCAR_OFFSET))(this);
	}

	::System::Void set_PlayerCar(::Class_1_B623150238B3CF94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B623150238B3CF94*))((::PBYTE)hIl2Cpp + CLASS_1_73AF133E04B93524_SET_PLAYERCAR_OFFSET))(this, a1);
	}
};
