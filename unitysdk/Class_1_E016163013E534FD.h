#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_E016163013E534FD_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB89A030)
#define CLASS_1_E016163013E534FD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB899CA0)
#define CLASS_1_E016163013E534FD_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xB899BF0)
#define CLASS_1_E016163013E534FD_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB899CE0)
#define CLASS_1_E016163013E534FD__CTOR_OFFSET UNITYSDK_OFFSET(0xB899A20)

inline static constexpr unsigned int Class_1_E016163013E534FD_TypeDefinitionIndex = 62525;

class Class_1_E016163013E534FD : public ::System::Object
{
public:
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x10
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_3; // 0x18
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x20
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_2; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_E016163013E534FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E016163013E534FD_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E016163013E534FD_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E016163013E534FD_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E016163013E534FD_EXECUTE_OFFSET))(this);
	}
};
