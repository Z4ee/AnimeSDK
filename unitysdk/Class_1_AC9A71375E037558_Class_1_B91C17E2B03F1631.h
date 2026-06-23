#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC9A71375E037558;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631_METHOD_1_458F6A2A308822BF_OFFSET UNITYSDK_OFFSET(0x130EC410)
#define CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x130EC490)
#define CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631__CTOR_OFFSET UNITYSDK_OFFSET(0x130EC400)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_B91C17E2B03F1631_TypeDefinitionIndex = 50506;

class Class_1_AC9A71375E037558_Class_1_B91C17E2B03F1631 : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::Class_1_AC9A71375E037558* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_458F6A2A308822BF(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631_METHOD_1_458F6A2A308822BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B91C17E2B03F1631_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
