#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ECC250)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_0E462AF6619C7677_OFFSET UNITYSDK_OFFSET(0x16ECC770)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_2036FDEBCB7EE0EA_OFFSET UNITYSDK_OFFSET(0x16ECC460)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0x16ECCD80)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_72B2F9C2114F6F4B_OFFSET UNITYSDK_OFFSET(0x16ECC610)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0x16ECC970)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x16ECC0D0)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0x16ECCBF0)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_E14A86D318C2F5E1_OFFSET UNITYSDK_OFFSET(0x16ECC090)
#define CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECC170)
#define CLASS_1_29ADE9724E15BDC9___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET UNITYSDK_OFFSET(0x16ECCF90)
#define CLASS_1_29ADE9724E15BDC9___WAITFORGETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x16ECD040)

inline static constexpr unsigned int Class_1_29ADE9724E15BDC9_TypeDefinitionIndex = 71782;

class Class_1_29ADE9724E15BDC9 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_2; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Method_1_E14A86D318C2F5E1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_E14A86D318C2F5E1_OFFSET))(this);
	}

	::System::Void Method_1_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_D20F759FC2EC43FB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_2036FDEBCB7EE0EA()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_2036FDEBCB7EE0EA_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_72B2F9C2114F6F4B()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_72B2F9C2114F6F4B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0E462AF6619C7677()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_0E462AF6619C7677_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_AB7C33B8F73A125A()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_AB7C33B8F73A125A_OFFSET))(this);
	}

	::System::Void Method_1_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_285337D3C1CF4702(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_285337D3C1CF4702_OFFSET))(this, a1, a2);
	}

	::System::Void __SendCollectIncomeReq_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET))(this);
	}

	::System::Void __WaitForGetData_b__12_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9___WAITFORGETDATA_B__12_0_OFFSET))(this);
	}
};
