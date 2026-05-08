#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_4D9D6A591C0DD46D;

#define CLASS_3_4D9D6A591C0DD46D_CLASS_1_4296E5DAEFD8E683_METHOD_1_0133FC1ECE5B03AD_OFFSET UNITYSDK_OFFSET(0x12C5F1C0)
#define CLASS_3_4D9D6A591C0DD46D_CLASS_1_4296E5DAEFD8E683__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5F1B0)

inline static constexpr unsigned int Class_3_4D9D6A591C0DD46D_Class_1_4296E5DAEFD8E683_TypeDefinitionIndex = 60051;

class Class_3_4D9D6A591C0DD46D_Class_1_4296E5DAEFD8E683 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x10
	::Class_3_4D9D6A591C0DD46D* Field_1_2; // 0x40
	::System::Int32 Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_CLASS_1_4296E5DAEFD8E683__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0133FC1ECE5B03AD(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_CLASS_1_4296E5DAEFD8E683_METHOD_1_0133FC1ECE5B03AD_OFFSET))(this, a1);
	}
};
