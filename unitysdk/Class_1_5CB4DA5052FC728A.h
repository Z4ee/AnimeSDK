#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5CB4DA5052FC728A_METHOD_1_2B672B5ABF2502D2_OFFSET UNITYSDK_OFFSET(0x164BA020)

inline static constexpr unsigned int Class_1_5CB4DA5052FC728A_TypeDefinitionIndex = 31963;

class Class_1_5CB4DA5052FC728A : public ::System::Object
{
public:
	static ::System::Void Method_1_2B672B5ABF2502D2(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CB4DA5052FC728A_METHOD_1_2B672B5ABF2502D2_OFFSET))(a1, a2, a3);
	}
};
