#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BC2F8C4174D2127C;

#define CLASS_1_451D2644CC36530F_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F60F10)
#define CLASS_1_451D2644CC36530F_METHOD_1_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0x17F61000)
#define CLASS_1_451D2644CC36530F_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F60F90)
#define CLASS_1_451D2644CC36530F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F61200)
#define CLASS_1_451D2644CC36530F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F61240)

inline static constexpr unsigned int Class_1_451D2644CC36530F_TypeDefinitionIndex = 39115;

class Class_1_451D2644CC36530F : public ::System::Object
{
public:
	::Class_1_BC2F8C4174D2127C* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D2644CC36530F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D2644CC36530F_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D2644CC36530F_ONALLOC_OFFSET))(this);
	}

	::System::Void Method_1_19D21DC63CFC45D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_451D2644CC36530F_METHOD_1_19D21DC63CFC45D5_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D2644CC36530F_ONRECYCLE_OFFSET))(this);
	}
};
