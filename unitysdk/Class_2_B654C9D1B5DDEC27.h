#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_7FF19F6206AF6DD7_17;
class Class_1_DB550A66A78E02FD;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B654C9D1B5DDEC27_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A38D0)
#define CLASS_2_B654C9D1B5DDEC27_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A3670)
#define CLASS_2_B654C9D1B5DDEC27_ADD_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A3410)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0xC2A3730)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0xC2A34D0)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC2A32D0)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A3930)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A36D0)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xC2A3470)
#define CLASS_2_B654C9D1B5DDEC27__CTOR_OFFSET UNITYSDK_OFFSET(0xC2A32C0)
#define CLASS_2_B654C9D1B5DDEC27__REQUESTGETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0xC2A3990)

inline static constexpr unsigned int Class_2_B654C9D1B5DDEC27_TypeDefinitionIndex = 61397;

class Class_2_B654C9D1B5DDEC27 : public ::Class_1_5E4ED920015DC82D
{
public:
	// static const ::System::UInt16 AGGMHCAANML = 0x265F; // 0x0
	// static const ::System::UInt16 PKJNMNHJIEF = 0x2665; // 0x0
	// static const ::System::UInt16 DMLFEJBOAOD = 0x2663; // 0x0
	::System::Action* OnGetDataFinished; // 0x20
	::System::Action_1<::System::Int32>* OnDrawFinished; // 0x28
	::System::Action_2<::System::Int32, ::Proto::ItemList*>* OnClaimRewardFinished; // 0x30
	::Class_1_DB550A66A78E02FD* GKBFBLOIDAL; // 0x38

	::System::Void _ctor(::Class_1_DB550A66A78E02FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB550A66A78E02FD*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void add_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void add_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}

	::System::Void add_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void _RequestGetData_b__3_0(::Class_1_7FF19F6206AF6DD7_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_17*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27__REQUESTGETDATA_B__3_0_OFFSET))(this, a1);
	}
};
