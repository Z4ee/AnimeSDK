#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_544DA5C0859B476B__CTOR_OFFSET UNITYSDK_OFFSET(0x17939100)

inline static constexpr unsigned int Class_1_544DA5C0859B476B_TypeDefinitionIndex = 22628;

class Class_1_544DA5C0859B476B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544DA5C0859B476B__CTOR_OFFSET))(this);
	}
};
