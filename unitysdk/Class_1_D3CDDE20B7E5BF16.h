#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E7D29F43FB80184D;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D3CDDE20B7E5BF16_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1576E8E0)
#define CLASS_1_D3CDDE20B7E5BF16_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1576E940)
#define CLASS_1_D3CDDE20B7E5BF16_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1576E870)
#define CLASS_1_D3CDDE20B7E5BF16_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1576E980)
#define CLASS_1_D3CDDE20B7E5BF16__CTOR_OFFSET UNITYSDK_OFFSET(0x1576E860)

inline static constexpr unsigned int Class_1_D3CDDE20B7E5BF16_TypeDefinitionIndex = 79094;

class Class_1_D3CDDE20B7E5BF16 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_E7D29F43FB80184D*>* PEIHJAEIGHK; // 0x10

	::System::Void _ctor(::System::Action_1<::Class_3_E7D29F43FB80184D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_E7D29F43FB80184D*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3CDDE20B7E5BF16__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_D3CDDE20B7E5BF16_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3CDDE20B7E5BF16_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CDDE20B7E5BF16_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CDDE20B7E5BF16_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
