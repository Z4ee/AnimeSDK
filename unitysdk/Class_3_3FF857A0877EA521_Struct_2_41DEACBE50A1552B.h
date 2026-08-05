#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3FF857A0877EA521;
namespace System { class String; }

#define CLASS_3_3FF857A0877EA521_STRUCT_2_41DEACBE50A1552B_INVOKE_OFFSET UNITYSDK_OFFSET(0x7BCA30)

inline static constexpr unsigned int Class_3_3FF857A0877EA521_Struct_2_41DEACBE50A1552B_TypeDefinitionIndex = 85501;

struct alignas(8) Class_3_3FF857A0877EA521_Struct_2_41DEACBE50A1552B
{
	::Class_3_3FF857A0877EA521* Field_2_0; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_2_7; // 0x18
	::System::String* Field_2_6; // 0x28
	::System::Boolean Field_2_5; // 0x30
	::System::Int32 Field_2_4; // 0x34

	/*
	::System::Void Invoke(::System::String* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_STRUCT_2_41DEACBE50A1552B_INVOKE_OFFSET))(this, a1, a2);
	}
	*/
};
