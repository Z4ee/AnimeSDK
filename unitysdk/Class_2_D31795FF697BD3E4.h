#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5452947417BCF16A.h"

class Class_1_115297B50AB60A5D_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D31795FF697BD3E4_GET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xB6B8FF0)
#define CLASS_2_D31795FF697BD3E4_GET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xB6B8FD0)
#define CLASS_2_D31795FF697BD3E4_GET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xB6B8FB0)
#define CLASS_2_D31795FF697BD3E4_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0xB6B9010)
#define CLASS_2_D31795FF697BD3E4_SET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xB6B9000)
#define CLASS_2_D31795FF697BD3E4_SET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xB6B8FE0)
#define CLASS_2_D31795FF697BD3E4_SET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xB6B8FC0)
#define CLASS_2_D31795FF697BD3E4__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B9130)

inline static constexpr unsigned int Class_2_D31795FF697BD3E4_TypeDefinitionIndex = 80340;

class Class_2_D31795FF697BD3E4 : public ::Class_1_5452947417BCF16A
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _ActivePartIDList_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _ActiveActionIDList_k__BackingField; // 0x28
	::System::UInt32 _FinishedActionNum_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FinishedActionNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_GET_FINISHEDACTIONNUM_OFFSET))(this);
	}

	::System::Void set_FinishedActionNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_SET_FINISHEDACTIONNUM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ActivePartIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_GET_ACTIVEPARTIDLIST_OFFSET))(this);
	}

	::System::Void set_ActivePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_SET_ACTIVEPARTIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ActiveActionIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_GET_ACTIVEACTIONIDLIST_OFFSET))(this);
	}

	::System::Void set_ActiveActionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_SET_ACTIVEACTIONIDLIST_OFFSET))(this, a1);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_115297B50AB60A5D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_115297B50AB60A5D_3*))((::PBYTE)hIl2Cpp + CLASS_2_D31795FF697BD3E4_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}
};
