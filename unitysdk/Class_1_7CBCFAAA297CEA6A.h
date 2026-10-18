#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_109;
class Class_0_16E4307DCC419505_154;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0x1C525BA0)
#define CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLEMECHIDS_OFFSET UNITYSDK_OFFSET(0x1C525BE0)
#define CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLEORDERIDS_OFFSET UNITYSDK_OFFSET(0x1C525BC0)
#define CLASS_1_7CBCFAAA297CEA6A_GET_COIN_OFFSET UNITYSDK_OFFSET(0x1C525B40)
#define CLASS_1_7CBCFAAA297CEA6A_GET_CURRENTDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C525B00)
#define CLASS_1_7CBCFAAA297CEA6A_GET_DESIGNLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C525AC0)
#define CLASS_1_7CBCFAAA297CEA6A_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1C525B20)
#define CLASS_1_7CBCFAAA297CEA6A_GET_FINISHEDREPORTIDS_OFFSET UNITYSDK_OFFSET(0x1C525C20)
#define CLASS_1_7CBCFAAA297CEA6A_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C525B60)
#define CLASS_1_7CBCFAAA297CEA6A_GET_REVENUE_OFFSET UNITYSDK_OFFSET(0x1C525B80)
#define CLASS_1_7CBCFAAA297CEA6A_GET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0x1C525C00)
#define CLASS_1_7CBCFAAA297CEA6A_GET_TOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C525AE0)
#define CLASS_1_7CBCFAAA297CEA6A_GET_WORKSHOPLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C525AA0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0x1C525BB0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLEMECHIDS_OFFSET UNITYSDK_OFFSET(0x1C525BF0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLEORDERIDS_OFFSET UNITYSDK_OFFSET(0x1C525BD0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_COIN_OFFSET UNITYSDK_OFFSET(0x1C525B50)
#define CLASS_1_7CBCFAAA297CEA6A_SET_CURRENTDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C525B10)
#define CLASS_1_7CBCFAAA297CEA6A_SET_DESIGNLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C525AD0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1C525B30)
#define CLASS_1_7CBCFAAA297CEA6A_SET_FINISHEDREPORTIDS_OFFSET UNITYSDK_OFFSET(0x1C525C30)
#define CLASS_1_7CBCFAAA297CEA6A_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C525B70)
#define CLASS_1_7CBCFAAA297CEA6A_SET_REVENUE_OFFSET UNITYSDK_OFFSET(0x1C525B90)
#define CLASS_1_7CBCFAAA297CEA6A_SET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0x1C525C10)
#define CLASS_1_7CBCFAAA297CEA6A_SET_TOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C525AF0)
#define CLASS_1_7CBCFAAA297CEA6A_SET_WORKSHOPLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C525AB0)
#define CLASS_1_7CBCFAAA297CEA6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C525C40)

inline static constexpr unsigned int Class_1_7CBCFAAA297CEA6A_TypeDefinitionIndex = 41884;

class Class_1_7CBCFAAA297CEA6A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _AvailableOrderIDs_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_109* _DesignLevelConfig_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_154* _WorkshopLevelConfig_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _FinishedReportIDs_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* _AvailableMechIDs_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* _AvailableChipIDs_k__BackingField; // 0x38
	::System::UInt32 _TotalDesignExp_k__BackingField; // 0x40
	::System::UInt32 _Coin_k__BackingField; // 0x44
	::System::UInt32 _Level_k__BackingField; // 0x48
	::System::UInt32 _CurrentDesignExp_k__BackingField; // 0x4C
	::System::UInt32 _DesignLevel_k__BackingField; // 0x50
	::System::UInt32 _Revenue_k__BackingField; // 0x54
	::System::UInt32 _RunningExamID_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_154* get_WorkshopLevelConfig()
	{
		return ((::Class_0_16E4307DCC419505_154*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_WORKSHOPLEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_WorkshopLevelConfig(::Class_0_16E4307DCC419505_154* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_154*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_WORKSHOPLEVELCONFIG_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_109* get_DesignLevelConfig()
	{
		return ((::Class_0_16E4307DCC419505_109*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_DESIGNLEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_DesignLevelConfig(::Class_0_16E4307DCC419505_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_109*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_DESIGNLEVELCONFIG_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalDesignExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_TOTALDESIGNEXP_OFFSET))(this);
	}

	::System::Void set_TotalDesignExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_TOTALDESIGNEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentDesignExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_CURRENTDESIGNEXP_OFFSET))(this);
	}

	::System::Void set_CurrentDesignExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_CURRENTDESIGNEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_DesignLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_DESIGNLEVEL_OFFSET))(this);
	}

	::System::Void set_DesignLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_DESIGNLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_Coin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_COIN_OFFSET))(this);
	}

	::System::Void set_Coin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_COIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_Revenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_REVENUE_OFFSET))(this);
	}

	::System::Void set_Revenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_REVENUE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableChipIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLECHIPIDS_OFFSET))(this);
	}

	::System::Void set_AvailableChipIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLECHIPIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableOrderIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLEORDERIDS_OFFSET))(this);
	}

	::System::Void set_AvailableOrderIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLEORDERIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableMechIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_AVAILABLEMECHIDS_OFFSET))(this);
	}

	::System::Void set_AvailableMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_AVAILABLEMECHIDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_RunningExamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_RUNNINGEXAMID_OFFSET))(this);
	}

	::System::Void set_RunningExamID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_RUNNINGEXAMID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedReportIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_GET_FINISHEDREPORTIDS_OFFSET))(this);
	}

	::System::Void set_FinishedReportIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7CBCFAAA297CEA6A_SET_FINISHEDREPORTIDS_OFFSET))(this, a1);
	}
};
