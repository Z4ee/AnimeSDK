#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_276321B6B122C69C_2.h"

class Class_0_16E4307DCC419505_706;
namespace Proto { class ItemCost; }
namespace RPG::Client { class AvatarGrowUpBeforeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C67A671ED92753E0_METHOD_2_0C0426DA91A9E588_1_OFFSET UNITYSDK_OFFSET(0xA433320)
#define CLASS_2_C67A671ED92753E0_METHOD_2_0C0426DA91A9E588_OFFSET UNITYSDK_OFFSET(0xA432EC0)
#define CLASS_2_C67A671ED92753E0_METHOD_2_1BFCF1B498508B80_OFFSET UNITYSDK_OFFSET(0xA432CE0)
#define CLASS_2_C67A671ED92753E0_METHOD_2_36277CD2A28E6AAA_OFFSET UNITYSDK_OFFSET(0xA432F50)
#define CLASS_2_C67A671ED92753E0_METHOD_2_B57C05A537EBD174_OFFSET UNITYSDK_OFFSET(0xA432920)
#define CLASS_2_C67A671ED92753E0_METHOD_2_C931F2E4FB0CC222_OFFSET UNITYSDK_OFFSET(0xA433720)
#define CLASS_2_C67A671ED92753E0_METHOD_2_E9E1CA946F96178C_1_OFFSET UNITYSDK_OFFSET(0xA4333B0)
#define CLASS_2_C67A671ED92753E0_METHOD_2_E9E1CA946F96178C_OFFSET UNITYSDK_OFFSET(0xA432FB0)
#define CLASS_2_C67A671ED92753E0_START_OFFSET UNITYSDK_OFFSET(0xA432890)
#define CLASS_2_C67A671ED92753E0_STOP_OFFSET UNITYSDK_OFFSET(0xA4328D0)
#define CLASS_2_C67A671ED92753E0__CTOR_OFFSET UNITYSDK_OFFSET(0xA432770)

inline static constexpr unsigned int Class_2_C67A671ED92753E0_TypeDefinitionIndex = 58714;

class Class_2_C67A671ED92753E0 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* Field_2_1; // 0x28
	::Class_0_16E4307DCC419505_706* Field_2_2; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_706* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_706*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_STOP_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_B57C05A537EBD174(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_B57C05A537EBD174_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_2_0C0426DA91A9E588(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_0C0426DA91A9E588_OFFSET))(this, a1);
	}

	::System::Void Method_2_36277CD2A28E6AAA(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_36277CD2A28E6AAA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_E9E1CA946F96178C(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_E9E1CA946F96178C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_2_0C0426DA91A9E588_1(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_0C0426DA91A9E588_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_E9E1CA946F96178C_1(::Struct_2_276321B6B122C69C_2& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_276321B6B122C69C_2&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_E9E1CA946F96178C_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_C931F2E4FB0CC222(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_C931F2E4FB0CC222_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_2_1BFCF1B498508B80(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* a2)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C67A671ED92753E0_METHOD_2_1BFCF1B498508B80_OFFSET))(this, a1, a2);
	}
};
