#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_9903E79CA9B49844_CLASS_1_33A1783079588092_METHOD_1_1C9FC07022D42E75_OFFSET UNITYSDK_OFFSET(0x1058B970)
#define CLASS_1_9903E79CA9B49844_CLASS_1_33A1783079588092__CTOR_OFFSET UNITYSDK_OFFSET(0x1058B960)

inline static constexpr unsigned int Class_1_9903E79CA9B49844_Class_1_33A1783079588092_TypeDefinitionIndex = 51900;

class Class_1_9903E79CA9B49844_Class_1_33A1783079588092 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_33A1783079588092__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C9FC07022D42E75(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_33A1783079588092_METHOD_1_1C9FC07022D42E75_OFFSET))(this, a1);
	}
};
