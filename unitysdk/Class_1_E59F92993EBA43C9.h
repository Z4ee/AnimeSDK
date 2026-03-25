#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E59F92993EBA43C9_CLEAR_OFFSET UNITYSDK_OFFSET(0x16753660)
#define CLASS_1_E59F92993EBA43C9__CTOR_OFFSET UNITYSDK_OFFSET(0x167536B0)

inline static constexpr unsigned int Class_1_E59F92993EBA43C9_TypeDefinitionIndex = 33529;

class Class_1_E59F92993EBA43C9 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_0; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59F92993EBA43C9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59F92993EBA43C9_CLEAR_OFFSET))(this);
	}
};
