#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1_METHOD_1_90D369AA14AFEE1C_OFFSET UNITYSDK_OFFSET(0x12C13CC0)
#define CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1_METHOD_1_C9DFD059F284E67E_OFFSET UNITYSDK_OFFSET(0x12C13DF0)
#define CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C13CB0)

inline static constexpr unsigned int Class_3_059B4E91653FDEE6_1_Class_1_06A7F3792E545C88_1_TypeDefinitionIndex = 56290;

class Class_3_059B4E91653FDEE6_1_Class_1_06A7F3792E545C88_1 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90D369AA14AFEE1C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1_METHOD_1_90D369AA14AFEE1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9DFD059F284E67E(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_059B4E91653FDEE6_1_CLASS_1_06A7F3792E545C88_1_METHOD_1_C9DFD059F284E67E_OFFSET))(this, a1);
	}
};
