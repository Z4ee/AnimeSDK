#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_2046D7DFF8D8DDC7;
class Class_1_455008579EB95638_13;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_63854F3C5192B868_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5D1C0)
#define CLASS_2_63854F3C5192B868_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5CF20)
#define CLASS_2_63854F3C5192B868_ADD_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5CCC0)
#define CLASS_2_63854F3C5192B868_METHOD_2_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0xAF5D020)
#define CLASS_2_63854F3C5192B868_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0xAF5CD80)
#define CLASS_2_63854F3C5192B868_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAF5CB80)
#define CLASS_2_63854F3C5192B868_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5D220)
#define CLASS_2_63854F3C5192B868_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5CFA0)
#define CLASS_2_63854F3C5192B868_REMOVE_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xAF5CD20)
#define CLASS_2_63854F3C5192B868__CTOR_OFFSET UNITYSDK_OFFSET(0xAF5CB70)
#define CLASS_2_63854F3C5192B868__REQUESTGETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0xAF5D280)

inline static constexpr unsigned int Class_2_63854F3C5192B868_TypeDefinitionIndex = 57398;

class Class_2_63854F3C5192B868 : public ::Class_1_5E4ED920015DC82D
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x2664; // 0x0
	// static const ::System::UInt16 Field_2_1 = 0x2666; // 0x0
	// static const ::System::UInt16 Field_2_2 = 0x265D; // 0x0
	::Class_1_2046D7DFF8D8DDC7* Field_2_3; // 0x20
	::System::Action_1<::System::Int32>* OnDrawFinished; // 0x28
	::System::Action* OnGetDataFinished; // 0x30
	::System::Action_2<::System::Int32, ::Proto::ItemList*>* OnClaimRewardFinished; // 0x38

	::System::Void _ctor(::Class_1_2046D7DFF8D8DDC7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2046D7DFF8D8DDC7*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void add_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_ADD_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_REMOVE_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void add_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_METHOD_2_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}

	::System::Void add_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void _RequestGetData_b__3_0(::Class_1_455008579EB95638_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_13*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868__REQUESTGETDATA_B__3_0_OFFSET))(this, a1);
	}
};
