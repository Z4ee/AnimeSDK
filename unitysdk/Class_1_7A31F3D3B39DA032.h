#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7A31F3D3B39DA032_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18BF2C20)
#define CLASS_1_7A31F3D3B39DA032_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18BF24B0)
#define CLASS_1_7A31F3D3B39DA032_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18BF5C60)
#define CLASS_1_7A31F3D3B39DA032__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF2450)

inline static constexpr unsigned int Class_1_7A31F3D3B39DA032_TypeDefinitionIndex = 39421;

class Class_1_7A31F3D3B39DA032 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_TEARDOWN_OFFSET))(this);
	}
};
