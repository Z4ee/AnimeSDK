#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_3_GET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBCBC0A0)
#define CLASS_1_115297B50AB60A5D_3_GET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xBCBC080)
#define CLASS_1_115297B50AB60A5D_3_GET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xBCBC060)
#define CLASS_1_115297B50AB60A5D_3_SET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBCBC0B0)
#define CLASS_1_115297B50AB60A5D_3_SET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xBCBC090)
#define CLASS_1_115297B50AB60A5D_3_SET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xBCBC070)
#define CLASS_1_115297B50AB60A5D_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBCBC0C0)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_3_TypeDefinitionIndex = 80337;

class Class_1_115297B50AB60A5D_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _ActiveActionIDList_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _ActivePartIDList_k__BackingField; // 0x18
	::System::UInt32 _FinishedActionNum_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FinishedActionNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_GET_FINISHEDACTIONNUM_OFFSET))(this);
	}

	::System::Void set_FinishedActionNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_SET_FINISHEDACTIONNUM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ActivePartIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_GET_ACTIVEPARTIDLIST_OFFSET))(this);
	}

	::System::Void set_ActivePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_SET_ACTIVEPARTIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ActiveActionIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_GET_ACTIVEACTIONIDLIST_OFFSET))(this);
	}

	::System::Void set_ActiveActionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_3_SET_ACTIVEACTIONIDLIST_OFFSET))(this, a1);
	}
};
