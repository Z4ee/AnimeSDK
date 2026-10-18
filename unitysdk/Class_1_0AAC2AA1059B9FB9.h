#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AAC2AA1059B9FB9___c__DisplayClass10_0.h"
#include "unitysdk/Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1492;
class Class_0_16E4307DCC419505_1518;
class Class_1_0AAC2AA1059B9FB9_Class_1_953CABE4CF1A6C01;
class Class_1_0AAC2AA1059B9FB9_Class_1_F289BAD7DB338B63;
class Class_1_134F4A605D115C87;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0AAC2AA1059B9FB9_METHOD_1_321B27A086FCFB7B_OFFSET UNITYSDK_OFFSET(0x12CF35C0)
#define CLASS_1_0AAC2AA1059B9FB9_METHOD_1_664BF37AE86A8EB2_OFFSET UNITYSDK_OFFSET(0x12CF2710)
#define CLASS_1_0AAC2AA1059B9FB9_METHOD_1_AC6B8E73BD3BD222_OFFSET UNITYSDK_OFFSET(0x12CF4C70)
#define CLASS_1_0AAC2AA1059B9FB9__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF2680)
#define CLASS_1_0AAC2AA1059B9FB9__TICK_G__TICKONGOING_10_0_OFFSET UNITYSDK_OFFSET(0x12CF4D00)
#define CLASS_1_0AAC2AA1059B9FB9__TICK_G__TICKPENDING_10_1_OFFSET UNITYSDK_OFFSET(0x12CF4E00)
#define CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__DOREMOVEONGOINGUNITS_9_2_OFFSET UNITYSDK_OFFSET(0x12CF4A10)
#define CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__DOREMOVEPENDINGUNITS_9_3_OFFSET UNITYSDK_OFFSET(0x12CF4B40)
#define CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__PREPAREREMOVEONGOINGUNITS_9_1_OFFSET UNITYSDK_OFFSET(0x12CF4850)
#define CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__PREPAREREMOVEPENDINGUNITS_9_0_OFFSET UNITYSDK_OFFSET(0x12CF4930)

inline static constexpr unsigned int Class_1_0AAC2AA1059B9FB9_TypeDefinitionIndex = 79786;

class Class_1_0AAC2AA1059B9FB9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1492* GEFAIMFFEHM; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0AAC2AA1059B9FB9_Class_1_953CABE4CF1A6C01*>* KFNOFJHBOOO; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0AAC2AA1059B9FB9_Class_1_F289BAD7DB338B63*>* EHCPLMGGBLI; // 0x20
	::Class_0_16E4307DCC419505_1518* MKAMMPCICFI; // 0x28
	::System::Single BPAIDCADMDO; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_1492* a1, ::Class_0_16E4307DCC419505_1518* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1492*, ::Class_0_16E4307DCC419505_1518*))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_664BF37AE86A8EB2(::Class_1_134F4A605D115C87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_134F4A605D115C87*))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9_METHOD_1_664BF37AE86A8EB2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_321B27A086FCFB7B(::Class_1_134F4A605D115C87* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_134F4A605D115C87*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9_METHOD_1_321B27A086FCFB7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC6B8E73BD3BD222(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9_METHOD_1_AC6B8E73BD3BD222_OFFSET))(this, a1);
	}

	::System::Void _TryCancel_g__PrepareRemovePendingUnits_9_0(::Class_1_0AAC2AA1059B9FB9_Class_1_953CABE4CF1A6C01* a1, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9_Class_1_953CABE4CF1A6C01*, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__PREPAREREMOVEPENDINGUNITS_9_0_OFFSET))(this, a1, a2);
	}

	::System::Void _TryCancel_g__PrepareRemoveOngoingUnits_9_1(::Class_1_0AAC2AA1059B9FB9_Class_1_F289BAD7DB338B63* a1, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9_Class_1_F289BAD7DB338B63*, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__PREPAREREMOVEONGOINGUNITS_9_1_OFFSET))(this, a1, a2);
	}

	::System::Void _TryCancel_g__DoRemoveOngoingUnits_9_2(::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__DOREMOVEONGOINGUNITS_9_2_OFFSET))(this, a1);
	}

	::System::Void _TryCancel_g__DoRemovePendingUnits_9_3(::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TRYCANCEL_G__DOREMOVEPENDINGUNITS_9_3_OFFSET))(this, a1);
	}

	::System::Void _Tick_g__TickOngoing_10_0(::Class_1_0AAC2AA1059B9FB9___c__DisplayClass10_0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TICK_G__TICKONGOING_10_0_OFFSET))(this, a1);
	}

	::System::Void _Tick_g__TickPending_10_1(::Class_1_0AAC2AA1059B9FB9___c__DisplayClass10_0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAC2AA1059B9FB9___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + CLASS_1_0AAC2AA1059B9FB9__TICK_G__TICKPENDING_10_1_OFFSET))(this, a1);
	}
};
