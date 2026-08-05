#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_9903E79CA9B49844_CLASS_1_0095F8132D290A3C_METHOD_1_E6A0E1534252E9D5_OFFSET UNITYSDK_OFFSET(0x14FDC1F0)
#define CLASS_1_9903E79CA9B49844_CLASS_1_0095F8132D290A3C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDB5E0)

inline static constexpr unsigned int Class_1_9903E79CA9B49844_Class_1_0095F8132D290A3C_TypeDefinitionIndex = 60716;

class Class_1_9903E79CA9B49844_Class_1_0095F8132D290A3C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_0095F8132D290A3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6A0E1534252E9D5(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_0095F8132D290A3C_METHOD_1_E6A0E1534252E9D5_OFFSET))(this, a1);
	}
};
