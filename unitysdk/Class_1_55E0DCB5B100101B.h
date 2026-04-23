#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_628;
namespace RPG::Client { class BaseGameFlowContext; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_55E0DCB5B100101B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12549360)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_37CC2D5DE8C3CFEA_OFFSET UNITYSDK_OFFSET(0x125494F0)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_42FB4445DD10A787_OFFSET UNITYSDK_OFFSET(0x12549460)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_43558873524478EC_OFFSET UNITYSDK_OFFSET(0x125493C0)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_628D358C65300F5A_OFFSET UNITYSDK_OFFSET(0x125497B0)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_7081B5D5B7EE01C9_OFFSET UNITYSDK_OFFSET(0x125493D0)
#define CLASS_1_55E0DCB5B100101B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12549A70)
#define CLASS_1_55E0DCB5B100101B__CTOR_OFFSET UNITYSDK_OFFSET(0x12549AE0)

inline static constexpr unsigned int Class_1_55E0DCB5B100101B_TypeDefinitionIndex = 59186;

class Class_1_55E0DCB5B100101B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseGameFlowContext*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>* Method_1_43558873524478EC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_43558873524478EC_OFFSET))(this);
	}

	::System::Void Method_1_7081B5D5B7EE01C9(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_7081B5D5B7EE01C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_42FB4445DD10A787(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_42FB4445DD10A787_OFFSET))(this, a1);
	}

	::System::Void Method_1_37CC2D5DE8C3CFEA(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_37CC2D5DE8C3CFEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_628D358C65300F5A(::Class_0_16E4307DCC419505_628* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_628*))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_628D358C65300F5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E0DCB5B100101B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
