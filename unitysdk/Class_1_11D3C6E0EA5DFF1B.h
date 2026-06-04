#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11D3C6E0EA5DFF1B_CLEANUP_OFFSET UNITYSDK_OFFSET(0x18BFE6B0)
#define CLASS_1_11D3C6E0EA5DFF1B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18BFEEE0)
#define CLASS_1_11D3C6E0EA5DFF1B__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFE6A0)

inline static constexpr unsigned int Class_1_11D3C6E0EA5DFF1B_TypeDefinitionIndex = 38806;

class Class_1_11D3C6E0EA5DFF1B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* Field_1_0; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B_CLEANUP_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B_INITIALIZE_OFFSET))(this);
	}
};
