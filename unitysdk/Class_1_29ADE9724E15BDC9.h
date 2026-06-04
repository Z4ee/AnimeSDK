#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136F4240)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_0E462AF6619C7677_OFFSET UNITYSDK_OFFSET(0x136F4760)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_2036FDEBCB7EE0EA_OFFSET UNITYSDK_OFFSET(0x136F4450)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0x136F4D70)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_4128FCFCBB67ED45_OFFSET UNITYSDK_OFFSET(0x136F4040)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_72B2F9C2114F6F4B_OFFSET UNITYSDK_OFFSET(0x136F4600)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0x136F4960)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x136F4050)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0x136F4BE0)
#define CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET UNITYSDK_OFFSET(0x136F4160)
#define CLASS_1_29ADE9724E15BDC9___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET UNITYSDK_OFFSET(0x136F4F80)
#define CLASS_1_29ADE9724E15BDC9___WAITFORGETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x136F5030)

inline static constexpr unsigned int Class_1_29ADE9724E15BDC9_TypeDefinitionIndex = 70259;

class Class_1_29ADE9724E15BDC9 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::RPG::Client::UIController* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Method_1_4128FCFCBB67ED45()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_4128FCFCBB67ED45_OFFSET))(this);
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
