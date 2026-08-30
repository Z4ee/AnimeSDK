#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29ADE9724E15BDC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179CE0B0)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_2036FDEBCB7EE0EA_OFFSET UNITYSDK_OFFSET(0x179CE2C0)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0x179CEC20)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_646B7672F0B3276E_OFFSET UNITYSDK_OFFSET(0x179CE840)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0x179CE5D0)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x179CDF30)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_D313088D31B3DE9D_OFFSET UNITYSDK_OFFSET(0x179CE470)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0x179CEA90)
#define CLASS_1_29ADE9724E15BDC9_METHOD_1_E14A86D318C2F5E1_OFFSET UNITYSDK_OFFSET(0x179CDEF0)
#define CLASS_1_29ADE9724E15BDC9__CTOR_OFFSET UNITYSDK_OFFSET(0x179CDFD0)
#define CLASS_1_29ADE9724E15BDC9___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET UNITYSDK_OFFSET(0x179CEE30)
#define CLASS_1_29ADE9724E15BDC9___WAITFORGETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x179CEEE0)

inline static constexpr unsigned int Class_1_29ADE9724E15BDC9_TypeDefinitionIndex = 75088;

class Class_1_29ADE9724E15BDC9 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* OCGNCLOOMEF; // 0x10
	::RPG::Client::UIController* JONJFNGDLKI; // 0x18
	::RPG::Client::Promises::Promise* OMDHLKPAGPI; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* MIMJHMFJNFE; // 0x28

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

	::RPG::Client::Promises::IPromise* Method_1_D313088D31B3DE9D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_D313088D31B3DE9D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_AB7C33B8F73A125A()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29ADE9724E15BDC9_METHOD_1_AB7C33B8F73A125A_OFFSET))(this);
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
