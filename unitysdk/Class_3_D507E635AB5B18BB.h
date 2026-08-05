#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D507E635AB5B18BB_METHOD_3_0B4FD863809427D9_1_OFFSET UNITYSDK_OFFSET(0x1156F890)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_0B4FD863809427D9_OFFSET UNITYSDK_OFFSET(0x1156F880)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1156FE80)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_9219C2A9E5905AEF_1_OFFSET UNITYSDK_OFFSET(0x1156FBB0)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x1156F8C0)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1156FB90)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1156F8B0)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1156FBA0)
#define CLASS_3_D507E635AB5B18BB_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1156F8A0)
#define CLASS_3_D507E635AB5B18BB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1156F7F0)
#define CLASS_3_D507E635AB5B18BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1156F840)

inline static constexpr unsigned int Class_3_D507E635AB5B18BB_TypeDefinitionIndex = 47267;

class Class_3_D507E635AB5B18BB : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_D507E635AB5B18BB*>
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_3_0; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_3_1; // 0x28
	::System::Int32 Field_3_3; // 0x30
	::System::Int32 Field_3_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_ONRECYCLE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_3_0B4FD863809427D9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_0B4FD863809427D9_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_3_0B4FD863809427D9_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_0B4FD863809427D9_1_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_9219C2A9E5905AEF_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_9219C2A9E5905AEF_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D507E635AB5B18BB_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
