#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53F09AE147361E96;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_14648D14C0C46618_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15C795C0)
#define CLASS_1_14648D14C0C46618_METHOD_1_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x15C79410)
#define CLASS_1_14648D14C0C46618__CTOR_OFFSET UNITYSDK_OFFSET(0x15C793C0)

inline static constexpr unsigned int Class_1_14648D14C0C46618_TypeDefinitionIndex = 81911;

class Class_1_14648D14C0C46618 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EPHKMPOGBBL; // 0x10
	::Class_1_53F09AE147361E96* IJLEOHJJHCM; // 0x18
	::System::Boolean NFOCONIIKIF; // 0x20

	::System::Void _ctor(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_14648D14C0C46618__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14648D14C0C46618_METHOD_1_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14648D14C0C46618_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
