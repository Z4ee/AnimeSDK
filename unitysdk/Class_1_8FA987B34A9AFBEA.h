#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8FA987B34A9AFBEA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C478B0)
#define CLASS_1_8FA987B34A9AFBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C478A0)

inline static constexpr unsigned int Class_1_8FA987B34A9AFBEA_TypeDefinitionIndex = 38219;

class Class_1_8FA987B34A9AFBEA : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_1; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA987B34A9AFBEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA987B34A9AFBEA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
