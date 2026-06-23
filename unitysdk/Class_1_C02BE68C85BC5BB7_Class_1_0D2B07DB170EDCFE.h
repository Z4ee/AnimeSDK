#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BD296E0CEC5E2622.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C02BE68C85BC5BB7_CLASS_1_0D2B07DB170EDCFE_METHOD_1_269749E2336A5D9C_OFFSET UNITYSDK_OFFSET(0xFF71B70)
#define CLASS_1_C02BE68C85BC5BB7_CLASS_1_0D2B07DB170EDCFE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF71B60)

inline static constexpr unsigned int Class_1_C02BE68C85BC5BB7_Class_1_0D2B07DB170EDCFE_TypeDefinitionIndex = 67414;

class Class_1_C02BE68C85BC5BB7_Class_1_0D2B07DB170EDCFE : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_0; // 0x24
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_CLASS_1_0D2B07DB170EDCFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_269749E2336A5D9C(::Enum_3_BD296E0CEC5E2622 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BD296E0CEC5E2622))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_CLASS_1_0D2B07DB170EDCFE_METHOD_1_269749E2336A5D9C_OFFSET))(this, a1);
	}
};
