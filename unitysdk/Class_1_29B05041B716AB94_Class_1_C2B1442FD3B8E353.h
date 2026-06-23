#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x160BB760)
#define CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353_METHOD_1_842F6F8D139C672A_OFFSET UNITYSDK_OFFSET(0x160BB700)
#define CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353__CTOR_OFFSET UNITYSDK_OFFSET(0x160BB6F0)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_C2B1442FD3B8E353_TypeDefinitionIndex = 50430;

class Class_1_29B05041B716AB94_Class_1_C2B1442FD3B8E353 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_842F6F8D139C672A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353_METHOD_1_842F6F8D139C672A_OFFSET))(this, a1);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_C2B1442FD3B8E353_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
