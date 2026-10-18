#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1382163A006DA4F3_1;
class Class_1_1F5CEA999D7FA899;
class Class_1_44340B2393166A74_1;
class Class_1_6930B63361973DE0;
class Class_1_9E3A212024698688_1;
class Class_1_A141E85BF1D61FF6;
class Class_1_B7A5399E4956900D;
class Class_1_D2B75A4CD0E284E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7BC77CEFB451E276_GET_CUSTOMER_OFFSET UNITYSDK_OFFSET(0xC366570)
#define CLASS_1_7BC77CEFB451E276_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xC3664D0)
#define CLASS_1_7BC77CEFB451E276_GET_EARNINGITEMS_OFFSET UNITYSDK_OFFSET(0xC366530)
#define CLASS_1_7BC77CEFB451E276_GET_EARNINGS_OFFSET UNITYSDK_OFFSET(0xC3664F0)
#define CLASS_1_7BC77CEFB451E276_GET_FINISHORDERID_OFFSET UNITYSDK_OFFSET(0xC3665F0)
#define CLASS_1_7BC77CEFB451E276_GET_LEVELREWARD_OFFSET UNITYSDK_OFFSET(0xC3665B0)
#define CLASS_1_7BC77CEFB451E276_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0xC366510)
#define CLASS_1_7BC77CEFB451E276_GET_REVENUE_OFFSET UNITYSDK_OFFSET(0xC366550)
#define CLASS_1_7BC77CEFB451E276_GET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0xC3665D0)
#define CLASS_1_7BC77CEFB451E276_GET_TALENTEFFECT_OFFSET UNITYSDK_OFFSET(0xC366590)
#define CLASS_1_7BC77CEFB451E276_GET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0xC366610)
#define CLASS_1_7BC77CEFB451E276_METHOD_1_4137EB55CCBB39FA_OFFSET UNITYSDK_OFFSET(0xC366630)
#define CLASS_1_7BC77CEFB451E276_SET_CUSTOMER_OFFSET UNITYSDK_OFFSET(0xC366580)
#define CLASS_1_7BC77CEFB451E276_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xC3664E0)
#define CLASS_1_7BC77CEFB451E276_SET_EARNINGITEMS_OFFSET UNITYSDK_OFFSET(0xC366540)
#define CLASS_1_7BC77CEFB451E276_SET_EARNINGS_OFFSET UNITYSDK_OFFSET(0xC366500)
#define CLASS_1_7BC77CEFB451E276_SET_FINISHORDERID_OFFSET UNITYSDK_OFFSET(0xC366600)
#define CLASS_1_7BC77CEFB451E276_SET_LEVELREWARD_OFFSET UNITYSDK_OFFSET(0xC3665C0)
#define CLASS_1_7BC77CEFB451E276_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0xC366520)
#define CLASS_1_7BC77CEFB451E276_SET_REVENUE_OFFSET UNITYSDK_OFFSET(0xC366560)
#define CLASS_1_7BC77CEFB451E276_SET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0xC3665E0)
#define CLASS_1_7BC77CEFB451E276_SET_TALENTEFFECT_OFFSET UNITYSDK_OFFSET(0xC3665A0)
#define CLASS_1_7BC77CEFB451E276_SET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0xC366620)
#define CLASS_1_7BC77CEFB451E276__CTOR_OFFSET UNITYSDK_OFFSET(0xC366790)

inline static constexpr unsigned int Class_1_7BC77CEFB451E276_TypeDefinitionIndex = 80180;

class Class_1_7BC77CEFB451E276 : public ::System::Object
{
public:
	::Class_1_9E3A212024698688_1* _LevelReward_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMechIDs_k__BackingField; // 0x18
	::Class_1_B7A5399E4956900D* _Customer_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>* _EarningItems_k__BackingField; // 0x28
	::Class_1_1F5CEA999D7FA899* _Earnings_k__BackingField; // 0x30
	::Class_1_D2B75A4CD0E284E7* _Product_k__BackingField; // 0x38
	::Class_1_A141E85BF1D61FF6* _Revenue_k__BackingField; // 0x40
	::Class_1_1382163A006DA4F3_1* _TalentEffect_k__BackingField; // 0x48
	::Class_1_44340B2393166A74_1* _DesignLevel_k__BackingField; // 0x50
	::System::UInt32 _RunningExamID_k__BackingField; // 0x58
	::System::UInt32 _FinishOrderID_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_1_44340B2393166A74_1* a1, ::Class_1_1F5CEA999D7FA899* a2, ::Class_1_D2B75A4CD0E284E7* a3, ::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>* a4, ::Class_1_A141E85BF1D61FF6* a5, ::Class_1_B7A5399E4956900D* a6, ::Class_1_1382163A006DA4F3_1* a7, ::Class_1_9E3A212024698688_1* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44340B2393166A74_1*, ::Class_1_1F5CEA999D7FA899*, ::Class_1_D2B75A4CD0E284E7*, ::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>*, ::Class_1_A141E85BF1D61FF6*, ::Class_1_B7A5399E4956900D*, ::Class_1_1382163A006DA4F3_1*, ::Class_1_9E3A212024698688_1*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::Class_1_44340B2393166A74_1* get_DesignLevel()
	{
		return ((::Class_1_44340B2393166A74_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_DESIGNLEVEL_OFFSET))(this);
	}

	::System::Void set_DesignLevel(::Class_1_44340B2393166A74_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44340B2393166A74_1*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_DESIGNLEVEL_OFFSET))(this, a1);
	}

	::Class_1_1F5CEA999D7FA899* get_Earnings()
	{
		return ((::Class_1_1F5CEA999D7FA899*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_EARNINGS_OFFSET))(this);
	}

	::System::Void set_Earnings(::Class_1_1F5CEA999D7FA899* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F5CEA999D7FA899*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_EARNINGS_OFFSET))(this, a1);
	}

	::Class_1_D2B75A4CD0E284E7* get_Product()
	{
		return ((::Class_1_D2B75A4CD0E284E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_PRODUCT_OFFSET))(this);
	}

	::System::Void set_Product(::Class_1_D2B75A4CD0E284E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B75A4CD0E284E7*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_PRODUCT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>* get_EarningItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_EARNINGITEMS_OFFSET))(this);
	}

	::System::Void set_EarningItems(::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_EARNINGITEMS_OFFSET))(this, a1);
	}

	::Class_1_A141E85BF1D61FF6* get_Revenue()
	{
		return ((::Class_1_A141E85BF1D61FF6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_REVENUE_OFFSET))(this);
	}

	::System::Void set_Revenue(::Class_1_A141E85BF1D61FF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A141E85BF1D61FF6*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_REVENUE_OFFSET))(this, a1);
	}

	::Class_1_B7A5399E4956900D* get_Customer()
	{
		return ((::Class_1_B7A5399E4956900D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_CUSTOMER_OFFSET))(this);
	}

	::System::Void set_Customer(::Class_1_B7A5399E4956900D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7A5399E4956900D*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_CUSTOMER_OFFSET))(this, a1);
	}

	::Class_1_1382163A006DA4F3_1* get_TalentEffect()
	{
		return ((::Class_1_1382163A006DA4F3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_TALENTEFFECT_OFFSET))(this);
	}

	::System::Void set_TalentEffect(::Class_1_1382163A006DA4F3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1382163A006DA4F3_1*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_TALENTEFFECT_OFFSET))(this, a1);
	}

	::Class_1_9E3A212024698688_1* get_LevelReward()
	{
		return ((::Class_1_9E3A212024698688_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_LEVELREWARD_OFFSET))(this);
	}

	::System::Void set_LevelReward(::Class_1_9E3A212024698688_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E3A212024698688_1*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_LEVELREWARD_OFFSET))(this, a1);
	}

	::System::UInt32 get_RunningExamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_RUNNINGEXAMID_OFFSET))(this);
	}

	::System::Void set_RunningExamID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_RUNNINGEXAMID_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinishOrderID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_FINISHORDERID_OFFSET))(this);
	}

	::System::Void set_FinishOrderID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_FINISHORDERID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockMechIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_GET_UNLOCKMECHIDS_OFFSET))(this);
	}

	::System::Void set_UnlockMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_SET_UNLOCKMECHIDS_OFFSET))(this, a1);
	}

	static ::Class_1_7BC77CEFB451E276* Method_1_4137EB55CCBB39FA(::Class_1_44340B2393166A74_1* a1, ::Class_1_1F5CEA999D7FA899* a2, ::Class_1_D2B75A4CD0E284E7* a3, ::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>* a4, ::Class_1_A141E85BF1D61FF6* a5, ::Class_1_B7A5399E4956900D* a6, ::Class_1_1382163A006DA4F3_1* a7, ::Class_1_9E3A212024698688_1* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11)
	{
		return ((::Class_1_7BC77CEFB451E276*(*)(::Class_1_44340B2393166A74_1*, ::Class_1_1F5CEA999D7FA899*, ::Class_1_D2B75A4CD0E284E7*, ::System::Collections::Generic::List_1<::Class_1_6930B63361973DE0*>*, ::Class_1_A141E85BF1D61FF6*, ::Class_1_B7A5399E4956900D*, ::Class_1_1382163A006DA4F3_1*, ::Class_1_9E3A212024698688_1*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7BC77CEFB451E276_METHOD_1_4137EB55CCBB39FA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};
