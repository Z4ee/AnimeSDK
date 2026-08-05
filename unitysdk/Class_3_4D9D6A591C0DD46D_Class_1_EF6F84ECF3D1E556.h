#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_4D9D6A591C0DD46D;

#define CLASS_3_4D9D6A591C0DD46D_CLASS_1_EF6F84ECF3D1E556_METHOD_1_3C6DC7A7226EA026_OFFSET UNITYSDK_OFFSET(0x18DA72C0)
#define CLASS_3_4D9D6A591C0DD46D_CLASS_1_EF6F84ECF3D1E556__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA72B0)

inline static constexpr unsigned int Class_3_4D9D6A591C0DD46D_Class_1_EF6F84ECF3D1E556_TypeDefinitionIndex = 82238;

class Class_3_4D9D6A591C0DD46D_Class_1_EF6F84ECF3D1E556 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x10
	::Class_3_4D9D6A591C0DD46D* Field_1_0; // 0x40
	::System::Int32 Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_CLASS_1_EF6F84ECF3D1E556__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C6DC7A7226EA026(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_CLASS_1_EF6F84ECF3D1E556_METHOD_1_3C6DC7A7226EA026_OFFSET))(this, a1);
	}
};
