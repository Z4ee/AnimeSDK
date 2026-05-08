#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DE7552E11FB0BAEE_CLASS_1_0A41E43F17FA5E89__CTOR_OFFSET UNITYSDK_OFFSET(0x13DBAF70)

inline static constexpr unsigned int Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89_TypeDefinitionIndex = 52322;

class Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_CLASS_1_0A41E43F17FA5E89__CTOR_OFFSET))(this, a1, a2);
	}
};
