#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_12C90D9B18685835_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11556FF0)
#define CLASS_1_12C90D9B18685835__CTOR_OFFSET UNITYSDK_OFFSET(0x11556F40)
#define CLASS_1_12C90D9B18685835___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x11557030)

inline static constexpr unsigned int Class_1_12C90D9B18685835_TypeDefinitionIndex = 47926;

class Class_1_12C90D9B18685835 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::Promises::IPromise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + CLASS_1_12C90D9B18685835__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12C90D9B18685835_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12C90D9B18685835___CTOR_B__0_0_OFFSET))(this);
	}
};
