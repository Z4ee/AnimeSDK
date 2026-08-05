#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"

class Class_1_912E0458D58825D3;
namespace System { class String; }

#define CLASS_1_9A9134AB81762525__CTOR_OFFSET UNITYSDK_OFFSET(0x155A2E10)

inline static constexpr unsigned int Class_1_9A9134AB81762525_TypeDefinitionIndex = 65262;

class Class_1_9A9134AB81762525 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_2465FE796254C062>* Field_1_0; // 0x10
	::Class_1_912E0458D58825D3* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A9134AB81762525__CTOR_OFFSET))(this);
	}
};
