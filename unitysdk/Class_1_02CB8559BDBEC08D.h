#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_53;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02CB8559BDBEC08D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x886D160)
#define CLASS_1_02CB8559BDBEC08D_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x886D1E0)
#define CLASS_1_02CB8559BDBEC08D_METHOD_1_265C23729DBE0574_OFFSET UNITYSDK_OFFSET(0x886D3D0)
#define CLASS_1_02CB8559BDBEC08D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x886D380)
#define CLASS_1_02CB8559BDBEC08D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x886D790)
#define CLASS_1_02CB8559BDBEC08D_METHOD_1_B384F154BEB275B0_OFFSET UNITYSDK_OFFSET(0x886D060)
#define CLASS_1_02CB8559BDBEC08D__CTOR_OFFSET UNITYSDK_OFFSET(0x886D050)

inline static constexpr unsigned int Class_1_02CB8559BDBEC08D_TypeDefinitionIndex = 54913;

class Class_1_02CB8559BDBEC08D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_53*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D__CTOR_OFFSET))(this);
	}

	static ::Class_1_02CB8559BDBEC08D* Method_1_B384F154BEB275B0(::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_53*>* a1)
	{
		return ((::Class_1_02CB8559BDBEC08D*(*)(::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_53*>*))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_METHOD_1_B384F154BEB275B0_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_1_265C23729DBE0574(::Class_1_99BD961747420BEB_53* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::Class_1_99BD961747420BEB_53*))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_METHOD_1_265C23729DBE0574_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
