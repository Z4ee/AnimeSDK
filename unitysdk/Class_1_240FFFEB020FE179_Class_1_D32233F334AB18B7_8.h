#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_240FFFEB020FE179;
namespace System { class Action; }

#define CLASS_1_240FFFEB020FE179_CLASS_1_D32233F334AB18B7_8_METHOD_1_FF7B20F133FFB710_OFFSET UNITYSDK_OFFSET(0x15C00770)
#define CLASS_1_240FFFEB020FE179_CLASS_1_D32233F334AB18B7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x15C00760)

inline static constexpr unsigned int Class_1_240FFFEB020FE179_Class_1_D32233F334AB18B7_8_TypeDefinitionIndex = 16213;

class Class_1_240FFFEB020FE179_Class_1_D32233F334AB18B7_8 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_240FFFEB020FE179* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_240FFFEB020FE179_CLASS_1_D32233F334AB18B7_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF7B20F133FFB710(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_240FFFEB020FE179_CLASS_1_D32233F334AB18B7_8_METHOD_1_FF7B20F133FFB710_OFFSET))(this, a1);
	}
};
