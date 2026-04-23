#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD30340)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0xCD30E10)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_4128FCFCBB67ED45_OFFSET UNITYSDK_OFFSET(0xCD30160)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_646B7672F0B3276E_OFFSET UNITYSDK_OFFSET(0xCD30A30)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_91C02CDA0A26C8F0_OFFSET UNITYSDK_OFFSET(0xCD30720)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0xCD30170)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xCD30C80)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_FBCD9467EE9DD4AC_OFFSET UNITYSDK_OFFSET(0xCD30850)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_FEA4F92012A7E794_OFFSET UNITYSDK_OFFSET(0xCD30530)
#define CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET UNITYSDK_OFFSET(0xCD30280)
#define CLASS_1_29ADE9724E15BDC9___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET UNITYSDK_OFFSET(0xCD31020)
#define CLASS_1_29ADE9724E15BDC9___WAITFORGETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0xCD310D0)

inline static constexpr unsigned int Class_1_29ADE9724E15BDC9_TypeDefinitionIndex = 69447;

class Class_1_29ADE9724E15BDC9 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_2; // 0x20
	::RPG::Client::UIController* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Method_1_4128FCFCBB67ED45()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_4128FCFCBB67ED45_OFFSET))(this);
	}

	::System::Void Method_1_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FEA4F92012A7E794()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_FEA4F92012A7E794_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_91C02CDA0A26C8F0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_91C02CDA0A26C8F0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FBCD9467EE9DD4AC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_FBCD9467EE9DD4AC_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_646B7672F0B3276E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_646B7672F0B3276E_OFFSET))(this);
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
