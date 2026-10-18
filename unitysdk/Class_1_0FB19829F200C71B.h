#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_3CFD07DFD0180CDE;
class Class_1_45CA56C59C8BBBC0;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FB19829F200C71B_ADD_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x15833A10)
#define CLASS_1_0FB19829F200C71B_ADD_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x15833D10)
#define CLASS_1_0FB19829F200C71B_ADD_ONMOVED_OFFSET UNITYSDK_OFFSET(0x15833E10)
#define CLASS_1_0FB19829F200C71B_ADD_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15834010)
#define CLASS_1_0FB19829F200C71B_ADD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x15833B10)
#define CLASS_1_0FB19829F200C71B_ADD_ONROTATED_OFFSET UNITYSDK_OFFSET(0x15833F10)
#define CLASS_1_0FB19829F200C71B_ADD_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x15833C10)
#define CLASS_1_0FB19829F200C71B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15834AC0)
#define CLASS_1_0FB19829F200C71B_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x15835310)
#define CLASS_1_0FB19829F200C71B_METHOD_1_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0x15835020)
#define CLASS_1_0FB19829F200C71B_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x158351A0)
#define CLASS_1_0FB19829F200C71B_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x15835BF0)
#define CLASS_1_0FB19829F200C71B_METHOD_1_54A54EEE47A93711_OFFSET UNITYSDK_OFFSET(0x15835590)
#define CLASS_1_0FB19829F200C71B_METHOD_1_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0x15835430)
#define CLASS_1_0FB19829F200C71B_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0x158339D0)
#define CLASS_1_0FB19829F200C71B_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x15834520)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x15833A90)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x15833D90)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONMOVED_OFFSET UNITYSDK_OFFSET(0x15833E90)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15834070)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x15833B90)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONROTATED_OFFSET UNITYSDK_OFFSET(0x15833F90)
#define CLASS_1_0FB19829F200C71B_REMOVE_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x15833C90)
#define CLASS_1_0FB19829F200C71B__CTOR_OFFSET UNITYSDK_OFFSET(0x158340D0)

inline static constexpr unsigned int Class_1_0FB19829F200C71B_TypeDefinitionIndex = 79475;

class Class_1_0FB19829F200C71B : public ::System::Object
{
public:
	::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* OnRotated; // 0x10
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x18
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*>* OnManyRemoved; // 0x20
	::System::Collections::Generic::List_1<::Class_1_3CFD07DFD0180CDE*>* CPDFNBLEPPM; // 0x28
	::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* OnAppended; // 0x30
	::System::Action* OnOnlyOrderingChanged; // 0x38
	::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* OnSingleRemoved; // 0x40
	::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* OnMoved; // 0x48
	::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* OnRemoved; // 0x50

	::System::Void _ctor(::Class_1_45CA56C59C8BBBC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CA56C59C8BBBC0*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::System::Void add_OnAppended(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONAPPENDED_OFFSET))(this, a1);
	}

	::System::Void remove_OnAppended(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONAPPENDED_OFFSET))(this, a1);
	}

	::System::Void add_OnRemoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONREMOVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRemoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONREMOVED_OFFSET))(this, a1);
	}

	::System::Void add_OnSingleRemoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONSINGLEREMOVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnSingleRemoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONSINGLEREMOVED_OFFSET))(this, a1);
	}

	::System::Void add_OnManyRemoved(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONMANYREMOVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnManyRemoved(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONMANYREMOVED_OFFSET))(this, a1);
	}

	::System::Void add_OnMoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONMOVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMoved(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONMOVED_OFFSET))(this, a1);
	}

	::System::Void add_OnRotated(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONROTATED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRotated(::System::Action_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONROTATED_OFFSET))(this, a1);
	}

	::System::Void add_OnOnlyOrderingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_ADD_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnOnlyOrderingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_REMOVE_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1F49294A70542425(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBFC04DB341E38F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_7FBFC04DB341E38F_OFFSET))(this, a1);
	}

	::System::Void Method_1_54A54EEE47A93711(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_54A54EEE47A93711_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B_METHOD_1_489E0B827662C211_OFFSET))(this);
	}
};
