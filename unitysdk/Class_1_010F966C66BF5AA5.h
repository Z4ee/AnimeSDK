#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D11CE62B2BEC69E;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_010F966C66BF5AA5_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE652260)
#define CLASS_1_010F966C66BF5AA5_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE651ED0)
#define CLASS_1_010F966C66BF5AA5_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xE651E20)
#define CLASS_1_010F966C66BF5AA5_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xE651F10)
#define CLASS_1_010F966C66BF5AA5__CTOR_OFFSET UNITYSDK_OFFSET(0xE651B00)

inline static constexpr unsigned int Class_1_010F966C66BF5AA5_TypeDefinitionIndex = 70535;

class Class_1_010F966C66BF5AA5 : public ::System::Object
{
public:
	::Class_1_4D11CE62B2BEC69E* Field_1_0; // 0x10
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_5; // 0x20
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_4; // 0x30
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_3; // 0x38

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_010F966C66BF5AA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010F966C66BF5AA5_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010F966C66BF5AA5_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010F966C66BF5AA5_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010F966C66BF5AA5_EXECUTE_OFFSET))(this);
	}
};
