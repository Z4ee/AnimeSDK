#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53F09AE147361E96;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_3B6867F43581C2F2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A74CCC0)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1A74CAA0)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x1A74CC70)
#define CLASS_1_3B6867F43581C2F2_METHOD_1_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x1A74CA50)
#define CLASS_1_3B6867F43581C2F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74C9F0)

inline static constexpr unsigned int Class_1_3B6867F43581C2F2_TypeDefinitionIndex = 80555;

class Class_1_3B6867F43581C2F2 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EPHKMPOGBBL; // 0x10
	::System::Func_1<::System::Boolean>* GBDHHOILHNM; // 0x18
	::Class_1_53F09AE147361E96* IJLEOHJJHCM; // 0x20
	::System::Boolean NFOCONIIKIF; // 0x28
	::System::Boolean DHPHCCCHLJF; // 0x29

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6867F43581C2F2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
