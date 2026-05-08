#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"

class Class_1_95E491FD617A3F68;
namespace System { class String; }

#define CLASS_1_A3B84CEE7829778F__CTOR_OFFSET UNITYSDK_OFFSET(0x12AACC50)

inline static constexpr unsigned int Class_1_A3B84CEE7829778F_TypeDefinitionIndex = 42122;

class Class_1_A3B84CEE7829778F : public ::System::Object
{
public:
	::Class_1_95E491FD617A3F68* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Il2CppArray<::Struct_2_2465FE796254C062>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3B84CEE7829778F__CTOR_OFFSET))(this);
	}
};
