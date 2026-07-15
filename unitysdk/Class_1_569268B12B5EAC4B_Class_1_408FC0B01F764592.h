#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_569268B12B5EAC4B_LuaObjectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_569268B12B5EAC4B_CLASS_1_408FC0B01F764592__CTOR_OFFSET UNITYSDK_OFFSET(0x18197660)

inline static constexpr unsigned int Class_1_569268B12B5EAC4B_Class_1_408FC0B01F764592_TypeDefinitionIndex = 66352;

class Class_1_569268B12B5EAC4B_Class_1_408FC0B01F764592 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::IntPtr Field_1_3; // 0x28
	::System::IntPtr Field_1_4; // 0x30
	::Class_1_569268B12B5EAC4B_LuaObjectType Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_CLASS_1_408FC0B01F764592__CTOR_OFFSET))(this);
	}
};
